// Address: 005fed90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm34_Timer1Timer(int param_1)

{
  int iVar1;
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
  puStack_18 = &LAB_005fee58;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0043b234(*(undefined4 *)(param_1 + 0x2f8),0);
  iVar1 = FUN_004032c8(4);
  if (iVar1 == 0) {
    FUN_00642c50(0x1cd,&local_8);
  }
  else if (iVar1 == 1) {
    FUN_00642c50(0x1cd,&local_8);
  }
  else if (iVar1 == 2) {
    FUN_00642c50(0x1ce,&local_8);
  }
  else if (iVar1 == 3) {
    FUN_00642c50(0x1ce,&local_8);
  }
  pwVar2 = L"<SHAD><B><FONT color=\"#FFFFFF\"><P align=\"center\">";
  FUN_00405330(&local_c,3);
  FUN_00545088(*(undefined4 *)(param_1 + 0x30c),local_c);
  FUN_0043b234(*(undefined4 *)(param_1 + 0x2fc),1);
  *in_FS_OFFSET = L"</P></FONT></B></SHAD>";
  FUN_00405008(&local_c,2,pwVar2,&LAB_005fee5f);
  return;
}

