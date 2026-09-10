// Address: 004d69fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d69fc(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_004d6a76;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  cVar2 = FUN_004d6958(param_2);
  if (cVar2 == '\0') {
    FUN_00423834(param_2,&local_10);
  }
  else {
    FUN_00423834(param_2,&local_c);
    FUN_004d4ca4(local_c,&local_8);
    FUN_0041a60c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),local_8);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004d6a7d;
  puStack_20 = (undefined1 *)0x4d6a6d;
  FUN_004048f8(&local_10,2,puVar1);
  puStack_20 = (undefined1 *)0x4d6a75;
  FUN_00404ff0(&local_8);
  return;
}

