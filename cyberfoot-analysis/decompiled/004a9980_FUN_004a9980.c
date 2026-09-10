// Address: 004a9980
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a9980(int param_1,byte param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_004a99f3;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (*(int *)(param_1 + 0x14) + -1 < (int)(uint)param_2) {
    puStack_18 = &stack0xfffffffc;
    FUN_00406d44(PTR_PTR_0066b2c0,&local_c);
    FUN_004aa278(*(undefined4 *)(param_1 + 0xc),PTR_DAT_004a4cfc,local_c);
  }
  else {
    iVar2 = FUN_004a6428(param_1);
    local_8 = *(undefined4 *)(iVar2 + 0x49 + (uint)param_2 * 4);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004a99fa;
  puStack_1c = (undefined1 *)0x4a99f2;
  FUN_004048d4(&local_c,uStack_20,puVar1);
  return;
}

