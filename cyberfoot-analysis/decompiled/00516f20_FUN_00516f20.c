// Address: 00516f20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00516f20(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_00516fcf;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00517260(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00406d44(&PTR_DAT_00516724,&local_8);
    FUN_00516934(local_8);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if ((param_2 < 0) || (*(int *)(param_1 + 0x20) <= param_2)) {
    FUN_00406d44(PTR_PTR_0066b4e4,&local_c);
    FUN_0040e370(PTR_DAT_00428588,1,local_c);
    FUN_00404250();
  }
  GdiFlush();
  FUN_0051698c(*(undefined4 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 0xe),0x20);
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00516fd6;
  puStack_20 = (undefined1 *)0x516fce;
  FUN_004048f8(&local_c,2,puVar2);
  return;
}

