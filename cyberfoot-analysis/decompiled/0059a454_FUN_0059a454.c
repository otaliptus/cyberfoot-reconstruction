// Address: 0059a454
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0059a454(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10 [2];
  undefined4 local_8;
  
  local_10[0] = 4;
  do {
    local_8 = 0;
    local_10[0] = local_10[0] + -1;
  } while (local_10[0] != 0);
  local_20 = (undefined1 *)0x59a479;
  FUN_00405628(local_10,PTR_DAT_00488aa0);
  local_24 = &LAB_0059a5c4;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_20 = &stack0xfffffffc;
  FUN_00545088(*(undefined4 *)(param_1 + 0x3dc),0);
  FUN_006596f8(param_2,0xffffffff,local_10);
  if (0 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x11c + param_2 * 0x130)) {
    FUN_00642c50(0x3ef,&stack0xffffffe8);
    FUN_00409dd8(*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x11c + param_2 * 0x130) +
                 *(int *)PTR_DAT_0066b7c4,&local_20);
    FUN_004051d4(&stack0xffffffe4,local_20);
    FUN_00405330(&stack0xffffffec,4);
    FUN_00545088(*(undefined4 *)(param_1 + 0x3dc),unaff_EBX);
  }
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x3dc) + 0x198);
  pwVar5 = L"<FONT  size=\"10\" face=\"Arial\" color=\"#FFFF00\"><SHAD>";
  uVar4 = *(undefined4 *)
           (PTR_DAT_0066b660 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_2 * 0x130) * 4);
  puVar3 = &DAT_0059a660;
  FUN_00405194(&local_28,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130);
  uVar1 = local_8;
  uVar2 = local_28;
  FUN_00405330(&local_24,7);
  FUN_00545088(*(undefined4 *)(param_1 + 0x3dc),local_24);
  FUN_00466128(*(undefined4 *)(param_1 + 0x3e0),1);
  *in_FS_OFFSET = uVar1;
  FUN_00405008(&local_28,2,uVar2,&LAB_0059a5cb,puVar3,uVar4,pwVar5,uVar6);
  FUN_004048d4(&local_20);
  FUN_00405008(&stack0xffffffe4,3);
  FUN_004056f8(local_10,PTR_DAT_00488aa0);
  return;
}

