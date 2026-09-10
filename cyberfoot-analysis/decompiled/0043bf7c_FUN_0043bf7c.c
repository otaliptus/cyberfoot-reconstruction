// Address: 0043bf7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043bf7c(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    if (((param_2 != *(int *)(param_1 + 0x218)) && (-1 < param_2)) &&
       (param_2 < *(int *)(*(int *)(param_1 + 0x210) + 8))) {
      iVar3 = FUN_0047e4c0(param_1);
      if (iVar3 != 0) {
        cVar2 = thunk_FUN_004694e1(param_1,*(undefined4 *)(iVar3 + 0x220));
        if (cVar2 != '\0') {
          FUN_00482224(iVar3,param_1);
        }
      }
      uVar4 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x210),param_2);
      FUN_00466468(uVar4);
      FUN_00466128(uVar4,1);
      FUN_0046571c(uVar4,5);
      iVar1 = *(int *)(param_1 + 0x218);
      if ((-1 < iVar1) && (iVar1 < *(int *)(*(int *)(param_1 + 0x210) + 8))) {
        uVar4 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x210),iVar1);
        FUN_00466128(uVar4,0);
      }
      *(int *)(param_1 + 0x218) = param_2;
      if ((iVar3 != 0) && (param_1 == *(int *)(iVar3 + 0x220))) {
        FUN_0046d040(param_1);
      }
      if (*(short *)(param_1 + 0x222) != 0) {
        (**(code **)(param_1 + 0x220))(*(undefined4 *)(param_1 + 0x224),param_1);
      }
    }
  }
  else {
    *(int *)(param_1 + 0x218) = param_2;
  }
  return;
}

