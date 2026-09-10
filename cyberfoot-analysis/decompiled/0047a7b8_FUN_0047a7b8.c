// Address: 0047a7b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047a7b8(HMENU param_1,ushort param_2,int param_3,undefined1 param_4,int param_5)

{
  undefined1 *puVar1;
  HMENU pHVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int iStack_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  iStack_8 = (uint)param_2 << 0x10;
  puStack_24 = &LAB_0047a88d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((param_2 & 0x10) == 0) {
    iVar3 = FUN_00479fa0(*(undefined4 *)(param_5 + -4),param_1,1);
    if ((iVar3 != 0) && (iVar4 = FUN_00478b4c(iVar3), param_3 < iVar4)) {
      iVar3 = FUN_00478b5c(iVar3,param_3);
    }
  }
  else {
    puStack_20 = &stack0xfffffffc;
    pHVar2 = GetSubMenu(param_1,param_3);
    iVar3 = FUN_00479fa0(*(undefined4 *)(param_5 + -4),pHVar2,1);
  }
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x30) != 0)) {
    FUN_00404abc(&local_c,param_4);
    uVar5 = local_c;
    FUN_00404abc(&local_10,
                 CONCAT31((int3)((uint)*(undefined1 **)(iVar3 + 0x30) >> 8),
                          **(undefined1 **)(iVar3 + 0x30)));
    iVar4 = FUN_00409790(local_10,uVar5);
    if (iVar4 == 0) {
      FUN_0047b6ac(*(undefined4 *)(iVar3 + 0x30),&local_14);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0047a894;
  puStack_24 = (undefined1 *)0x47a88c;
  FUN_004048f8(&local_14,3,puVar1);
  return;
}

