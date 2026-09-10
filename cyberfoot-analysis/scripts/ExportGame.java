// Static analysis only: recover Delphi method labels and export decompiler output.
// @category Cyberfoot
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.address.Address;
import java.nio.file.*;
import java.io.*;
import java.util.*;
public class ExportGame extends GhidraScript {
 public void run() throws Exception {
  String[] args=getScriptArgs(); Path root=Paths.get(args[0]);
  Set<Function> selected=new LinkedHashSet<>();
  for(String line:Files.readAllLines(root.resolve("reports/delphi-symbols.tsv"))) {
   String[] p=line.split("\t"); if(p.length<2)continue;
   Address a=toAddr(Long.parseLong(p[0].substring(2),16));
   Function f=getFunctionAt(a); if(f==null){disassemble(a); f=createFunction(a,p[1]);}
   if(f!=null){f.setName(p[1],SourceType.USER_DEFINED);
    if(p[1].matches("TForm(1|2|3|9|13|38|46|67|75|88)_.+"))selected.add(f);
   }
  }
  FunctionIterator more=currentProgram.getFunctionManager().getFunctions(true);
  while(more.hasNext()){Function f=more.next();long a=f.getEntryPoint().getOffset();if((a>=0x606c80&&a<0x62a000)||a==0x4032c8)selected.add(f);}
  Set<Function> expanded=new LinkedHashSet<>(selected);
  for(Function f:selected)for(Function c:f.getCalledFunctions(monitor))if(!c.isExternal()&&c.getEntryPoint().getOffset()>=0x550000)expanded.add(c);
  Path out=root.resolve("decompiled"); Files.createDirectories(out);
  DecompInterface di=new DecompInterface(); di.openProgram(currentProgram);
  try(PrintWriter idx=new PrintWriter(Files.newBufferedWriter(root.resolve("reports/functions.tsv")) )) {
   FunctionIterator it=currentProgram.getFunctionManager().getFunctions(true);
   while(it.hasNext()){Function f=it.next();idx.println(f.getEntryPoint()+"\t"+f.getName()+"\t"+f.getBody().getNumAddresses());}
  }
  try(PrintWriter cg=new PrintWriter(Files.newBufferedWriter(root.resolve("reports/callgraph.tsv")))) {
   FunctionIterator it=currentProgram.getFunctionManager().getFunctions(true);
   while(it.hasNext()){Function f=it.next();for(Function c:f.getCalledFunctions(monitor))cg.println(f.getEntryPoint()+"\t"+f.getName()+"\t"+c.getEntryPoint()+"\t"+c.getName());}
  }
  int ok=0,fail=0;
  for(Function f:expanded){
   if(monitor.isCancelled())break;
   DecompileResults r=di.decompileFunction(f,20,monitor);
   String text="// Address: "+f.getEntryPoint()+"\n// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.\n";
   if(r.decompileCompleted()){text+=r.getDecompiledFunction().getC();ok++;}else{text+="// FAILED: "+r.getErrorMessage();fail++;}
   Files.writeString(out.resolve(f.getEntryPoint()+"_"+f.getName().replaceAll("[^a-zA-Z0-9_]","_")+".c"),text);
  }
  di.dispose();println("CYBERFOOT_EXPORT success="+ok+" failed="+fail);
 }
}
