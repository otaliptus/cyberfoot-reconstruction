// Address: 004f6904
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f6904(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x1008);
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))(*(int **)(param_1 + 0x1010),iVar6);
      switch(*(undefined1 *)(iVar2 + 0x3c)) {
      case 0:
      case 7:
        iVar2 = FUN_004f45c4(PTR_PTR_004f3e80,1,param_1);
        break;
      case 1:
        iVar2 = FUN_004f4064(PTR_PTR_004f3cbc,1,param_1);
        break;
      default:
        iVar2 = FUN_004f475c(PTR_PTR_004f3f18,1,param_1);
        break;
      case 3:
        iVar2 = FUN_004f4260(PTR_PTR_004f3d54,1,param_1);
        break;
      case 4:
        iVar2 = FUN_004f4424(PTR_PTR_004f3dec,1,param_1);
        break;
      case 0xb:
        iVar2 = FUN_004f5160(PTR_LAB_004f4c54,1,param_1);
        uVar3 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))
                          (*(int **)(param_1 + 0x1010),iVar6);
        FUN_004f5198(iVar2,uVar3);
      }
      iVar4 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))(*(int **)(param_1 + 0x1010),iVar6);
      uVar1 = FUN_0042a660(*(undefined4 *)(iVar4 + 0x58));
      *(undefined1 *)(iVar2 + 0xc) = uVar1;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))(*(int **)(param_1 + 0x1010),iVar6);
      *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(*(int *)(iVar4 + 0x58) + 0x18);
      iVar4 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))(*(int **)(param_1 + 0x1010),iVar6);
      FUN_004f7218(iVar2,*(undefined4 *)(iVar4 + 0x34));
      FUN_004f727c(iVar2,0);
      FUN_0041e098(*(undefined4 *)(param_1 + 4 + iVar6 * 4),param_2,iVar2);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = FUN_004f590c(PTR_DAT_004f56c8,1);
  *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(param_1 + 0x102c);
  FUN_0041e098(*(undefined4 *)(param_1 + 0x1034),param_2,iVar5);
  *(int *)(param_1 + 0x1044) = *(int *)(param_1 + 0x1044) + 1;
  *(int *)(param_1 + 0x1028) = *(int *)(param_1 + 0x1028) + 1;
  *(undefined1 *)(param_1 + 0x1038) = 0;
  return;
}

