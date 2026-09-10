// Address: 0046557c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046557c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    FUN_00403a84(*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xffff7fff;
  }
  else {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x8000;
    if (*(int *)(param_1 + 0x6c) == 0) {
      iVar1 = FUN_00403c80(param_1);
      uVar2 = (**(code **)(iVar1 + 0x14))(iVar1,1,param_1);
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
    }
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xc))(*(int **)(param_1 + 0x6c),param_2);
    iVar1 = *(int *)(param_1 + 0x6c);
    *(int *)(iVar1 + 0xc) = param_1;
    *(undefined1 **)(iVar1 + 8) = &LAB_004681e8;
    FUN_00403c80(param_1,param_2,(*(byte *)(param_2 + 0x1c) & 1) != 0);
    FUN_00426f28(param_2,param_1);
  }
  return;
}

