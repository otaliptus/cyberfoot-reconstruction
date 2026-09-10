// Address: 0041e4e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041e4e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != *(int *)(param_1 + 4)) {
    if (param_2 < 0) {
      FUN_0041e4bc(param_1,param_2,param_3,param_3);
    }
    iVar1 = param_2 + 0x1f;
    if (iVar1 < 0) {
      iVar1 = param_2 + 0x3e;
    }
    iVar3 = (iVar1 >> 5) << 2;
    iVar1 = *(int *)(param_1 + 4) + 0x1f;
    if (iVar1 < 0) {
      iVar1 = *(int *)(param_1 + 4) + 0x3e;
    }
    iVar1 = (iVar1 >> 5) << 2;
    if (iVar1 != iVar3) {
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = FUN_004027fc(iVar3);
        FUN_004032a8(iVar4,iVar3,0);
      }
      if (iVar1 != 0) {
        if (iVar4 != 0) {
          uVar2 = FUN_0041e4d4(iVar1,iVar3);
          FUN_00402a04(*(undefined4 *)(param_1 + 8),iVar4,uVar2);
        }
        FUN_0040281c(*(undefined4 *)(param_1 + 8),iVar1);
      }
      *(int *)(param_1 + 8) = iVar4;
    }
    *(int *)(param_1 + 4) = param_2;
  }
  return;
}

