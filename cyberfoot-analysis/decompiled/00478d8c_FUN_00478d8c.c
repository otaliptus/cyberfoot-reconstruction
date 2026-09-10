// Address: 00478d8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00478d8c(int *param_1,int param_2)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_1[0x17] != 0)) {
    iVar1 = FUN_00478b4c(param_1);
    if (param_2 < iVar1) goto LAB_00478db2;
  }
  FUN_00476188(PTR_PTR_0066b0c0);
LAB_00478db2:
  iVar1 = FUN_0041e01c(param_1[0x17],param_2);
  FUN_0041df0c(param_1[0x17],param_2);
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  if (param_1[0xd] != 0) {
    FUN_00476fb0(param_1);
  }
  iVar1 = FUN_00478b4c(param_1);
  (**(code **)(*param_1 + 0x3c))(param_1,iVar1 == 0);
  return;
}

