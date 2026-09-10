// Address: 00426948
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00426948(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_004269de;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar3 = &stack0xfffffffc;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puStack_28 = &LAB_00426989;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    (**(code **)(*param_1 + 4))();
    *in_FS_OFFSET = uStack_2c;
    puVar3 = puStack_18;
  }
  puStack_18 = puVar3;
  puVar3 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004269e5;
  cVar1 = *(char *)((int)param_1 + 0xf);
  iVar2 = param_1[5];
  puStack_1c = (undefined1 *)0x4269be;
  (**(code **)*param_1)(param_1,(undefined4 *)*param_1,puVar3);
  *(undefined1 *)(param_1 + 4) = 1;
  puStack_1c = (undefined1 *)0x4269ca;
  FUN_00426784();
  if (cVar1 != '\0') {
    puStack_1c = (undefined1 *)0x4269d6;
    FUN_00403a84(param_1);
  }
  puStack_1c = (undefined1 *)0x4269dd;
  FUN_004048cc(iVar2);
  return;
}

