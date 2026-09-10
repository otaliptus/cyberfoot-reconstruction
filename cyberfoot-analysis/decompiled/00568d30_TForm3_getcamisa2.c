// Address: 00568d30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_getcamisa2(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined1 local_64 [48];
  undefined1 local_34 [44];
  undefined4 local_8;
  
  puStack_74 = &stack0xfffffffc;
  local_8 = 0;
  puStack_78 = &LAB_00568e0a;
  uStack_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  FUN_004030d4(local_34,&DAT_00568e18);
  FUN_004030a4(local_34,DAT_0067b4b8 + 0x71 + param_2 * 200,0x28);
  FUN_004030d4(local_64,local_34);
  FUN_004030a4(local_64,&DAT_00568e28,0x2c);
  FUN_00404b48(&local_8,local_64);
  cVar2 = FUN_0040a43c(local_8);
  if (cVar2 == '\0') {
    FUN_004048d4(param_3);
  }
  else {
    FUN_004030d4(local_34,&DAT_00568e18);
    FUN_004030a4(local_34,DAT_0067b4b8 + 0x71 + param_2 * 200,0x28);
    FUN_004030d4(local_64,local_34);
    FUN_004030a4(local_64,&DAT_00568e28,0x2c);
    FUN_00404b48(param_3,local_64);
  }
  puVar1 = puStack_74;
  *in_FS_OFFSET = uStack_7c;
  puStack_74 = &LAB_00568e11;
  puStack_78 = (undefined1 *)0x568e09;
  FUN_004048d4(&local_8,uStack_7c,puVar1);
  return;
}

