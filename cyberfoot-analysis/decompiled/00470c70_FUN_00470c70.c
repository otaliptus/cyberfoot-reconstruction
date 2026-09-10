// Address: 00470c70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00470c70(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_0046e920(param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    iVar2 = FUN_0046e9cc(param_1);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20) - iVar2;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    cVar1 = FUN_0046e998(*(int *)(param_1 + 0x14));
    if (cVar1 == '\0') {
      FUN_00470c70(*(undefined4 *)(param_1 + 0x14));
    }
  }
  iVar2 = FUN_0046ef74(param_1);
  if (iVar2 != 0) {
    uVar3 = FUN_0046ef74(param_1);
    FUN_0046eecc(uVar3,*(undefined4 *)(param_1 + 0x20));
  }
  FUN_0046f244(*(undefined4 *)(param_4 + -4),*(undefined4 *)(param_1 + 0x14));
  return;
}

