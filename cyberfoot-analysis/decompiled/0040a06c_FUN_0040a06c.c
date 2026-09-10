// Address: 0040a06c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0040a06c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  int local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  uVar1 = FUN_00405cbc(param_1,&local_10);
  if (local_10 != 0) {
    local_8 = 0xb;
    local_c = param_1;
    FUN_00409434(PTR_PTR_0066b02c,&local_c,0,uVar1,extraout_EDX);
  }
  return uVar1;
}

