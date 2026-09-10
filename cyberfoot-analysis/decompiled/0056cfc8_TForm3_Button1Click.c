// Address: 0056cfc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_Button1Click(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 local_2c [8];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 local_c [4];
  undefined4 local_8;
  
  iVar1 = 5;
  do {
    local_8 = 0;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0056d09b;
  uStack_20 = 0x56d083;
  FUN_00405744(local_2c,PTR_DAT_004010f8,2);
  uStack_20 = 0x56d08b;
  FUN_00404ff0(local_c);
  uStack_20 = 0x56d093;
  FUN_004048d4(&local_8);
  return;
}

