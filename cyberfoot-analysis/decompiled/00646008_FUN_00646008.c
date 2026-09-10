// Address: 00646008
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00646008(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined4 local_110;
  CHAR local_109 [261];
  
  puStack_118 = &stack0xfffffffc;
  local_110 = 0;
  puStack_11c = &LAB_00646097;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  GetSystemDirectoryA(local_109,0x104);
  FUN_00404b54(&local_110,local_109,0x105);
  cVar2 = FUN_0040a44c(local_110);
  if (cVar2 == '\0') {
    FUN_004048d4(param_1);
  }
  else {
    FUN_00404b54(param_1,local_109,0x105);
  }
  puVar1 = puStack_118;
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_0064609e;
  puStack_11c = (undefined1 *)0x646096;
  FUN_004048d4(&local_110,uStack_120,puVar1);
  return;
}

