// Address: 0065e8c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm1_HTMLabel1MouseLeave(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [20];
  
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  puStack_38 = (undefined1 *)0x65e8f6;
  FUN_00405658(local_18,PTR_DAT_004010e8,5);
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0065e9e2;
  uStack_3c = 0x65e9c7;
  FUN_00405008(&local_2c,5,&stack0xfffffffc);
  uStack_3c = 0x65e9da;
  FUN_00405744(local_18,PTR_DAT_004010e8,5);
  return;
}

