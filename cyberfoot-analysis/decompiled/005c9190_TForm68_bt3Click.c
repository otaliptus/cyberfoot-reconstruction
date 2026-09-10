// Address: 005c9190
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm68_bt3Click(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_14 = &LAB_005c9275;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar1 = FUN_00402c38();
  FUN_00635fb0(*(undefined4 *)PTR_DAT_0066b054,*(undefined4 *)PTR_DAT_0066afb0,
               *(undefined4 *)PTR_DAT_0066ad40,0,0,uVar1);
  FUN_006380e8(*(undefined4 *)PTR_DAT_0066b054);
  *(undefined4 *)PTR_DAT_0066ad40 = 0xffffffff;
  *(undefined4 *)PTR_DAT_0066afb0 = 0xffffffff;
  pwVar3 = L"<shad>";
  uVar1 = FUN_00402c38();
  FUN_006468f4(uVar1,&local_c);
  pwVar2 = L"</shad>";
  FUN_00405330(&local_8,3);
  FUN_00545088(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x420),local_8);
  FUN_00483bc4(DAT_006d2c34);
  *in_FS_OFFSET = pwVar2;
  FUN_00405008(&local_c,2,pwVar3,&LAB_005c927c);
  return;
}

