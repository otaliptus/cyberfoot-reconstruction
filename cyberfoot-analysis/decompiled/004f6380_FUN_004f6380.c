// Address: 004f6380
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f6380(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_14;
  
  local_14 = param_2;
  if (-1 < param_2 + -1) {
    do {
      iVar2 = FUN_004f590c(PTR_DAT_004f56c8,1);
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x102c);
      *(int *)(param_1 + 0x1044) = *(int *)(param_1 + 0x1044) + 1;
      FUN_0041dec0(*(undefined4 *)(param_1 + 0x1034),iVar2);
      iVar2 = *(int *)(param_1 + 0x1008);
      if (-1 < iVar2 + -1) {
        iVar6 = 0;
        do {
          iVar3 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))
                            (*(int **)(param_1 + 0x1010),iVar6);
          switch(*(undefined1 *)(iVar3 + 0x3c)) {
          case 0:
            iVar3 = FUN_004f7140(PTR_PTR_004f3fc0,1,param_1);
            break;
          case 1:
            iVar3 = FUN_004f4064(PTR_PTR_004f3cbc,1,param_1);
            break;
          default:
            iVar3 = FUN_004f475c(PTR_PTR_004f3f18,1,param_1);
            break;
          case 3:
            iVar3 = FUN_004f4260(PTR_PTR_004f3d54,1,param_1);
            break;
          case 4:
            iVar3 = FUN_004f4424(PTR_PTR_004f3dec,1,param_1);
            break;
          case 6:
            iVar3 = FUN_004f4cec(PTR_PTR_004f4bc0,1,param_1);
            break;
          case 7:
            iVar3 = FUN_004f45c4(PTR_PTR_004f3e80,1,param_1);
            break;
          case 0xb:
            iVar3 = FUN_004f5160(PTR_LAB_004f4c54,1,param_1);
            uVar4 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))
                              (*(int **)(param_1 + 0x1010),iVar6);
            FUN_004f5198(iVar3,uVar4);
          }
          iVar5 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))
                            (*(int **)(param_1 + 0x1010),iVar6);
          uVar1 = FUN_0042a660(*(undefined4 *)(iVar5 + 0x58));
          *(undefined1 *)(iVar3 + 0xc) = uVar1;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))
                            (*(int **)(param_1 + 0x1010),iVar6);
          *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(*(int *)(iVar5 + 0x58) + 0x18);
          iVar5 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))
                            (*(int **)(param_1 + 0x1010),iVar6);
          *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar5 + 0x34);
          FUN_004f727c(iVar3,0);
          FUN_0041dec0(*(undefined4 *)(param_1 + 4 + iVar6 * 4),iVar3);
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      *(int *)(param_1 + 0x1028) = *(int *)(param_1 + 0x1028) + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  *(undefined1 *)(param_1 + 0x1038) = 0;
  return;
}

