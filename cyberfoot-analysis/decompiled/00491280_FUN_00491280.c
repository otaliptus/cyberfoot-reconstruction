// Address: 00491280
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00491280(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x58);
  param_1[0x73] = (int)puVar2;
  *puVar2 = FUN_00491194;
  puVar2[2] = &DAT_0049126c;
  puVar2[3] = &LAB_00491270;
  puVar2[0x11] = 0;
  puVar2[0xd] = 0;
  if (4 < param_1[0x1e]) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x37;
    *(undefined4 *)(iVar1 + 0x18) = 4;
    (**(code **)*param_1)();
  }
  if (0x100 < param_1[0x18]) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x39;
    *(undefined4 *)(iVar1 + 0x18) = 0x100;
    (**(code **)*param_1)();
  }
  FUN_0049080c(param_1);
  FUN_004909c0(param_1);
  if (param_1[0x16] == 2) {
    FUN_00491154(param_1);
  }
  return;
}

