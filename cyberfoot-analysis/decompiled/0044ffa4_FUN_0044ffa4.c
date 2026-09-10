// Address: 0044ffa4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044ffa4(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uStack_14;
  
  uStack_14 = param_3;
  iVar3 = FUN_0044e8c4(*(undefined4 *)(param_1 + 0x22c));
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      piVar2 = *(int **)(param_1 + 0x24c);
      if (piVar2 == (int *)0x0) {
        iVar5 = FUN_0044e8f4(*(undefined4 *)(param_1 + 0x22c),iVar6);
        uVar1 = *(undefined1 *)(iVar5 + 0x2a);
        uVar4 = FUN_0044e8f4(*(undefined4 *)(param_1 + 0x22c),iVar6);
        FUN_0044e2a0(uVar4,uVar1);
      }
      else {
        (**(code **)(*piVar2 + 0xc))(piVar2,&uStack_14,1);
        uVar4 = FUN_0044e8f4(*(undefined4 *)(param_1 + 0x22c),iVar6);
        FUN_0044e2a0(uVar4,uStack_14 & 0xff);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00403a84(*(undefined4 *)(param_1 + 0x24c));
  *(undefined4 *)(param_1 + 0x24c) = 0;
  return;
}

