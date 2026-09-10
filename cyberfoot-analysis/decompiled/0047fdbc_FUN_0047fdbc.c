// Address: 0047fdbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047fdbc(void)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 extraout_DL;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x47fdc7;
  local_8 = (int *)FUN_00403e50();
  local_9 = extraout_DL;
  if ((*(byte *)(local_8 + 7) & 8) == 0) {
    puStack_10 = (undefined1 *)0x47fde2;
    (**(code **)(**(int **)PTR_DAT_0066b748 + 0x14))();
  }
  puStack_14 = &LAB_0047fe86;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if ((char)local_8[0x8d] != '\0') {
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0xd8))();
  }
  FUN_004826e0(local_8,0);
  cVar3 = FUN_0046cde4(local_8);
  if (cVar3 != '\0') {
    (**(code **)(*local_8 + 0xac))();
  }
  FUN_00484f8c(DAT_0066cbf8,local_8);
  FUN_00403a84(local_8[0x8e]);
  FUN_00403a84(local_8[0x90]);
  FUN_0040fe60(local_8 + 0xbc);
  FUN_0047f164(local_8,CONCAT31((int3)((uint)extraout_EDX >> 8),local_9) & 0xfffffffc);
  puVar2 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0047fe8d;
  iVar1 = **(int **)PTR_DAT_0066b748;
  puStack_14 = (undefined1 *)0x47fe85;
  (**(code **)(iVar1 + 0x18))(*(int **)PTR_DAT_0066b748,iVar1,puVar2);
  return;
}

