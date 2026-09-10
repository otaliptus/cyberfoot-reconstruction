// Address: 004f6758
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f6758(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  *(int *)(param_1 + 0x1008) = *(int *)(param_1 + 0x1008) + 1;
  uVar2 = FUN_00403a54(PTR_PTR_0041b73c,1,param_3,param_3);
  iVar6 = *(int *)(param_1 + 0x1028);
  if (-1 < iVar6 + -1) {
    do {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))
                        (*(int **)(param_1 + 0x1010),param_2);
      switch(*(undefined1 *)(iVar3 + 0x3c)) {
      case 0:
      case 7:
        iVar5 = FUN_004f45c4(PTR_PTR_004f3e80,1,param_1);
        break;
      case 1:
        iVar5 = FUN_004f4064(PTR_PTR_004f3cbc,1,param_1);
        break;
      default:
        iVar5 = FUN_004f475c(PTR_PTR_004f3f18,1,param_1);
        break;
      case 3:
        iVar5 = FUN_004f4260(PTR_PTR_004f3d54,1,param_1);
        break;
      case 4:
        iVar5 = FUN_004f4424(PTR_PTR_004f3dec,1,param_1);
        break;
      case 6:
        iVar5 = FUN_004f4cec(PTR_PTR_004f4bc0,1,param_1);
        break;
      case 0xb:
        iVar5 = FUN_004f5160(PTR_LAB_004f4c54,1,param_1);
        iVar3 = FUN_0050ae9c(*(undefined4 *)(param_1 + 0x1010));
        uVar4 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))
                          (*(int **)(param_1 + 0x1010),iVar3 + -1);
        FUN_004f5198(iVar5,uVar4);
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))
                        (*(int **)(param_1 + 0x1010),param_2);
      uVar1 = FUN_0042a660(*(undefined4 *)(iVar3 + 0x58));
      *(undefined1 *)(iVar5 + 0xc) = uVar1;
      iVar3 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))
                        (*(int **)(param_1 + 0x1010),param_2);
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(*(int *)(iVar3 + 0x58) + 0x18);
      iVar3 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))
                        (*(int **)(param_1 + 0x1010),param_2);
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar3 + 0x34);
      FUN_004f727c(iVar5,0);
      FUN_0041dec0(uVar2,iVar5);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined1 *)(param_1 + 0x1038) = 0;
  iVar6 = *(int *)(param_1 + 0x1008) + -1;
  if (param_2 - iVar6 == 0 || param_2 < iVar6) {
    iVar3 = (param_2 - iVar6) + -1;
    do {
      *(undefined4 *)(param_1 + 8 + iVar6 * 4) = *(undefined4 *)(param_1 + 4 + iVar6 * 4);
      iVar6 = iVar6 + -1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 4 + param_2 * 4) = uVar2;
  return;
}

