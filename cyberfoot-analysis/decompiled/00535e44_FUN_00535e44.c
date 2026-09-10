// Address: 00535e44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00535e44(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,byte param_7,byte param_8,char param_9,int param_10)

{
  undefined1 *puVar1;
  char cVar2;
  int i;
  LPCSTR pCVar3;
  HIMAGELIST himl;
  HDC pHVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  SHFILEINFOA *pSVar8;
  undefined4 uVar9;
  UINT UVar10;
  UINT UVar11;
  undefined1 *puVar12;
  undefined4 uStack_1a8;
  undefined1 *puStack_1a4;
  undefined1 *puStack_1a0;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  SHFILEINFOA local_180;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puVar12 = &stack0xfffffffc;
  puStack_1a0 = (undefined1 *)0x535e64;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_10);
  puStack_1a4 = &LAB_0053605a;
  uStack_1a8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1a8;
  puStack_1a0 = &stack0xfffffffc;
  i = FUN_0040343c(param_10,&local_14);
  FUN_004032a8(&local_180,0x160,0);
  if ((param_10 != 0) && (local_14 != 0)) {
    cVar2 = FUN_0040a43c(param_10);
    if ((cVar2 == '\0') && (cVar2 = FUN_00535e1c(param_10), cVar2 == '\0')) {
      UVar11 = 0x4010;
      UVar10 = 0x160;
      pSVar8 = &local_180;
      DVar7 = 0;
      pCVar3 = (LPCSTR)FUN_00404da4(param_10);
      SHGetFileInfoA(pCVar3,DVar7,pSVar8,UVar10,UVar11);
      i = local_180.iIcon;
    }
    else {
      UVar11 = 0x4000;
      UVar10 = 0x160;
      pSVar8 = &local_180;
      DVar7 = 0;
      pCVar3 = (LPCSTR)FUN_00404da4(param_10);
      SHGetFileInfoA(pCVar3,DVar7,pSVar8,UVar10,UVar11);
      i = local_180.iIcon;
    }
  }
  if (param_9 == '\0') {
    himl = (HIMAGELIST)SHGetFileInfoA("",0,&local_180,0x160,0x4001);
  }
  else {
    himl = (HIMAGELIST)SHGetFileInfoA("",0,&local_180,0x160,0x4000);
  }
  ImageList_GetIconSize(himl,&local_18,&local_1c);
  FUN_004070b8(local_18,local_1c,param_4);
  if ((param_8 != 0) && (param_7 == 0)) {
    UVar10 = 1;
    iVar5 = local_c;
    iVar6 = local_10;
    pHVar4 = (HDC)FUN_0042b5a8(local_8);
    ImageList_Draw(himl,i,pHVar4,iVar5,iVar6,UVar10);
  }
  puVar1 = puStack_1a0;
  if ((param_7 & param_8) == 0) {
    *in_FS_OFFSET = uStack_1a8;
    puStack_1a0 = &LAB_00536061;
    puStack_1a4 = (undefined1 *)0x536059;
    FUN_004048d4(&param_10,uStack_1a8,puVar1);
    return;
  }
  local_20 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffe4c;
  (**(code **)(*local_20 + 0x40))(local_20,local_18);
  (**(code **)(*local_20 + 0x34))(local_20,local_1c);
  UVar10 = 0;
  iVar6 = 0;
  iVar5 = 0;
  FUN_00430280(local_20);
  pHVar4 = (HDC)FUN_0042b5a8();
  ImageList_Draw(himl,i,pHVar4,iVar5,iVar6,UVar10);
  local_190 = local_c;
  local_18c = local_10;
  local_188 = FUN_00402c38();
  local_188 = local_188 + local_c;
  local_184 = FUN_00402c38();
  local_184 = local_184 + local_10;
  FUN_00535d40(local_8,&local_190,local_20);
  *in_FS_OFFSET = uVar9;
  FUN_00403a84(local_20,uVar9,puVar12);
  return;
}

