// Address: 004d8648
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004d8648(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_c;
  
  local_c = param_3;
  cVar1 = FUN_004d8504(param_1,param_2,&local_c);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004328ec(param_1,local_c);
    if (param_2 != *(int *)(iVar2 + 0x30)) {
      FUN_00404830("TNT Internal Error: FindWideComponentHelperIndex failed.",
                   "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntClasses.pas"
                   ,0x6ec);
    }
  }
  return iVar2;
}

