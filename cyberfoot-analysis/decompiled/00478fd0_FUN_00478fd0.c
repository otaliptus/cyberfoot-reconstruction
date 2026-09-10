// Address: 00478fd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00478fd0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    FUN_00403a84(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar1 = FUN_00403c80(param_1);
      uVar2 = (**(code **)(iVar1 + 0x14))(iVar1,1,param_1);
      *(undefined4 *)(param_1 + 0x44) = uVar2;
    }
    (**(code **)(**(int **)(param_1 + 0x44) + 0xc))(*(int **)(param_1 + 0x44),param_2);
    iVar1 = *(int *)(param_1 + 0x44);
    *(int *)(iVar1 + 0xc) = param_1;
    *(undefined1 **)(iVar1 + 8) = &LAB_00479264;
    FUN_00403c80(param_1,param_2,(*(byte *)(param_2 + 0x1c) & 1) != 0);
    FUN_00426f28(param_2,param_1);
  }
  return;
}

