// Address: 0040a9e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040a9e4(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  undefined1 auStack_35 [33];
  undefined1 *local_14;
  undefined1 local_10;
  
  if (0x1f < param_3) {
    param_3 = 0x1f;
  }
  cVar1 = FUN_0040ed98(param_2,param_3 - 1);
  if (cVar1 == '\x01') {
    param_3 = param_3 - 1;
  }
  FUN_0040a78c(auStack_35 + 1,param_2,param_3);
  auStack_35[param_3 + 1] = 0;
  local_10 = 6;
  local_14 = auStack_35 + 1;
  FUN_00409434((&PTR_PTR_00662188)[param_1],&local_14,0);
  return;
}

