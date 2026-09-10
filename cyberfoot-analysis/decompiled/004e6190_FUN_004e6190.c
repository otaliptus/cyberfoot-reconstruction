// Address: 004e6190
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e6190(int param_1,int *param_2,LPCSTR param_3,char param_4)

{
  undefined1 *puVar1;
  HANDLE h;
  HFONT h_00;
  HDC pHVar2;
  LPCWSTR pWVar3;
  int iVar4;
  LPCSTR pCVar5;
  HGDIOBJ pvVar6;
  undefined4 *in_FS_OFFSET;
  int iVar7;
  tagRECT *ptVar8;
  LOGFONTA *pv;
  UINT UVar9;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined4 local_74;
  undefined4 local_70;
  LOGFONTA local_6c;
  tagRECT local_30;
  LPCWSTR local_20;
  int local_1c;
  int local_18;
  int *local_14;
  UINT local_10;
  HGDIOBJ local_c;
  LPCSTR local_8;
  
  local_74 = 0;
  local_70 = 0;
  local_20 = (LPCWSTR)0x0;
  local_30.left = *param_2;
  local_30.top = param_2[1];
  local_30.right = param_2[2];
  local_30.bottom = param_2[3];
  puStack_84 = (undefined1 *)0x4e61ba;
  local_8 = param_3;
  FUN_00405608(&local_8);
  puStack_88 = &LAB_004e6395;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  local_10 = 0xa28;
  puStack_84 = &stack0xfffffffc;
  FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
  pv = &local_6c;
  iVar7 = 0x3c;
  h = (HANDLE)FUN_0042a3b4(*(undefined4 *)(param_1 + 0xc));
  GetObjectA(h,iVar7,pv);
  local_6c.lfEscapement = 900;
  local_6c.lfOutPrecision = '\a';
  h_00 = CreateFontIndirectA(&local_6c);
  pHVar2 = (HDC)FUN_0042b5a8(param_1);
  local_c = SelectObject(pHVar2,h_00);
  iVar7 = FUN_00405574(&DAT_004e63ac,local_8);
  if ((iVar7 == 0) || (param_4 == '\0')) {
    if (DAT_0067b1c4 == '\x01') {
      ptVar8 = &local_30;
      UVar9 = local_10;
      iVar7 = FUN_00405260(local_8);
      pWVar3 = (LPCWSTR)FUN_00405250(local_8);
      pHVar2 = (HDC)FUN_0042b5a8(param_1);
      DrawTextW(pHVar2,pWVar3,iVar7,ptVar8,UVar9);
    }
    else {
      ptVar8 = &local_30;
      UVar9 = local_10;
      iVar7 = FUN_00405260(local_8);
      pCVar5 = local_8;
      pHVar2 = (HDC)FUN_0042b5a8(param_1);
      DrawTextA(pHVar2,pCVar5,iVar7,ptVar8,UVar9);
    }
  }
  else {
    local_14 = (int *)FUN_00403a54(PTR_PTR_0041bda0,1);
    FUN_00404b6c(&local_70,local_8);
    (**(code **)(*local_14 + 0x2c))(local_14,local_70);
    FUN_00404b6c(&local_74,local_8);
    local_1c = FUN_0042b400(param_1,local_74);
    iVar7 = (**(code **)(*local_14 + 0x14))();
    if (-1 < iVar7 + -1) {
      local_18 = 0;
      do {
        (**(code **)(*local_14 + 0xc))(local_14,local_18,&local_20);
        if (DAT_0067b1c4 == '\x01') {
          ptVar8 = &local_30;
          UVar9 = local_10;
          iVar4 = FUN_00404ba4(local_20);
          pWVar3 = local_20;
          pHVar2 = (HDC)FUN_0042b5a8(param_1);
          DrawTextW(pHVar2,pWVar3,iVar4,ptVar8,UVar9);
        }
        else {
          ptVar8 = &local_30;
          UVar9 = local_10;
          iVar4 = FUN_00404ba4(local_20);
          pCVar5 = (LPCSTR)FUN_00404da4(local_20);
          pHVar2 = (HDC)FUN_0042b5a8(param_1);
          DrawTextA(pHVar2,pCVar5,iVar4,ptVar8,UVar9);
        }
        local_30.left = local_30.left + local_1c;
        local_18 = local_18 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_00403a84(local_14);
  }
  pvVar6 = local_c;
  pHVar2 = (HDC)FUN_0042b5a8(param_1);
  pvVar6 = SelectObject(pHVar2,pvVar6);
  DeleteObject(pvVar6);
  puVar1 = puStack_84;
  *in_FS_OFFSET = uStack_8c;
  puStack_84 = &LAB_004e639c;
  puStack_88 = (undefined1 *)0x4e6384;
  FUN_004048f8(&local_74,2,puVar1);
  puStack_88 = (undefined1 *)0x4e638c;
  FUN_004048d4(&local_20);
  puStack_88 = (undefined1 *)0x4e6394;
  FUN_00404ff0(&local_8);
  return;
}

