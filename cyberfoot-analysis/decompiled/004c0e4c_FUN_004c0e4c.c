// Address: 004c0e4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c0e4c(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_004c0ec9;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_3;
  FUN_004048d4(param_3);
  if (0 < param_2) {
    iVar3 = 1;
    do {
      cVar2 = FUN_004c09bc(param_1,iVar3);
      if ((cVar2 != '\x03') && (1 < (byte)(cVar2 - 6U))) {
        FUN_00404abc(&local_c,*(undefined1 *)(param_1 + -1 + iVar3));
        FUN_00404bac(local_8,local_c);
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004c0ed0;
  puStack_20 = (undefined1 *)0x4c0ec8;
  FUN_004048d4(&local_c,uStack_24,puVar1);
  return;
}

