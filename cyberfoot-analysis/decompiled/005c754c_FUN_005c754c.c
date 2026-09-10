// Address: 005c754c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c754c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x37c));
  if (iVar1 + 1 < 4) {
    FUN_005c5d38(param_1,param_2,iVar1 + 1,1);
    return;
  }
  FUN_005c5d38(param_1,param_2,iVar1 + -2,2);
  return;
}

