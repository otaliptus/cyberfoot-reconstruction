// Address: 005205a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005205a8(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  char local_6 [2];
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  puStack_18 = &LAB_00520604;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_005169f8(param_2,local_6,2);
  if (local_6[0] != '!') {
    FUN_00406d44(&PTR_DAT_00516694,&local_c);
    FUN_00516934(local_c);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0052060b;
  puStack_18 = (undefined1 *)0x520603;
  FUN_004048d4(&local_c,uStack_1c,puVar1);
  return;
}

