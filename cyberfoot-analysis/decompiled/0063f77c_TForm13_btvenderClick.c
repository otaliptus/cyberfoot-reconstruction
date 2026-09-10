// Address: 0063f77c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_btvenderClick(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar2;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_0063f843;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005b8468,PTR_DAT_0066b2b0);
  (**(code **)(**(int **)PTR_DAT_0066b2b0 + 0xec))();
  (**(code **)(**(int **)(param_1 + 0x538) + 100))(*(int **)(param_1 + 0x538),0);
  FUN_0064fbb8(0,*(undefined4 *)(PTR_DAT_0066ac78 + 8));
  pwVar2 = L"<shad>";
  uVar1 = FUN_00402c38();
  FUN_006468f4(uVar1,&local_c);
  FUN_00405330(&local_8,3);
  FUN_00545088(*(undefined4 *)(param_1 + 0x420),local_8);
  *in_FS_OFFSET = L"</shad>";
  FUN_00405008(&local_c,2,pwVar2,&LAB_0063f84a);
  return;
}

