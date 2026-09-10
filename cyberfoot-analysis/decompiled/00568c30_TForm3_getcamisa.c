// Address: 00568c30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_getcamisa(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined1 local_5c [44];
  undefined1 local_30 [40];
  undefined4 local_8;
  
  puStack_6c = &stack0xfffffffc;
  local_8 = 0;
  puStack_70 = &LAB_00568d0a;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  FUN_004030d4(local_30,&DAT_00568d18);
  FUN_004030a4(local_30,DAT_0067b4b8 + 0x71 + param_2 * 200,0x27);
  FUN_004030d4(local_5c,local_30);
  FUN_004030a4(local_5c,&DAT_00568d28,0x2b);
  FUN_00404b48(&local_8,local_5c);
  cVar2 = FUN_0040a43c(local_8);
  if (cVar2 == '\0') {
    FUN_004048d4(param_3);
  }
  else {
    FUN_004030d4(local_30,&DAT_00568d18);
    FUN_004030a4(local_30,DAT_0067b4b8 + 0x71 + param_2 * 200,0x27);
    FUN_004030d4(local_5c,local_30);
    FUN_004030a4(local_5c,&DAT_00568d28,0x2b);
    FUN_00404b48(param_3,local_5c);
  }
  puVar1 = puStack_6c;
  *in_FS_OFFSET = uStack_74;
  puStack_6c = &LAB_00568d11;
  puStack_70 = (undefined1 *)0x568d09;
  FUN_004048d4(&local_8,uStack_74,puVar1);
  return;
}

