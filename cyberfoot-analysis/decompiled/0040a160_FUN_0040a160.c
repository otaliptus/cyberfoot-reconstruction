// Address: 0040a160
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0040a160(undefined4 param_1)

{
  char cVar1;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined1 local_8;
  
  cVar1 = FUN_0040a1d0(param_1,local_10);
  if (cVar1 == '\0') {
    local_8 = 0xb;
    local_c = param_1;
    FUN_00409434(PTR_PTR_0066af58,&local_c,0);
  }
  return local_10[0];
}

