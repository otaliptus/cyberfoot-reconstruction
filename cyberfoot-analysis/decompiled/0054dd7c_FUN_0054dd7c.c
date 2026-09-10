// Address: 0054dd7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054dd7c(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  HDC pHVar6;
  undefined4 *in_FS_OFFSET;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  RECT *pRVar11;
  undefined1 *puVar12;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 local_54;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined1 local_44 [16];
  undefined1 local_34 [14];
  RECT local_26;
  undefined1 local_16 [8];
  char local_e;
  byte local_d;
  uint local_c;
  undefined1 local_7;
  byte local_6;
  char local_5;
  
  puStack_64 = &stack0xfffffffc;
  puStack_70 = &stack0xfffffffc;
  local_54 = 0;
  local_48 = 0;
  puStack_68 = &LAB_0054e186;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  puStack_74 = &LAB_0054e143;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  iVar1 = param_1[0x86];
  local_d = *(byte *)(param_1 + 0x8b);
  FUN_0042b628(iVar1,*(undefined4 *)(param_2 + 0x18));
  (**(code **)(*param_1 + 0x44))(param_1,&local_26);
  FUN_0042b628(iVar1,*(undefined4 *)(param_2 + 0x18));
  FUN_0042b4a4(iVar1,param_1[0x1a]);
  local_5 = (*(uint *)(param_2 + 0x10) & 1) != 0;
  local_6 = (*(uint *)(param_2 + 0x10) & 0x10) != 0;
  cVar2 = (**(code **)(*param_1 + 0x50))();
  if (cVar2 == '\0') {
    local_7 = 1;
  }
  else if (local_5 == '\0') {
    local_7 = 0;
  }
  else {
    local_7 = 2;
  }
  FUN_00456c14();
  cVar2 = FUN_00456cf4();
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x44))(param_1,&local_26);
    local_c = 0x2010;
    if (local_5 != '\0') {
      local_c = 0x2210;
    }
    if ((*(byte *)(param_2 + 0x10) & 4) != 0) {
      local_c = local_c | 0x100;
    }
    if (local_d != 0 || local_6 != 0) {
      FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000006);
      FUN_0042a998(*(undefined4 *)(iVar1 + 0x10),1);
      FUN_0042ac88(*(undefined4 *)(iVar1 + 0x14),1);
      FUN_0042b158(iVar1,local_26.left,local_26.top,local_26.bottom,local_26.right);
      InflateRect(&local_26,-1,-1);
    }
    if (local_5 == '\0') {
      DrawFrameControl(*(HDC *)(param_2 + 0x18),&local_26,4,local_c);
    }
    else {
      FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000010);
      FUN_0042a998(*(undefined4 *)(iVar1 + 0x10),1);
      FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xff00000f);
      FUN_0042b158(iVar1,local_26.left,local_26.top,local_26.bottom,local_26.right);
      InflateRect(&local_26,-1,-1);
    }
    if (local_d != 0) {
      (**(code **)(*param_1 + 0x44))(param_1,&local_26);
      InflateRect(&local_26,-1,-1);
    }
    FUN_0042b4a4(iVar1,param_1[0x1a]);
    if (local_5 != '\0') {
      OffsetRect(&local_26,1,1);
    }
    FUN_0041c968(0,0,local_50);
    puVar12 = local_50;
    FUN_0054dca4(param_1,&local_54);
    uVar5 = (uint)*(byte *)((int)param_1 + 0x222);
    iVar8 = param_1[0x8a];
    iVar7 = param_1[0x89];
    uVar4 = CONCAT31((int3)((uint)iVar7 >> 8),local_7);
    uVar10 = 0;
    uVar3 = local_54;
    uVar9 = FUN_004684f8(param_1,0);
    FUN_0054dabc(param_1,iVar1,&local_26,local_44,*(undefined1 *)((int)param_1 + 0x209),uVar9,uVar10
                 ,uVar4,iVar7,iVar8,uVar5,uVar3,puVar12);
    if ((local_d & local_6) != 0) {
      (**(code **)(*param_1 + 0x44))(param_1,&local_26);
      InflateRect(&local_26,-4,-4);
      FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000006);
      FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xff00000f);
      pRVar11 = &local_26;
      pHVar6 = (HDC)FUN_0042b5a8(iVar1);
      DrawFocusRect(pHVar6,pRVar11);
    }
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x50))();
    if (cVar2 == '\0') {
      local_e = '\x05';
    }
    else if (local_5 == '\0') {
      if (*(char *)((int)param_1 + 0x231) == '\0') {
        if (local_d == 0 && local_6 == 0) {
          local_e = '\x02';
        }
        else {
          local_e = '\x06';
        }
      }
      else {
        local_e = '\x03';
      }
    }
    else {
      local_e = '\x04';
    }
    uVar3 = FUN_00456c14();
    FUN_00456ef4(uVar3,local_e,local_34);
    puVar12 = local_34;
    uVar10 = 1;
    uVar9 = 0;
    uVar3 = FUN_0046cae0(param_1);
    uVar4 = FUN_00456c14();
    FUN_00456e8c(uVar4,uVar3,*(undefined4 *)(param_2 + 0x18),uVar9,uVar10,puVar12);
    iVar8 = param_2 + 0x1c;
    uVar4 = 0;
    uVar3 = FUN_00456c14();
    FUN_00456e00(uVar3,*(undefined4 *)(param_2 + 0x18),local_34,uVar4,iVar8);
    param_2 = param_2 + 0x1c;
    pRVar11 = &local_26;
    uVar3 = FUN_0042b5a8(iVar1);
    uVar4 = FUN_00456c14();
    FUN_00456d64(uVar4,uVar3,local_34,pRVar11,param_2);
    if (local_e == '\x04') {
      FUN_0041c968(1,0,local_16);
    }
    else {
      FUN_0041c968(0,0,local_16);
    }
    puVar12 = local_16;
    FUN_0054dca4(param_1,&local_48);
    uVar5 = (uint)*(byte *)((int)param_1 + 0x222);
    iVar8 = param_1[0x8a];
    iVar7 = param_1[0x89];
    uVar4 = CONCAT31((int3)((uint)iVar7 >> 8),local_7);
    uVar10 = 0;
    uVar3 = local_48;
    uVar9 = FUN_004684f8(param_1,0);
    FUN_0054dabc(param_1,iVar1,&local_26,local_44,*(undefined1 *)((int)param_1 + 0x209),uVar9,uVar10
                 ,uVar4,iVar7,iVar8,uVar5,uVar3,puVar12);
    if ((local_d & local_6) != 0) {
      FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000006);
      FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xff00000f);
      pRVar11 = &local_26;
      pHVar6 = (HDC)FUN_0042b5a8(iVar1);
      DrawFocusRect(pHVar6,pRVar11);
    }
  }
  FUN_0042b628(iVar1,0);
  puVar12 = puStack_64;
  *in_FS_OFFSET = uStack_78;
  *in_FS_OFFSET = uStack_6c;
  puStack_64 = &LAB_0054e18d;
  puStack_68 = (undefined1 *)0x54e17d;
  FUN_00404ff0(&local_54,uStack_6c,puVar12);
  puStack_68 = (undefined1 *)0x54e185;
  FUN_00404ff0(&local_48);
  return;
}

