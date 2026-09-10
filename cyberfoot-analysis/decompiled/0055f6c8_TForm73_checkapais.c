// Address: 0055f6c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm73_checkapais(int param_1)

{
  undefined1 **ppuVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_FS_OFFSET;
  undefined1 **local_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined1 *puStack_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 5;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  puStack_24 = &LAB_0055f7af;
  piStack_28 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&piStack_28;
  uStack_8 = 0;
  uStack_2c = 0x55f6fa;
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x33c));
  iVar2 = *(int *)(PTR_DAT_0066b2bc + iVar2 * 8 + 4);
  uStack_2c = 0x55f719;
  iVar3 = (**(code **)(**(int **)(*(int *)PTR_DAT_0066b300 + 0x370) + 0x11c))();
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      piStack_28 = &local_10;
      local_30 = (undefined1 **)0x55f733;
      FUN_00416244(&local_20,iVar5,0xfc);
      local_30 = &local_20;
      FUN_00416478(&local_30,"idsel");
      ppuVar1 = local_30;
      local_30 = (undefined1 **)0x55f75a;
      FUN_0050e448(*(undefined4 *)(*(int *)PTR_DAT_0066b300 + 0x370),&local_30,ppuVar1);
      local_30 = (undefined1 **)0x55f765;
      FUN_00404b6c(&local_c,local_10);
      local_30 = (undefined1 **)0x55f76d;
      iVar4 = FUN_00409ff8(local_c);
      if (iVar2 == iVar4) {
        uStack_8 = CONCAT13(1,(undefined3)uStack_8);
        break;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *in_FS_OFFSET = (int)piStack_28;
  local_20 = &LAB_0055f7b6;
  puStack_24 = (undefined1 *)0x55f79e;
  FUN_00405744(&local_30,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x55f7a6;
  FUN_00404ff0(&local_10);
  puStack_24 = (undefined1 *)0x55f7ae;
  FUN_004048d4(&local_c);
  return;
}

