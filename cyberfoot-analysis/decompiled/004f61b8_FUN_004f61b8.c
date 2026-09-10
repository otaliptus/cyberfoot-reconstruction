// Address: 004f61b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f61b8(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 4 + *(int *)(param_1 + 0x1008) * 4) = uVar3;
  iVar6 = *(int *)(param_1 + 0x1028);
  if (-1 < iVar6 + -1) {
    do {
      piVar1 = *(int **)(param_1 + 0x1010);
      iVar4 = FUN_0050ae9c(piVar1);
      iVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,iVar4 + -1);
      switch(*(undefined1 *)(iVar4 + 0x3c)) {
      case 0:
        iVar5 = FUN_004f7140(PTR_PTR_004f3fc0,1,param_1);
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
      case 7:
        iVar5 = FUN_004f45c4(PTR_PTR_004f3e80,1,param_1);
        break;
      case 0xb:
        iVar5 = FUN_004f5160(PTR_LAB_004f4c54,1,param_1);
        piVar1 = *(int **)(param_1 + 0x1010);
        iVar4 = FUN_0050ae9c(piVar1);
        uVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,iVar4 + -1);
        FUN_004f5198(iVar5,uVar3);
      }
      piVar1 = *(int **)(param_1 + 0x1010);
      iVar4 = FUN_0050ae9c(piVar1);
      iVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,iVar4 + -1);
      uVar2 = FUN_0042a660(*(undefined4 *)(iVar4 + 0x58));
      *(undefined1 *)(iVar5 + 0xc) = uVar2;
      piVar1 = *(int **)(param_1 + 0x1010);
      iVar4 = FUN_0050ae9c(piVar1);
      iVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,iVar4 + -1);
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(*(int *)(iVar4 + 0x58) + 0x18);
      piVar1 = *(int **)(param_1 + 0x1010);
      iVar4 = FUN_0050ae9c(piVar1);
      iVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,iVar4 + -1);
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar4 + 0x34);
      FUN_004f727c(iVar5,0);
      FUN_0041dec0(*(undefined4 *)(param_1 + 4 + *(int *)(param_1 + 0x1008) * 4),iVar5);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(int *)(param_1 + 0x1008) = *(int *)(param_1 + 0x1008) + 1;
  return;
}

