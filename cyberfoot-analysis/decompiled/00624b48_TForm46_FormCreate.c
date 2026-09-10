// Address: 00624b48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm46_FormCreate(int param_1)

{
  undefined1 *puVar1;
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
  puStack_20 = &LAB_00624c20;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00642c50(0x24,&local_8);
  FUN_00545088(*(undefined4 *)(param_1 + 0x338),local_8);
  FUN_00642c50(0x25,&local_c);
  FUN_00545088(*(undefined4 *)(param_1 + 0x33c),local_c);
  FUN_00642c50(0x26,&local_10);
  FUN_00545088(*(undefined4 *)(param_1 + 0x340),local_10);
  DAT_006d4918 = (int *)FUN_0043b0ac(PTR_PTR_00438f00,1,param_1);
  FUN_0043b234(DAT_006d4918,0);
  FUN_0043b244(DAT_006d4918,1000);
  (**(code **)(*DAT_006d4918 + 0x18))(DAT_006d4918,"ralt1");
  DAT_006d4918[3] = 0;
  FUN_0043b254(DAT_006d4918);
  FUN_0060f0d0(param_1);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00624c27;
  puStack_20 = (undefined1 *)0x624c1f;
  FUN_00405008(&local_10,3,puVar1);
  return;
}

