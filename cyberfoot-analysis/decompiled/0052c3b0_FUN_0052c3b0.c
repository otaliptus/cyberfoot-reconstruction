// Address: 0052c3b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0052c3b0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,byte param_7,byte param_8,char param_9,int param_10)

{
  undefined1 *puVar1;
  char cVar2;
  int i;
  LPCSTR pCVar3;
  HIMAGELIST himl;
  HDC pHVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  DWORD DVar6;
  SHFILEINFOA *pSVar7;
  int iVar8;
  UINT UVar9;
  int iVar10;
  UINT UVar11;
  undefined4 uStack_1a4;
  undefined1 *puStack_1a0;
  undefined1 *puStack_19c;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  SHFILEINFOA local_17c;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_19c = (undefined1 *)0x52c3d0;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_10);
  puStack_1a0 = &LAB_0052c59d;
  uStack_1a4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1a4;
  puStack_19c = &stack0xfffffffc;
  i = FUN_0040343c(param_10,&local_14);
  FUN_004032a8(&local_17c,0x160,0);
  if ((param_10 != 0) && (local_14 != 0)) {
    cVar2 = FUN_0040a43c(param_10);
    if ((cVar2 == '\0') && (cVar2 = FUN_0052c388(param_10), cVar2 == '\0')) {
      UVar11 = 0x4010;
      UVar9 = 0x160;
      pSVar7 = &local_17c;
      DVar6 = 0;
      pCVar3 = (LPCSTR)FUN_00404da4(param_10);
      SHGetFileInfoA(pCVar3,DVar6,pSVar7,UVar9,UVar11);
      i = local_17c.iIcon;
    }
    else {
      UVar11 = 0x4000;
      UVar9 = 0x160;
      pSVar7 = &local_17c;
      DVar6 = 0;
      pCVar3 = (LPCSTR)FUN_00404da4(param_10);
      SHGetFileInfoA(pCVar3,DVar6,pSVar7,UVar9,UVar11);
      i = local_17c.iIcon;
    }
  }
  if (param_9 == '\0') {
    himl = (HIMAGELIST)SHGetFileInfoA("",0,&local_17c,0x160,0x4001);
  }
  else {
    himl = (HIMAGELIST)SHGetFileInfoA("",0,&local_17c,0x160,0x4000);
  }
  ImageList_GetIconSize(himl,&local_18,&local_1c);
  FUN_004070b8(local_18,local_1c,param_4);
  if ((param_8 != 0) && (param_7 == 0)) {
    UVar9 = 1;
    iVar8 = local_c;
    iVar10 = local_10;
    pHVar4 = (HDC)FUN_0042b5a8(local_8);
    ImageList_Draw(himl,i,pHVar4,iVar8,iVar10,UVar9);
  }
  if ((param_7 & param_8) != 0) {
    piVar5 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
    (**(code **)(*piVar5 + 0x40))(piVar5,local_18);
    (**(code **)(*piVar5 + 0x34))(piVar5,local_1c);
    UVar9 = 0;
    iVar10 = 0;
    iVar8 = 0;
    FUN_00430280(piVar5);
    pHVar4 = (HDC)FUN_0042b5a8();
    ImageList_Draw(himl,i,pHVar4,iVar8,iVar10,UVar9);
    local_18c = local_c;
    local_188 = local_10;
    local_184 = FUN_00402c38();
    local_184 = local_184 + local_c;
    local_180 = FUN_00402c38();
    local_180 = local_180 + local_10;
    FUN_0052c2ac(local_8,&local_18c,piVar5);
    FUN_00403a84(piVar5);
  }
  puVar1 = puStack_19c;
  *in_FS_OFFSET = uStack_1a4;
  puStack_19c = &LAB_0052c5a4;
  puStack_1a0 = (undefined1 *)0x52c59c;
  FUN_004048d4(&param_10,uStack_1a4,puVar1);
  return;
}

