// Address: 00651fa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00651fa0(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_20 = &LAB_00651fd7;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,"confign1.nam",0x20);
  *in_FS_OFFSET = uStack_24;
  puStack_20 = &LAB_00652064;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0xc))(local_8,&local_c,4);
  FUN_004060a8(PTR_DAT_0066b37c,PTR_DAT_00489060,1,local_c);
  iVar2 = local_c;
  if (-1 < local_c + -1) {
    local_c = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,*(int *)PTR_DAT_0066b37c + local_c * 0x15,0x15);
      local_c = local_c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0065206b;
  puStack_20 = (undefined1 *)0x652063;
  FUN_00403a84(local_8,uStack_24,puVar1);
  return;
}

