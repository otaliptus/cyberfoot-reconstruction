// Address: 004df038
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004df038(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  undefined1 local_20;
  DWORD local_1c;
  undefined1 local_18;
  undefined4 local_14;
  DWORD local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_14 = 0;
  local_8 = 0;
  puStack_30 = &LAB_004df0e1;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  uVar2 = FUN_00406260(PTR_PTR_00461f94);
  puVar3 = &local_8;
  local_10 = GetCurrentProcessId();
  local_c = 0;
  FUN_0040ae64("Delphi%.8X",&local_10,0,puVar3);
  FUN_00404928(&DAT_0067aed4,local_8);
  puVar3 = &local_14;
  local_20 = 0;
  local_24 = uVar2;
  local_1c = GetCurrentThreadId();
  local_18 = 0;
  FUN_0040ae64("ControlOfs%.8X%.8X",&local_24,1,puVar3);
  FUN_00404928(&DAT_0067aed8,local_14);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004df0e8;
  puStack_30 = (undefined1 *)0x4df0d8;
  FUN_004048d4(&local_14,uStack_34,puVar1);
  puStack_30 = (undefined1 *)0x4df0e0;
  FUN_004048d4(&local_8);
  return;
}

