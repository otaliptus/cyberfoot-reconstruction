// Address: 0051e2c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051e2c4(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0051e330;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (-1 < param_2) {
    uVar2 = FUN_0051d4c8(param_1,3);
    puVar1 = puStack_18;
    if (param_2 <= (int)((uVar2 & 0xffff) - 1)) goto LAB_0051e30d;
  }
  puStack_18 = puVar1;
  FUN_00406d44(&PTR_DAT_0051670c,&local_8);
  FUN_00516934(local_8);
LAB_0051e30d:
  FUN_0051e340(param_1,param_3);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0051e337;
  puStack_1c = (undefined1 *)0x51e32f;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

