// Address: 0065ee30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm1_comboi2Change(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_1c = &LAB_0065eef6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004060a8(PTR_DAT_0066b170,PTR_DAT_00489080,1,0);
  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x30c));
  *(undefined4 *)PTR_DAT_0066af84 = *(undefined4 *)(DAT_007c966c + iVar1 * 4);
  pcVar4 = "languages/";
  FUN_00409dd8(*(undefined4 *)PTR_DAT_0066af84,&local_c);
  puVar2 = &DAT_0065ef20;
  uVar3 = local_c;
  FUN_00404c64(&local_8,3);
  FUN_0065eb64(param_1,local_8);
  FUN_0065ef4c(param_1);
  FUN_00409dd8(*(undefined4 *)PTR_DAT_0066af84,&local_10);
  FUN_0064a178("opcoes","language",local_10,puVar2,uVar3);
  *in_FS_OFFSET = puVar2;
  FUN_004048f8(&local_10,3,pcVar4,&LAB_0065eefd);
  return;
}

