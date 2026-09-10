// Address: 00498b38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00498b38(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_004988fc(param_1);
  FUN_0049891c(param_1,param_1[0xe] * 3 + 8);
  if ((0xffff < param_1[8]) || (0xffff < param_1[7])) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x29;
    *(undefined4 *)(iVar2 + 0x18) = 0xffff;
    (**(code **)*param_1)();
  }
  FUN_004988cc(param_1,param_1[0xd]);
  FUN_0049891c(param_1,param_1[8]);
  FUN_0049891c(param_1,param_1[7]);
  FUN_004988cc(param_1,param_1[0xe]);
  puVar1 = (undefined4 *)param_1[0x10];
  for (iVar2 = 0; iVar2 < param_1[0xe]; iVar2 = iVar2 + 1) {
    FUN_004988cc(param_1,*puVar1);
    FUN_004988cc(param_1,puVar1[2] * 0x10 + puVar1[3]);
    FUN_004988cc(param_1,puVar1[4]);
    puVar1 = puVar1 + 0x15;
  }
  return;
}

