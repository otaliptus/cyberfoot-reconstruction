// Address: 0048262c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048262c(int param_1,char param_2)

{
  undefined4 uVar1;
  
  *(char *)(param_1 + 0x22e) = param_2;
  if (*(int *)(param_1 + 0x27c) != 0) {
    FUN_004673cc(*(int *)(param_1 + 0x27c),0xb02b,param_2,0);
  }
  if (param_2 != '\0') {
    if ((*(int *)(param_1 + 0x220) == 0) && ((*(byte *)(param_1 + 0x1c) & 0x10) == 0)) {
      uVar1 = FUN_0046cf08(param_1,0,1,0,1);
      FUN_00482224(param_1,uVar1);
    }
    FUN_004826e0(param_1,1);
    FUN_004825dc(param_1);
  }
  return;
}

