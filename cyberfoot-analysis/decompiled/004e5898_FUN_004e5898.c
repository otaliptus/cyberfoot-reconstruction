// Address: 004e5898
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e5898(undefined4 param_1,int param_2,LONG *param_3,char param_4,undefined4 param_5,
                 char param_6,undefined4 param_7,char param_8)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  LPWSTR lpchText;
  HDC pHVar4;
  LPSTR lpchText_00;
  LPCWSTR lpchText_01;
  LPCSTR lpchText_02;
  char cVar5;
  undefined4 *puVar6;
  LONG *pLVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  LONG aLStackY_1814 [1514];
  int iVar11;
  tagRECT *ptVar12;
  LPDRAWTEXTPARAMS ptVar13;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  tagRECT local_38;
  tagRECT local_28;
  LONG local_18;
  LONG aLStack_14 [4];
  
  uVar1 = param_7;
  bVar10 = 0;
  aLStack_14[3] = 0;
  local_18 = *param_3;
  aLStack_14[0] = param_3[1];
  aLStack_14[1] = param_3[2];
  aLStack_14[2] = param_3[3];
  puStack_4c = (undefined1 *)0x4e58bc;
  FUN_00405608(&param_5);
  puStack_4c = &stack0xfffffffc;
  puStack_50 = &LAB_004e5a70;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  local_28.left = local_18;
  pLVar7 = (LONG *)((int)&local_28 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(LONG *)((int)&local_28 + (uint)bVar10 * -8 + 4) = aLStack_14[(uint)bVar10 * -2];
  *pLVar7 = aLStack_14[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  pLVar7[(uint)bVar10 * -2 + 1] =
       (aLStack_14 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  uVar8 = 0x800;
  if (param_8 == '\0') {
    uVar8 = 0x800;
  }
  else if (param_8 == '\x01') {
    uVar8 = 0x802;
  }
  else if (param_8 == '\x02') {
    uVar8 = 0x801;
  }
  cVar5 = (char)uVar1;
  if (param_6 == '\0') {
    if (cVar5 != '\0') {
      if (cVar5 == '\x01') {
        uVar8 = uVar8 | 8;
      }
      else if (cVar5 == '\x02') {
        uVar8 = uVar8 | 4;
      }
    }
    uVar8 = uVar8 | 0x20;
  }
  else {
    uVar8 = uVar8 | 0x10;
    local_38.left = local_28.left;
    puVar9 = (undefined4 *)((int)&local_38 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar6 = (undefined4 *)((int)&local_28 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(undefined4 *)((int)&local_38 + (uint)bVar10 * -8 + 4) =
         *(undefined4 *)((int)&local_28 + (uint)bVar10 * -8 + 4);
    *puVar9 = *puVar6;
    puVar9[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    FUN_00404b6c(aLStack_14 + 3,param_5);
    if (DAT_0067b1c4 == '\0') {
      ptVar13 = (LPDRAWTEXTPARAMS)0x0;
      uVar3 = uVar8 | 0x400;
      ptVar12 = &local_38;
      iVar11 = -1;
      lpchText_00 = (LPSTR)FUN_00404da4(aLStack_14[3]);
      pHVar4 = (HDC)FUN_0042b5a8(param_2);
      DrawTextExA(pHVar4,lpchText_00,iVar11,ptVar12,uVar3,ptVar13);
    }
    else {
      ptVar13 = (LPDRAWTEXTPARAMS)0x0;
      uVar3 = uVar8 | 0x400;
      ptVar12 = &local_38;
      iVar11 = -1;
      lpchText = (LPWSTR)FUN_00405250(param_5);
      pHVar4 = (HDC)FUN_0042b5a8(param_2);
      DrawTextExW(pHVar4,lpchText,iVar11,ptVar12,uVar3,ptVar13);
    }
    if (cVar5 != '\0') {
      if (cVar5 == '\x01') {
        local_28.top = local_28.bottom - (local_38.bottom - local_38.top);
      }
      else if (cVar5 == '\x02') {
        iVar11 = FUN_00402c38();
        local_28.top = local_28.top + iVar11;
      }
    }
  }
  if (param_4 == '\x01') {
    uVar8 = uVar8 | 0x20000;
  }
  FUN_0042ac88(*(undefined4 *)(param_2 + 0x14),1);
  if (DAT_0067b1c4 == '\0') {
    FUN_00404b6c(aLStack_14 + 3,param_5);
    ptVar12 = &local_28;
    iVar11 = FUN_00404ba4(aLStack_14[3]);
    lpchText_02 = (LPCSTR)FUN_00404da4(aLStack_14[3]);
    pHVar4 = (HDC)FUN_0042b5a8(param_2);
    DrawTextA(pHVar4,lpchText_02,iVar11,ptVar12,uVar8);
  }
  else if (DAT_0067b1c4 == '\x01') {
    ptVar12 = &local_28;
    iVar11 = FUN_00405260(param_5);
    lpchText_01 = (LPCWSTR)FUN_00405250(param_5);
    pHVar4 = (HDC)FUN_0042b5a8(param_2);
    DrawTextW(pHVar4,lpchText_01,iVar11,ptVar12,uVar8);
  }
  FUN_0042ac88(*(undefined4 *)(param_2 + 0x14),0);
  puVar2 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_004e5a77;
  puStack_50 = (undefined1 *)0x4e5a67;
  FUN_004048d4(aLStack_14 + 3,uStack_54,puVar2);
  puStack_50 = (undefined1 *)0x4e5a6f;
  FUN_00404ff0(&param_5);
  return;
}

