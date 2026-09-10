// Address: 005c738c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c738c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x37c));
  iVar2 = iVar1 + 1;
  if (iVar2 < 6) {
    if (iVar2 < 3) {
      FUN_005c5d38(param_1,param_2,iVar1 + 2,1);
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),iVar2);
    }
    else {
      FUN_005c5d38(param_1,param_2,iVar1 + -1,2);
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),iVar2);
    }
  }
  return;
}

