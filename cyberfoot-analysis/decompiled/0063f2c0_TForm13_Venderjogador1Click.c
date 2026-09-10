// Address: 0063f2c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_Venderjogador1Click(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0063f3ab;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x63f2f2;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005b8468,PTR_DAT_0066b2b0);
  puStack_28 = (undefined1 *)0x63f301;
  (**(code **)(**(int **)PTR_DAT_0066b2b0 + 0xec))();
  puStack_28 = (undefined1 *)0x63f30e;
  (**(code **)(**(int **)(param_1 + 0x538) + 100))(*(int **)(param_1 + 0x538),0);
  puStack_28 = (undefined1 *)0x63f31e;
  FUN_0064fbb8(0,*(undefined4 *)(PTR_DAT_0066ac78 + 8));
  puStack_2c = &LAB_0063f386;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  uVar2 = FUN_00402c38();
  FUN_006468f4(uVar2,&local_c);
  FUN_00405330(&local_8,3);
  FUN_00545088(*(undefined4 *)(param_1 + 0x420),local_8);
  puVar1 = puStack_28;
  *in_FS_OFFSET = L"</shad>";
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0063f3b2;
  puStack_2c = (undefined1 *)0x63f3aa;
  FUN_00405008(&local_c,2,puVar1);
  return;
}

