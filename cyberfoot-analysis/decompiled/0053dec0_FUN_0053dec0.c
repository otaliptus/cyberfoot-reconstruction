// Address: 0053dec0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0053dec0(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  HDC pHVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  tagRECT *ptVar8;
  UINT UVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined1 auStack_7c [4];
  int iStack_78;
  undefined1 auStack_6c [8];
  int iStack_64;
  int iStack_60;
  undefined1 local_5c [16];
  tagRECT local_4c;
  int local_3c;
  char local_35;
  int *piStack_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int iStack_10;
  int local_c;
  int *local_8;
  
  puStack_8c = &stack0xfffffffc;
  puVar10 = &stack0xfffffffc;
  puVar11 = &stack0xfffffffc;
  puVar12 = &stack0xfffffffc;
  puVar13 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_90 = &LAB_0053ec3a;
  uStack_94 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_94;
  local_8 = param_1;
  FUN_0042b4a4(param_1[0x82],param_1[0x1a]);
  FUN_0040496c(&local_20,local_8[0x93]);
  if (*(char *)((int)local_8 + 0x271) != '\0') {
    if (*(char *)((int)local_8 + 0x272) == '\0') {
      FUN_0053ddfc(local_8,local_8,local_8[0x82]);
    }
    else if ((char)local_8[0x9c] == '\0') {
      (**(code **)(*(int *)local_8[0x9b] + 0x40))((int *)local_8[0x9b],local_8[0x12]);
      (**(code **)(*(int *)local_8[0x9b] + 0x34))((int *)local_8[0x9b],local_8[0x13]);
      uVar7 = FUN_00430280(local_8[0x9b]);
      FUN_0053ddfc(local_8,local_8,uVar7);
      FUN_0042ae64(local_8[0x82],0,0);
      *(undefined1 *)(local_8 + 0x9c) = 1;
    }
    else {
      FUN_0042ae64(local_8[0x82],0,0);
    }
  }
  if ((char)local_8[0x97] == '\0') {
    local_35 = '\0';
  }
  else {
    iVar3 = (**(code **)PTR_DAT_0066b358)();
    local_35 = '\x01' - (iVar3 == 0);
  }
  local_3c = local_8[0x82];
  local_c = 0;
  iVar3 = 4;
  bVar2 = *(byte *)((int)local_8 + 0x219);
  if (bVar2 == 5) {
    cVar1 = FUN_0053bf78();
    if (cVar1 == '\0') {
      bVar2 = 0;
    }
    else {
      bVar2 = 4;
    }
  }
  switch(bVar2 & 0x7f) {
  case 0:
  case 2:
    if (*(char *)((int)local_8 + 0x249) == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      local_4c.left = iStack_64 + -0xd;
    }
    else {
      local_4c.left = 0;
    }
    local_4c.right = local_4c.left + 0xd;
    cVar1 = (char)local_8[0x92];
    if (cVar1 == '\0') {
      local_4c.top = 4;
    }
    else if (cVar1 == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      (**(code **)(*local_8 + 0x44))(local_8,auStack_7c);
      local_4c.top = iStack_60 - iStack_78 >> 1;
      if (local_4c.top < 0) {
        local_4c.top = local_4c.top + (uint)((iStack_60 - iStack_78 & 1U) != 0);
      }
      local_4c.top = local_4c.top + -6;
    }
    else if (cVar1 == '\x02') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      local_4c.top = iStack_60 + -0x11;
    }
    local_4c.bottom = local_4c.top + 0xd;
    uVar4 = 0;
    local_c = 0xd;
    if (*(char *)((int)local_8 + 0x211) != '\0') {
      uVar4 = 0x400;
    }
    if (*(char *)((int)local_8 + 0x219) == '\x02') {
      uVar4 = uVar4 | 0x4000;
    }
    cVar1 = (**(code **)(*local_8 + 0x50))();
    if (cVar1 == '\0') {
      uVar4 = uVar4 | 0x100;
    }
    uVar4 = uVar4 | 4;
    UVar9 = 4;
    ptVar8 = &local_4c;
    pHVar6 = (HDC)FUN_0042b5a8(local_8[0x82]);
    DrawFrameControl(pHVar6,ptVar8,UVar9,uVar4);
    break;
  case 1:
    cVar1 = (char)local_8[0x92];
    if (cVar1 == '\0') {
      iVar3 = 4;
    }
    else if (cVar1 == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      (**(code **)(*local_8 + 0x44))(local_8,auStack_7c);
      iVar3 = iStack_60 - iStack_78 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((iStack_60 - iStack_78 & 1U) != 0);
      }
      iVar3 = iVar3 + -6;
    }
    else if (cVar1 == '\x02') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      iVar3 = iStack_60 + -0x10;
    }
    iStack_10 = iVar3 + 0xc;
    if (*(char *)((int)local_8 + 0x249) == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      iVar5 = iStack_64 + -0xd;
    }
    else {
      iVar5 = 1;
    }
    local_c = iVar5 + 0xc;
    FUN_0042ab6c(*(undefined4 *)(local_3c + 0x14),0xff00000f);
    if ((char)local_8[0x84] == '\0') {
      FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),0xff00000f);
      if (*(char *)((int)local_8 + 0x211) == '\0') {
        FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),0xc0c0c0);
      }
      else {
        FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),0x808080);
      }
      FUN_0042b064(local_3c,iVar5 + 6,iVar3);
      FUN_0042b004(local_3c,iVar5,iVar3 + 6);
      FUN_0042b004(local_3c,iVar5 + 6,iStack_10);
      if (*(char *)((int)local_8 + 0x211) == '\0') {
        FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),0x808080);
      }
      else {
        FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),0xc0c0c0);
      }
      FUN_0042b004(local_3c,local_c,iVar3 + 6);
      FUN_0042b004(local_3c,iVar5 + 6,iVar3);
    }
    else {
      FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),0);
      FUN_0042b064(local_3c,iVar5 + 6,iVar3);
      FUN_0042b004(local_3c,iVar5,iVar3 + 6);
      FUN_0042b004(local_3c,iVar5 + 6,iStack_10);
      FUN_0042b004(local_3c,local_c,iVar3 + 6);
      FUN_0042b004(local_3c,iVar5 + 6,iVar3);
      FUN_0042b064(local_3c,iVar5 + 6,iVar3 + 1);
      FUN_0042b004(local_3c,iVar5 + 1,iVar3 + 6);
      FUN_0042b004(local_3c,iVar5 + 6,iStack_10 + -1);
      FUN_0042b004(local_3c,local_c + -1,iVar3 + 6);
      FUN_0042b004(local_3c,iVar5 + 6,iVar3 + 1);
    }
    if (*(char *)((int)local_8 + 0x211) != '\0') {
      cVar1 = (**(code **)(*local_8 + 0x50))();
      if (cVar1 == '\0') {
        FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),0x808080);
      }
      else {
        FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),local_8[0x85]);
      }
      FUN_0042b064(local_3c,iVar5 + 5,iVar3 + 5);
      FUN_0042b004(local_3c,iVar5 + 8,iVar3 + 5);
      FUN_0042b064(local_3c,iVar5 + 4,iVar3 + 6);
      FUN_0042b004(local_3c,iVar5 + 9,iVar3 + 6);
      FUN_0042b064(local_3c,iVar5 + 5,iVar3 + 7);
      FUN_0042b004(local_3c,iVar5 + 8,iVar3 + 7);
      FUN_0042b064(local_3c,iVar5 + 6,iVar3 + 4);
      FUN_0042b004(local_3c,iVar5 + 6,iVar3 + 9);
    }
    local_c = 0xc;
    break;
  case 3:
    local_c = 0xd;
    piStack_34 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
    uVar7 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff60;
    if (*(char *)((int)local_8 + 0x211) == '\0') {
      cVar1 = (**(code **)(*local_8 + 0x50))();
      if (cVar1 == '\0') {
        FUN_0043078c(piStack_34,DAT_0066c668,&UNK_0053ec8c);
      }
      else {
        FUN_0043078c(piStack_34,DAT_0066c668,&UNK_0053ec78);
      }
    }
    else {
      cVar1 = (**(code **)(*local_8 + 0x50))();
      if (cVar1 == '\0') {
        FUN_0043078c(piStack_34,DAT_0066c668,&UNK_0053ec64);
        puVar11 = puVar10;
      }
      else {
        FUN_0043078c(piStack_34,DAT_0066c668,&UNK_0053ec50);
        puVar11 = puVar10;
      }
    }
    (**(code **)(*piStack_34 + 0x3c))(piStack_34,1);
    FUN_00431448(piStack_34,0);
    cVar1 = (char)local_8[0x92];
    if (cVar1 == '\0') {
      iVar3 = 2;
    }
    else if (cVar1 == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      (**(code **)(*local_8 + 0x44))(local_8,auStack_7c);
      iVar3 = iStack_60 - iStack_78 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((iStack_60 - iStack_78 & 1U) != 0);
      }
      uVar4 = (**(code **)(*piStack_34 + 0x20))();
      iVar5 = (int)uVar4 >> 1;
      if (iVar5 < 0) {
        iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
      }
      iVar3 = iVar3 - iVar5;
    }
    else if (cVar1 == '\x02') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      iVar3 = (**(code **)(*piStack_34 + 0x20))();
      iVar3 = (iStack_60 - iVar3) + -2;
    }
    if (*(char *)((int)local_8 + 0x249) == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      iVar5 = (**(code **)(*piStack_34 + 0x2c))();
      iVar5 = (iStack_64 - iVar5) + -1;
    }
    else {
      iVar5 = 0;
    }
    FUN_0042ae64(local_8[0x82],iVar5,iVar3,piStack_34);
    *in_FS_OFFSET = uVar7;
    FUN_00403a84(piStack_34,uVar7,puVar11);
    return;
  case 4:
    local_c = 0xd;
    if (local_35 == '\0') {
      piStack_34 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
      uVar7 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffff60;
      if (*(char *)((int)local_8 + 0x211) == '\0') {
        cVar1 = (**(code **)(*local_8 + 0x50))();
        if (cVar1 == '\0') {
          FUN_0043078c(piStack_34,DAT_0066c668,&UNK_0053ecdc);
        }
        else {
          FUN_0043078c(piStack_34,DAT_0066c668,&UNK_0053ecc8);
        }
      }
      else {
        cVar1 = (**(code **)(*local_8 + 0x50))();
        if (cVar1 == '\0') {
          FUN_0043078c(piStack_34,DAT_0066c668,&UNK_0053ecb4);
          puVar13 = puVar12;
        }
        else {
          FUN_0043078c(piStack_34,DAT_0066c668,&UNK_0053eca0);
          puVar13 = puVar12;
        }
      }
      (**(code **)(*piStack_34 + 0x3c))(piStack_34,1);
      FUN_00431448(piStack_34,0);
      cVar1 = (char)local_8[0x92];
      if (cVar1 == '\0') {
        iVar3 = 2;
      }
      else if (cVar1 == '\x01') {
        (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
        (**(code **)(*local_8 + 0x44))(local_8,auStack_7c);
        iVar3 = iStack_60 - iStack_78 >> 1;
        if (iVar3 < 0) {
          iVar3 = iVar3 + (uint)((iStack_60 - iStack_78 & 1U) != 0);
        }
        uVar4 = (**(code **)(*piStack_34 + 0x20))();
        iVar5 = (int)uVar4 >> 1;
        if (iVar5 < 0) {
          iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
        }
        iVar3 = iVar3 - iVar5;
      }
      else if (cVar1 == '\x02') {
        (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
        iVar3 = (**(code **)(*piStack_34 + 0x20))();
        iVar3 = (iStack_60 - iVar3) + -2;
      }
      if (*(char *)((int)local_8 + 0x249) == '\x01') {
        (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
        iVar5 = (**(code **)(*piStack_34 + 0x2c))();
        iVar5 = (iStack_64 - iVar5) + -1;
      }
      else {
        iVar5 = 0;
      }
      FUN_0042ae64(local_8[0x82],iVar5,iVar3,piStack_34);
      *in_FS_OFFSET = uVar7;
      FUN_00403a84(piStack_34,uVar7,puVar13);
      return;
    }
    cVar1 = (char)local_8[0x92];
    if (cVar1 == '\0') {
      iVar3 = 4;
    }
    else if (cVar1 == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      (**(code **)(*local_8 + 0x44))(local_8,auStack_7c);
      iVar3 = iStack_60 - iStack_78 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((iStack_60 - iStack_78 & 1U) != 0);
      }
      iVar3 = iVar3 + -6;
    }
    else if (cVar1 == '\x02') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      iVar3 = iStack_60 + -0xe;
    }
    if (*(char *)((int)local_8 + 0x249) == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      iStack_64 = iStack_64 + -0xe;
    }
    else {
      iStack_64 = 0;
    }
    FUN_0046cae0(local_8);
    (*(code *)*puRam0066af40)();
    FUN_0040709c(iStack_64,iVar3,iStack_64 + 0xd,&local_4c);
    if (*(char *)((int)local_8 + 0x211) == '\0') {
      cVar1 = (**(code **)(*local_8 + 0x50))();
      if (cVar1 == '\0') {
        FUN_0042b5a8(local_8[0x82]);
        (*(code *)*puRam0066b1c4)();
      }
      else if ((char)local_8[0x84] == '\0') {
        if (*(char *)((int)local_8 + 0x25d) == '\0') {
          FUN_0042b5a8(local_8[0x82]);
          (*(code *)*puRam0066b1c4)();
        }
        else {
          FUN_0042b5a8(local_8[0x82]);
          (*(code *)*puRam0066b1c4)();
        }
      }
      else {
        FUN_0042b5a8(local_8[0x82]);
        (*(code *)*puRam0066b1c4)();
      }
    }
    else {
      cVar1 = (**(code **)(*local_8 + 0x50))();
      if (cVar1 == '\0') {
        FUN_0042b5a8(local_8[0x82]);
        (*(code *)*puRam0066b1c4)();
      }
      else if ((char)local_8[0x84] == '\0') {
        if (*(char *)((int)local_8 + 0x25d) == '\0') {
          FUN_0042b5a8(local_8[0x82]);
          (*(code *)*puRam0066b1c4)();
        }
        else {
          FUN_0042b5a8(local_8[0x82]);
          (*(code *)*puRam0066b1c4)();
        }
      }
      else {
        FUN_0042b5a8(local_8[0x82]);
        (*(code *)*puRam0066b1c4)();
      }
    }
    (**(code **)PTR_DAT_0066b200)();
  }
  (**(code **)(*local_8 + 0x44))(local_8,&local_4c);
  if (*(char *)((int)local_8 + 0x249) == '\x01') {
    local_4c.left = 0;
    local_4c.right = (local_4c.right - local_c) + -5;
  }
  else {
    local_4c.left = local_4c.left + local_c + 5;
  }
  local_4c.top = local_4c.top + 4;
  cVar1 = (**(code **)(*local_8 + 0x50))();
  if (cVar1 == '\0') {
    if ((char)local_8[0x9a] != '\0') {
      FUN_0040715c(&local_4c,1,1);
      FUN_0042a3a0(*(undefined4 *)(local_8[0x82] + 0xc),0xffffff);
      FUN_0053b598(local_8[0x82],local_20,&local_4c,0,0,local_8[0x94],local_8[0x91],local_5c,
                   local_30,local_2c,&local_28,&local_24,&local_1c,&local_18,&local_14,local_8[0x96]
                   ,0x1fffffff,0x1fffffff,0x808080,0,0x3ff00000,
                   CONCAT31((int3)((uint)local_8 >> 8),*(undefined1 *)((int)local_8 + 0x24a)) ^ 1,0,
                   0,0,0,0,0,local_8[0x95],0xffffffff,0xffffffff);
      FUN_0040715c(&local_4c,0xffffffff,0xffffffff);
    }
    FUN_0042a3a0(*(undefined4 *)(local_8[0x82] + 0xc),local_8[0x99]);
    iVar3 = local_8[0x94];
    uVar7 = 0;
    FUN_0053b598(local_8[0x82],local_20,&local_4c,0,0,iVar3,local_8[0x91],local_5c,local_30,local_2c
                 ,&local_28,&local_24,&local_1c,&local_18,&local_14,local_8[0x96],0x1fffffff,
                 0x1fffffff,0xffffff,0,0x3ff00000,
                 CONCAT31((int3)((uint)local_8 >> 8),*(undefined1 *)((int)local_8 + 0x24a)) ^ 1,0,0,
                 0,0,0,0,local_8[0x95],0xffffffff,0xffffffff);
  }
  else {
    FUN_0042a3a0(*(undefined4 *)(local_8[0x82] + 0xc),
                 *(undefined4 *)(*(int *)(local_3c + 0xc) + 0x18));
    iVar3 = local_8[0x94];
    uVar7 = 0;
    FUN_0053b598(local_8[0x82],local_20,&local_4c,0,0,iVar3,local_8[0x91],local_5c,local_30,local_2c
                 ,&local_28,&local_24,&local_1c,&local_18,&local_14,local_8[0x96],0x1fffffff,
                 0x1fffffff,local_8[0x90],0,0x3ff00000,
                 CONCAT31((int3)((uint)local_8 >> 8),*(undefined1 *)((int)local_8 + 0x24a)) ^ 1,0,0,
                 0,0,0,0,local_8[0x95],0xffffffff,0xffffffff);
  }
  if (*(char *)((int)local_8 + 0x212) != '\0') {
    local_4c.right = local_4c.left + local_24 + 3;
    local_4c.bottom = local_4c.top + local_28 + 1;
    FUN_0042af10(local_3c,&local_4c);
  }
  *in_FS_OFFSET = uVar7;
  FUN_004048f8(&local_20,4,iVar3,&LAB_0053ec41);
  return;
}

