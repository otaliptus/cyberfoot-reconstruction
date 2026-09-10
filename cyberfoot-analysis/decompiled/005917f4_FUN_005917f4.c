// Address: 005917f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005917f4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_30 = (undefined1 *)0x591815;
  FUN_00405628(&local_10,PTR_DAT_00488aa0);
  puStack_34 = &LAB_0059196a;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_00545088(*(undefined4 *)(param_1 + 0x328),0);
  FUN_006596f8(*(undefined4 *)PTR_DAT_0066b394,param_2,&local_10);
  if (0 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x11c + *(int *)PTR_DAT_0066b394 * 0x130)) {
    FUN_00642c50(0x3ef,&local_18);
    FUN_00409dd8(*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x11c + *(int *)PTR_DAT_0066b394 * 0x130) +
                 *(int *)PTR_DAT_0066b7c4,&local_20);
    FUN_004051d4(&local_1c,local_20);
    FUN_00405330(&local_14,4);
    FUN_00545088(*(undefined4 *)(param_1 + 0x328),local_14);
  }
  iVar1 = *(int *)(param_1 + 0x328);
  FUN_004052cc(&local_24,*(undefined4 *)(iVar1 + 0x198),local_8);
  FUN_00545088(iVar1,local_24);
  iVar1 = local_10;
  if (local_10 < 1) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x300),0);
  }
  else {
    FUN_00466128(*(undefined4 *)(param_1 + 0x300),1);
  }
  if (local_c < 1) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x304),0);
  }
  else {
    FUN_00466128(*(undefined4 *)(param_1 + 0x304),1);
  }
  puVar2 = puStack_30;
  DAT_006d2248 = iVar1;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00591971;
  puStack_34 = (undefined1 *)0x591946;
  FUN_00404ff0(&local_24,uStack_38,puVar2);
  puStack_34 = (undefined1 *)0x59194e;
  FUN_004048d4(&local_20);
  puStack_34 = (undefined1 *)0x59195b;
  FUN_00405008(&local_1c,3);
  puStack_34 = (undefined1 *)0x591969;
  FUN_004056f8(&local_10,PTR_DAT_00488aa0);
  return;
}

