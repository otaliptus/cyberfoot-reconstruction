// Address: 005b4874
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm36_combopaisChange(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_005b4906;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5);
  DAT_006d2658 = FUN_0054c0f0(DAT_006d25d4);
  FUN_00645c68(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d2658 * 0x294),&local_8);
  FUN_00545088(*(undefined4 *)(param_1 + 0x2fc),local_8);
  FUN_005b2960(param_1,0xffffffff);
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005b490d;
  puStack_14 = (undefined1 *)0x5b4905;
  FUN_00404ff0(&local_8,uStack_18,puVar1);
  return;
}

