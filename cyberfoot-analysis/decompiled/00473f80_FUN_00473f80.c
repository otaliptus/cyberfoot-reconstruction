// Address: 00473f80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00473f80(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  HDC pHVar3;
  HIMAGELIST p_Var4;
  HBITMAP hbmMask;
  HBITMAP hbmImage;
  BOOL BVar5;
  undefined4 *in_FS_OFFSET;
  int iVar6;
  int iVar7;
  int iVar8;
  UINT UVar9;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  puStack_2c = &LAB_00474197;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x473fad;
  local_8 = param_1;
  cVar2 = FUN_004739fc(param_1);
  if (cVar2 != '\0') {
    puStack_34 = (undefined1 *)0x473fbf;
    FUN_0047481c(local_8,param_3);
    puStack_34 = (undefined1 *)0x473fcc;
    local_c = FUN_00473dd8(local_8,param_3,param_4);
    if (local_c != -1) {
      puStack_38 = &LAB_00474148;
      uStack_3c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_3c;
      puStack_40 = (undefined1 *)0x473ff3;
      puStack_34 = &stack0xfffffffc;
      local_10 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
      puStack_44 = &LAB_00474128;
      uStack_48 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_48;
      puStack_4c = (undefined1 *)0x474012;
      puStack_40 = &stack0xfffffffc;
      (**(code **)(*local_10 + 0x34))(local_10,*(undefined4 *)(local_8 + 0x30));
      puStack_4c = (undefined1 *)0x474020;
      (**(code **)(*local_10 + 0x40))(local_10,*(undefined4 *)(local_8 + 0x34));
      puStack_4c = (undefined1 *)0x47402c;
      local_14 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
      puStack_50 = &LAB_0047410b;
      uStack_54 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_54;
      puStack_4c = &stack0xfffffffc;
      FUN_0043113c(local_14,1);
      (**(code **)(*local_14 + 0x34))(local_14,*(undefined4 *)(local_8 + 0x30));
      (**(code **)(*local_14 + 0x40))(local_14,*(undefined4 *)(local_8 + 0x34));
      UVar9 = 0;
      iVar8 = 0;
      iVar7 = 0;
      FUN_00430280(local_10);
      pHVar3 = (HDC)FUN_0042b5a8();
      iVar6 = local_c;
      p_Var4 = (HIMAGELIST)FUN_00473bd0(local_8);
      ImageList_Draw(p_Var4,iVar6,pHVar3,iVar7,iVar8,UVar9);
      UVar9 = 0x10;
      iVar8 = 0;
      iVar7 = 0;
      FUN_00430280(local_14);
      pHVar3 = (HDC)FUN_0042b5a8();
      iVar6 = local_c;
      p_Var4 = (HIMAGELIST)FUN_00473bd0(local_8);
      ImageList_Draw(p_Var4,iVar6,pHVar3,iVar7,iVar8,UVar9);
      hbmMask = (HBITMAP)(**(code **)(*local_14 + 100))();
      hbmImage = (HBITMAP)(**(code **)(*local_10 + 100))();
      p_Var4 = (HIMAGELIST)FUN_00473bd0(local_8);
      BVar5 = ImageList_Replace(p_Var4,param_2,hbmImage,hbmMask);
      if (BVar5 == 0) {
        FUN_00406d44(PTR_PTR_0066ae9c,&local_18);
        FUN_0040e370(PTR_DAT_0041b6dc,1,local_18);
        FUN_00404250();
      }
      puVar1 = puStack_4c;
      *in_FS_OFFSET = uStack_54;
      puStack_4c = &LAB_00474112;
      puStack_50 = (undefined1 *)0x47410a;
      FUN_00403a84(local_14,uStack_54,puVar1);
      return;
    }
    puStack_34 = (undefined1 *)0x47415c;
    FUN_00406d44(PTR_PTR_0066ae9c,&local_1c);
    puStack_34 = (undefined1 *)0x47416b;
    FUN_0040e370(PTR_DAT_0041b6dc,1,local_1c);
    puStack_34 = (undefined1 *)0x474170;
    FUN_00404250();
  }
  puStack_34 = (undefined1 *)0x47417c;
  FUN_00403c80(local_8);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0047419e;
  puStack_2c = (undefined1 *)0x474196;
  FUN_004048f8(&local_1c,2,puVar1);
  return;
}

