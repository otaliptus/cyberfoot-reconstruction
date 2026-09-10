// Address: 00477170
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x004771bc) */
/* WARNING: Removing unreachable block (ram,0x004771c6) */

void FUN_00477170(int param_1,int param_2,undefined4 param_3,uint param_4,char param_5,
                 LPRECT param_6)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  HDC pHVar6;
  LPCSTR pCVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar12;
  undefined4 auStackY_17fc [1516];
  tagRECT *qrc;
  UINT edge;
  LPRECT lprc;
  UINT grfFlags;
  uint format;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  tagRECT local_20;
  char *local_10;
  undefined4 local_c;
  int local_8;
  
  bVar4 = 0;
  puStack_30 = &stack0xfffffffc;
  local_10 = (char *)0x0;
  puStack_34 = &LAB_00477354;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_c = param_3;
  local_8 = param_2;
  iVar5 = thunk_FUN_0047910c(param_1);
  if ((iVar5 != 0) && (cVar3 = FUN_0047a744(iVar5), cVar3 != '\0')) {
    param_4 = param_4 | 0x20002;
  }
  FUN_0040496c(&local_10,local_c);
  uVar12 = (param_4 & 0x400) == 0;
  if ((!(bool)uVar12) &&
     ((uVar12 = true, local_10 == (char *)0x0 ||
      ((uVar12 = 0, *local_10 == '&' && (uVar12 = local_10[1] == '\0', (bool)uVar12)))))) {
    FUN_00404bac(&local_10,&DAT_0047736c);
  }
  FUN_00404cf0(local_10,&DAT_00477378);
  if ((bool)uVar12) {
    if ((param_4 & 0x400) == 0) {
      puVar9 = (undefined4 *)((int)param_6 + (uint)bVar4 * -8 + 4);
      local_20.left = param_6->left;
      puVar11 = (undefined4 *)((int)&local_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      puVar10 = puVar9 + (uint)bVar4 * -2 + 1;
      *(undefined4 *)((int)&local_20 + (uint)bVar4 * -8 + 4) = *puVar9;
      *puVar11 = *puVar10;
      puVar11[(uint)bVar4 * -2 + 1] = puVar10[(uint)bVar4 * -2 + 1];
      local_20.top = local_20.top + 4;
      grfFlags = 2;
      edge = 6;
      qrc = &local_20;
      pHVar6 = (HDC)FUN_0042b5a8(local_8);
      DrawEdge(pHVar6,qrc,edge,grfFlags);
    }
    goto LAB_0047733e;
  }
  FUN_0042ac88(*(undefined4 *)(local_8 + 0x14),1);
  if (*(char *)(param_1 + 0x3a) != '\0') {
    uVar1 = *(undefined4 *)(local_8 + 0xc);
    bVar4 = FUN_0042a660(uVar1);
    FUN_0042a66c(uVar1,bVar4 | DAT_0047737c);
  }
  if (*(char *)(param_1 + 0x39) == '\0') {
    if (param_5 == '\0') {
      OffsetRect(param_6,1,1);
      FUN_0042a3a0(*(undefined4 *)(local_8 + 0xc),0xff000014);
      lprc = param_6;
      format = param_4;
      iVar5 = FUN_00404ba4(local_10);
      pCVar7 = (LPCSTR)FUN_00404da4(local_10);
      pHVar6 = (HDC)FUN_0042b5a8(local_8);
      DrawTextA(pHVar6,pCVar7,iVar5,lprc,format);
      OffsetRect(param_6,-1,-1);
    }
    else {
      iVar5 = FUN_00429e64(0xff00000d);
      iVar8 = FUN_00429e64(0xff000010);
      if (iVar5 == iVar8) {
        FUN_0042a3a0(*(undefined4 *)(local_8 + 0xc),0xff000014);
        goto LAB_00477319;
      }
    }
    FUN_0042a3a0(*(undefined4 *)(local_8 + 0xc),0xff000010);
  }
LAB_00477319:
  iVar5 = FUN_00404ba4(local_10);
  pCVar7 = (LPCSTR)FUN_00404da4(local_10);
  pHVar6 = (HDC)FUN_0042b5a8(local_8);
  DrawTextA(pHVar6,pCVar7,iVar5,param_6,param_4);
LAB_0047733e:
  puVar2 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0047735b;
  puStack_34 = (undefined1 *)0x477353;
  FUN_004048d4(&local_10,uStack_38,puVar2);
  return;
}

