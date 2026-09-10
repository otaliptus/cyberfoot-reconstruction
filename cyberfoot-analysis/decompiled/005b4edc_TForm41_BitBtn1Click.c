// Address: 005b4edc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm41_BitBtn1Click(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_114;
  undefined1 *puStack_110;
  undefined1 *puStack_10c;
  undefined4 local_108;
  undefined1 local_104 [256];
  
  puStack_10c = &stack0xfffffffc;
  local_108 = 0;
  puStack_110 = &LAB_005b4f7f;
  uStack_114 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_114;
  FUN_00466208(*(undefined4 *)(*(int *)PTR_DAT_0066b104 + 0x2f8),&local_108);
  FUN_00404bac(&local_108,&DAT_005b4f94);
  FUN_00404b80(local_104,local_108,0xff);
  FUN_004030e0(PTR_DAT_0066ac78 + 0x8c,local_104,0x32);
  FUN_00483bc4(DAT_006d2a78);
  FUN_00483bc4(*(undefined4 *)PTR_DAT_0066b104);
  puVar1 = puStack_10c;
  *in_FS_OFFSET = uStack_114;
  puStack_10c = &LAB_005b4f86;
  puStack_110 = (undefined1 *)0x5b4f7e;
  FUN_004048d4(&local_108,uStack_114,puVar1);
  return;
}

