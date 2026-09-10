// Address: 005707e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005707e8(int param_1)

{
  undefined1 *puVar1;
  DWORD DVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x5707fa;
  FUN_005705d0(param_1);
  puStack_1c = &LAB_00570887;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  puStack_28 = (undefined1 *)0x57080f;
  puStack_18 = &stack0xfffffffc;
  DVar2 = GetSysColor(2);
  FUN_00570674(param_1,DVar2);
  puStack_28 = &LAB_0057084c;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  DVar2 = GetSysColor(0x1b);
  FUN_00570698(param_1,DVar2);
  puVar1 = puStack_18;
  *(undefined1 *)(param_1 + 0x170) = 1;
  *in_FS_OFFSET = uStack_2c;
  *in_FS_OFFSET = local_20;
  puStack_18 = &LAB_0057088e;
  puStack_1c = (undefined1 *)0x570886;
  FUN_005705d8(param_1,local_20,puVar1);
  return;
}

