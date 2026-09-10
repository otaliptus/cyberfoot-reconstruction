// Address: 0046652c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046652c(int param_1)

{
  undefined1 *puVar1;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_004665c2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x30) == 0) {
    local_c = *(undefined4 *)(param_1 + 8);
    local_8 = 0xb;
    FUN_00406d44(PTR_PTR_0066b45c,&local_10,0,0,&local_c);
    FUN_0040e3ac(PTR_DAT_0041b6dc,1,local_10);
    FUN_00404250();
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  hdc = (HDC)(**(code **)(**(int **)(param_1 + 0x30) + 0x48))();
  SetViewportOrgEx(hdc,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x44),(LPPOINT)0x0);
  IntersectClipRect(hdc,0,0,*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x4c));
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004665c9;
  puStack_20 = (undefined1 *)0x4665c1;
  FUN_004048d4(&local_10,uStack_24,puVar1);
  return;
}

