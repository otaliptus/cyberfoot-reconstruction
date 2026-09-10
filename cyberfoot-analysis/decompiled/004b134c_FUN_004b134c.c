// Address: 004b134c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b134c(int param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_8;
  
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x4b135f;
    local_8 = param_3;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
  }
  puStack_28 = (undefined1 *)0x4b1371;
  local_8 = param_3;
  FUN_00405608(&local_8);
  puStack_2c = &LAB_004b13bb;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar3 = param_1 + 4;
  puStack_28 = &stack0xfffffffc;
  uVar1 = FUN_00405250(local_8);
  uVar2 = GdipCreateFontFamilyFromName();
  *(undefined4 *)(param_1 + 8) = uVar2;
  *in_FS_OFFSET = uVar1;
  FUN_00404ff0(&local_8,uVar1,iVar3,&LAB_004b13c2);
  return;
}

