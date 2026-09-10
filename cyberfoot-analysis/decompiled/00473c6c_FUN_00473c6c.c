// Address: 00473c6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00473c6c(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  HIMAGELIST p_Var3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00473cff;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  p_Var3 = ImageList_Create(*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x30),
                            *(uint *)(&DAT_006630ec + (uint)*(byte *)(param_1 + 0x41) * 4) | 0xfe,
                            *(int *)(param_1 + 0x38),*(int *)(param_1 + 0x38));
  *(HIMAGELIST *)(param_1 + 0x3c) = p_Var3;
  cVar2 = FUN_004739fc(param_1);
  if (cVar2 == '\0') {
    FUN_00406d44(PTR_PTR_0066b3e4,&local_8);
    FUN_0040e370(PTR_DAT_0041b6dc,1,local_8);
    FUN_00404250();
  }
  if (*(int *)(param_1 + 0x44) != 0x1fffffff) {
    FUN_00474240(param_1,*(int *)(param_1 + 0x44));
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00473d06;
  puStack_18 = (undefined1 *)0x473cfe;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

