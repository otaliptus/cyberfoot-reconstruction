// Address: 005a42e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005a42e0(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  *(undefined4 *)PTR_DAT_0066ad44 = 0xffffffff;
  DAT_006d24d4 = 0;
  DAT_006d24d0 = 0;
  puStack_18 = (undefined1 *)0x5a4313;
  FUN_00466238(*(undefined4 *)(param_1 + 0x398),0);
  puStack_1c = &LAB_005a433b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_0043aa68(*(undefined4 *)(param_1 + 0x378),0);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = (undefined1 *)0x5a434d;
  FUN_005a3014(param_1,uStack_20,puVar1);
  return;
}

