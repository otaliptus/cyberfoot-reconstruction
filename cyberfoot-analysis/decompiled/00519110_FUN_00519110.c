// Address: 00519110
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1
FUN_00519110(int param_1,byte param_2,uint param_3,byte *param_4,byte *param_5,byte *param_6,
            byte param_7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = **(int **)(param_1 + 0x2c) + 0x10;
  if (iVar2 < 0) {
    iVar2 = **(int **)(param_1 + 0x2c) + 0x2f;
  }
  iVar2 = (uint)param_2 + (iVar2 >> 5);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  iVar3 = **(int **)(param_1 + 0x30) + 0x10;
  if (iVar3 < 0) {
    iVar3 = **(int **)(param_1 + 0x30) + 0x2f;
  }
  iVar3 = (param_3 & 0xff) + (iVar3 >> 5);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  iVar4 = **(int **)(param_1 + 0x34) + 0x10;
  if (iVar4 < 0) {
    iVar4 = **(int **)(param_1 + 0x34) + 0x2f;
  }
  iVar4 = (uint)param_7 + (iVar4 >> 5);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  uVar1 = FUN_00517c20(param_1,iVar2,iVar3,param_4,param_5,param_6,iVar4);
  FUN_005190c0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x38),
               iVar2 - (uint)*param_6,&stack0xfffffffc);
  FUN_005190c0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x3c),
               iVar3 - (uint)*param_5,&stack0xfffffffc);
  FUN_005190c0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x40),
               iVar4 - (uint)*param_4,&stack0xfffffffc);
  if (*(int *)(param_1 + 4) == 1) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 4;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 4;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 4;
  }
  else {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -4;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -4;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -4;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -4;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -4;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -4;
  }
  return uVar1;
}

