// Address: 00467d00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00467d00(int *param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if (DAT_00467dac == (DAT_00467da8 & *(ushort *)(param_1 + 7))) {
    iVar1 = param_1[0x1d];
    if ((*(int *)(iVar1 + 0xc) == 0) || (param_1[0x12] <= *(int *)(iVar1 + 0xc))) {
      if ((*(int *)(iVar1 + 0x14) != 0) && (param_1[0x12] < *(int *)(iVar1 + 0x14))) {
        *(int *)(iVar1 + 0x14) = param_1[0x12];
      }
    }
    else {
      *(int *)(iVar1 + 0xc) = param_1[0x12];
    }
    if ((*(int *)(iVar1 + 8) == 0) || (param_1[0x13] <= *(int *)(iVar1 + 8))) {
      if ((*(int *)(iVar1 + 0x10) != 0) && (param_1[0x13] < *(int *)(iVar1 + 0x10))) {
        *(int *)(iVar1 + 0x10) = param_1[0x13];
      }
    }
    else {
      *(int *)(iVar1 + 8) = param_1[0x13];
    }
    iVar1 = *(int *)(param_2 + 8);
    if ((((iVar1 != 0) && (param_1[0x28] != 0)) && ((*(byte *)((int)param_1 + 0x55) & 4) == 0)) &&
       ((((*(byte *)(iVar1 + 0x18) & 1) == 0 && (*(int *)(iVar1 + 0x10) != 0)) &&
        (*(int *)(iVar1 + 0x14) != 0)))) {
      FUN_00467400(param_1);
    }
  }
  return;
}

