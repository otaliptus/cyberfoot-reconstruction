// Address: 004f2444
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f2444(int param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 in_ST0;
  
  FUN_004ef5e0(param_1);
  if ((*(byte *)(param_1 + 0x26c) & 1) == 0) {
    FUN_004f1ec0(param_1);
    FUN_004f269c(param_1,extraout_EDX,extraout_ECX,(double)in_ST0);
  }
  return;
}

