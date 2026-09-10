// Address: 0051e340
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051e340(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0051e3b9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (-1 < param_2) {
    uVar2 = FUN_0051d4c8(param_1,4);
    puVar1 = puStack_14;
    if (param_2 <= (int)((uVar2 & 0xffff) - 1)) goto LAB_0051e386;
  }
  puStack_14 = puVar1;
  FUN_00406d44(&PTR_DAT_0051670c,&local_8);
  FUN_00516934(local_8);
LAB_0051e386:
  FUN_0051d35c(param_1);
  FUN_0051d4c8(param_1,3);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0051e3c0;
  puStack_18 = (undefined1 *)0x51e3b8;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

