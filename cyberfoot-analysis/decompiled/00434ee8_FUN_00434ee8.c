// Address: 00434ee8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00434ee8(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_14 = &LAB_00434f4d;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  if (param_2 != *(char *)(param_1 + 0x1c)) {
    if (param_2 == '\0') {
      FUN_00406d44(PTR_PTR_0066b218,&local_c);
      FUN_004349ac(local_c);
      puVar1 = puStack_10;
    }
    else {
      puStack_10 = &stack0xfffffffc;
      FUN_00406d44(PTR_PTR_0066b628,&local_8);
      FUN_004349ac(local_8);
      puVar1 = puStack_10;
    }
  }
  puStack_10 = puVar1;
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00434f54;
  puStack_14 = (undefined1 *)0x434f4c;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

