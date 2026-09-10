// Address: 00406d9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00406d9c(LCID param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  CHAR local_f [7];
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = 0;
  puStack_20 = &LAB_00406e02;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  GetLocaleInfoA(param_1,0x1004,local_f,7);
  FUN_00404b54(&local_14,local_f,7);
  FUN_0040343c(local_14,&local_8);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00406e09;
  puStack_20 = (undefined1 *)0x406e01;
  FUN_004048d4(&local_14,uStack_24,puVar1);
  return;
}

