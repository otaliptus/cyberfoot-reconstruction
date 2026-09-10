// Address: 004744e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004744e4(int param_1,HIMAGELIST param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  HDC pHVar3;
  int i;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  UINT UVar6;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  HIMAGELIST local_c;
  int local_8;
  
  puStack_3c = *(undefined1 **)(param_1 + 0x30);
  puStack_40 = local_2c;
  uStack_44 = 0x47450f;
  local_c = param_2;
  local_8 = param_1;
  FUN_0041c990(0,0,*(undefined4 *)(param_1 + 0x34));
  puStack_3c = (undefined1 *)0x474517;
  FUN_00475178(local_8);
  puStack_40 = &LAB_0047467d;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x474531;
  puStack_3c = &stack0xfffffffc;
  local_10 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_4c = &LAB_00474660;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_54 = (undefined1 *)0x474550;
  puStack_48 = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x34))(local_10,*(undefined4 *)(local_8 + 0x30));
  puStack_54 = (undefined1 *)0x47455e;
  (**(code **)(*local_10 + 0x40))(local_10,*(undefined4 *)(local_8 + 0x34));
  puStack_54 = (undefined1 *)0x47456a;
  local_14 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_58 = &LAB_00474643;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_54 = &stack0xfffffffc;
  FUN_0043113c(local_14,1);
  (**(code **)(*local_14 + 0x34))(local_14,*(undefined4 *)(local_8 + 0x30));
  (**(code **)(*local_14 + 0x40))(local_14,*(undefined4 *)(local_8 + 0x34));
  iVar2 = ImageList_GetImageCount(local_c);
  if (-1 < iVar2 + -1) {
    i = 0;
    do {
      if ((param_3 == -1) || (i == param_3)) {
        local_18 = FUN_00430280(local_10);
        FUN_0042af8c(local_18,local_2c);
        UVar6 = 0;
        iVar5 = 0;
        iVar4 = 0;
        pHVar3 = (HDC)FUN_0042b5a8(local_18);
        ImageList_Draw(local_c,i,pHVar3,iVar4,iVar5,UVar6);
        local_1c = FUN_00430280(local_14);
        FUN_0042af8c(local_1c,local_2c);
        UVar6 = 0x10;
        iVar5 = 0;
        iVar4 = 0;
        pHVar3 = (HDC)FUN_0042b5a8(local_1c);
        ImageList_Draw(local_c,i,pHVar3,iVar4,iVar5,UVar6);
        FUN_00473d0c(local_8,local_10,local_14);
      }
      i = i + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_54;
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_0047464a;
  puStack_58 = (undefined1 *)0x474642;
  FUN_00403a84(local_14,uStack_5c,puVar1);
  return;
}

