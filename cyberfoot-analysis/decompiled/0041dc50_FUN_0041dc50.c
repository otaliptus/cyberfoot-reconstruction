// Address: 0041dc50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041dc50(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  char local_e;
  undefined1 local_d;
  undefined4 local_c;
  int local_8;
  
  puStack_14 = (undefined1 *)0x41dc66;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*DAT_0066c84c + 0x14))();
  puStack_18 = &LAB_0041dcfe;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_e = DAT_0041dd10 == (*(ushort *)(local_8 + 0x1c) & _DAT_0041dd0c);
  puStack_14 = &stack0xfffffffc;
  if ((bool)local_e) {
    puStack_20 = (undefined1 *)0x41dc9b;
    puStack_14 = &stack0xfffffffc;
    FUN_0041dac4();
  }
  puStack_24 = &LAB_0041dcdf;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_004039cc(local_8);
  local_d = FUN_0041dba8();
  if (local_e != '\0') {
    FUN_0041db1c();
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0041dce6;
  if (local_e != '\0') {
    puStack_24 = (undefined1 *)0x41dcde;
    FUN_0041db4c(0,uStack_28,puVar1);
  }
  return;
}

