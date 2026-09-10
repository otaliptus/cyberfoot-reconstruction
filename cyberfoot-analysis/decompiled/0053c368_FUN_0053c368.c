// Address: 0053c368
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0053c368(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  HDC pHVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  tagRECT *ptVar9;
  UINT UVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
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
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  int local_2c;
  int *piStack_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int iStack_c;
  int *local_8;
  
  puStack_8c = &stack0xfffffffc;
  puVar11 = &stack0xfffffffc;
  puVar12 = &stack0xfffffffc;
  puVar13 = &stack0xfffffffc;
  puVar14 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_90 = &LAB_0053d186;
  uStack_94 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_94;
  local_8 = param_1;
  FUN_0042b4a4(param_1[0x82],param_1[0x1a]);
  local_2c = 5;
  iVar6 = 4;
  if (*(char *)((int)local_8 + 0x272) != '\0') {
    if (*(char *)((int)local_8 + 0x271) == '\0') {
      FUN_0053c2a4(local_8,local_8,local_8[0x82]);
    }
    else if ((char)local_8[0x9c] == '\0') {
      (**(code **)(*(int *)local_8[0x9b] + 0x40))((int *)local_8[0x9b],local_8[0x12]);
      (**(code **)(*(int *)local_8[0x9b] + 0x34))((int *)local_8[0x9b],local_8[0x13]);
      uVar8 = FUN_00430280(local_8[0x9b]);
      FUN_0053c2a4(local_8,local_8,uVar8);
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
  FUN_0040496c(&local_1c,local_8[0x93]);
  bVar2 = *(byte *)(local_8 + 0x86);
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
    cVar1 = (**(code **)(*local_8 + 0x50))();
    if (cVar1 == '\0') {
      uVar4 = 0x100;
    }
    if (*(char *)((int)local_8 + 0x211) == '\x02') {
      uVar4 = 0x100;
    }
    if (*(char *)((int)local_8 + 0x211) == '\x01') {
      uVar4 = uVar4 | 0x400;
    }
    if ((char)local_8[0x86] == '\x02') {
      uVar4 = uVar4 | 0x4000;
    }
    UVar10 = 4;
    ptVar9 = &local_4c;
    pHVar5 = (HDC)FUN_0042b5a8(local_8[0x82]);
    DrawFrameControl(pHVar5,ptVar9,UVar10,uVar4);
    break;
  case 1:
    cVar1 = (char)local_8[0x92];
    if (cVar1 == '\0') {
      iVar6 = 4;
    }
    else if (cVar1 == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      (**(code **)(*local_8 + 0x44))(local_8,auStack_7c);
      iVar6 = iStack_60 - iStack_78 >> 1;
      if (iVar6 < 0) {
        iVar6 = iVar6 + (uint)((iStack_60 - iStack_78 & 1U) != 0);
      }
      iVar6 = iVar6 + -6;
    }
    else if (cVar1 == '\x02') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      iVar6 = iStack_60 + -0x10;
    }
    iVar3 = iVar6 + 0xc;
    if (*(char *)((int)local_8 + 0x249) == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      iVar7 = iStack_64 + -0xd;
    }
    else {
      iVar7 = 1;
    }
    iStack_c = iVar7 + 0xc;
    FUN_0042ab6c(*(undefined4 *)(local_3c + 0x14),0xff00000f);
    if ((char)local_8[0x84] == '\0') {
      FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),0xff00000f);
      FUN_0042b158(local_3c,iVar7,iVar6);
      FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),0xff000014);
      FUN_0042b064(local_3c,iVar7,iVar3);
      FUN_0042b004(local_3c,iVar7,iVar6);
      FUN_0042b004(local_3c,iStack_c,iVar6);
      FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),0xff000010);
      FUN_0042b004(local_3c,iStack_c,iVar3);
      FUN_0042b004(local_3c,iVar7,iVar3);
    }
    else {
      FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),0);
      FUN_0042a998(*(undefined4 *)(local_3c + 0x10),2);
      FUN_0042b158(local_3c,iVar7 + 1,iVar6 + 1);
      FUN_0042a998(*(undefined4 *)(local_3c + 0x10),1);
    }
    if (*(char *)((int)local_8 + 0x211) == '\x01') {
      cVar1 = (**(code **)(*local_8 + 0x50))();
      if (cVar1 == '\0') {
        FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),0x808080);
      }
      else {
        FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),local_8[0x85]);
      }
      FUN_0042a998(*(undefined4 *)(local_3c + 0x10),1);
      FUN_0042b064(local_3c,iVar7 + 2,iVar6 + 6);
      FUN_0042b004(local_3c,iVar7 + 2,iVar6 + 10);
      FUN_0042b064(local_3c,iVar7 + 3,iVar6 + 5);
      FUN_0042b004(local_3c,iVar7 + 3,iVar6 + 9);
      FUN_0042b064(local_3c,iVar7 + 2,iVar6 + 10);
      FUN_0042b004(local_3c,iStack_c + -2,iVar6 + 2);
      FUN_0042b064(local_3c,iVar7 + 3,iVar6 + 10);
      FUN_0042b004(local_3c,iStack_c + -1,iVar6 + 2);
    }
    else if (*(char *)((int)local_8 + 0x211) == '\x02') {
      if ((char)local_8[0x84] != '\0') {
        FUN_0042a88c(*(undefined4 *)(local_3c + 0x10),0xff00000f);
        FUN_0042ab6c(*(undefined4 *)(local_3c + 0x14),0xff00000f);
        FUN_0042b158(local_3c,iVar7 + 2,iVar6 + 2);
      }
      FUN_0042ab6c(*(undefined4 *)(local_3c + 0x14),0xff000010);
      FUN_0042b158(local_3c,iVar7 + 2,iVar6 + 2);
    }
    break;
  case 3:
    local_2c = 10;
    piStack_28 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
    uVar8 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff60;
    if (*(char *)((int)local_8 + 0x211) == '\x01') {
      cVar1 = (**(code **)(*local_8 + 0x50))();
      if (cVar1 == '\0') {
        FUN_0043078c(piStack_28,DAT_0066c668,&UNK_0053d1b0);
        puVar12 = puVar11;
      }
      else {
        FUN_0043078c(piStack_28,DAT_0066c668,&UNK_0053d19c);
        puVar12 = puVar11;
      }
    }
    else {
      cVar1 = (**(code **)(*local_8 + 0x50))();
      if (cVar1 == '\0') {
        FUN_0043078c(piStack_28,DAT_0066c668,&UNK_0053d1d8);
      }
      else {
        FUN_0043078c(piStack_28,DAT_0066c668,&UNK_0053d1c4);
      }
    }
    (**(code **)(*piStack_28 + 0x3c))(piStack_28,1);
    FUN_00431448(piStack_28,0);
    cVar1 = (char)local_8[0x92];
    if (cVar1 == '\0') {
      iVar6 = 0;
    }
    else if (cVar1 == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      (**(code **)(*local_8 + 0x44))(local_8,auStack_7c);
      iVar6 = iStack_60 - iStack_78 >> 1;
      if (iVar6 < 0) {
        iVar6 = iVar6 + (uint)((iStack_60 - iStack_78 & 1U) != 0);
      }
      uVar4 = (**(code **)(*piStack_28 + 0x20))();
      iVar3 = (int)uVar4 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((uVar4 & 1) != 0);
      }
      iVar6 = iVar6 - iVar3;
    }
    else if (cVar1 == '\x02') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      iVar6 = (**(code **)(*piStack_28 + 0x20))();
      iVar6 = iStack_60 - iVar6;
    }
    if (*(char *)((int)local_8 + 0x249) == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      iVar3 = (**(code **)(*piStack_28 + 0x2c))();
      iVar3 = (iStack_64 - iVar3) + -1;
    }
    else {
      iVar3 = 0;
    }
    FUN_0042ae64(local_8[0x82],iVar3,iVar6,piStack_28);
    *in_FS_OFFSET = uVar8;
    FUN_00403a84(piStack_28,uVar8,puVar12);
    return;
  case 4:
    if (local_35 == '\0') {
      local_2c = 10;
      piStack_28 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
      uVar8 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffff60;
      if (*(char *)((int)local_8 + 0x211) == '\x01') {
        cVar1 = (**(code **)(*local_8 + 0x50))();
        if (cVar1 == '\0') {
          FUN_0043078c(piStack_28,DAT_0066c668,&UNK_0053d200);
          puVar14 = puVar13;
        }
        else {
          FUN_0043078c(piStack_28,DAT_0066c668,&UNK_0053d1ec);
          puVar14 = puVar13;
        }
      }
      else {
        cVar1 = (**(code **)(*local_8 + 0x50))();
        if (cVar1 == '\0') {
          FUN_0043078c(piStack_28,DAT_0066c668,&UNK_0053d228);
        }
        else {
          FUN_0043078c(piStack_28,DAT_0066c668,&UNK_0053d214);
        }
      }
      (**(code **)(*piStack_28 + 0x3c))(piStack_28,1);
      FUN_00431448(piStack_28,0);
      cVar1 = (char)local_8[0x92];
      if (cVar1 == '\0') {
        iVar6 = 2;
      }
      else if (cVar1 == '\x01') {
        (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
        (**(code **)(*local_8 + 0x44))(local_8,auStack_7c);
        iVar6 = iStack_60 - iStack_78 >> 1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + (uint)((iStack_60 - iStack_78 & 1U) != 0);
        }
        uVar4 = (**(code **)(*piStack_28 + 0x20))();
        iVar3 = (int)uVar4 >> 1;
        if (iVar3 < 0) {
          iVar3 = iVar3 + (uint)((uVar4 & 1) != 0);
        }
        iVar6 = iVar6 - iVar3;
      }
      else if (cVar1 == '\x02') {
        (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
        iVar6 = (**(code **)(*piStack_28 + 0x20))();
        iVar6 = iStack_60 - iVar6;
      }
      if (*(char *)((int)local_8 + 0x249) == '\x01') {
        (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
        iVar3 = (**(code **)(*piStack_28 + 0x2c))();
        iVar3 = (iStack_64 - iVar3) + -1;
      }
      else {
        iVar3 = 0;
      }
      FUN_0042ae64(local_8[0x82],iVar3,iVar6,piStack_28);
      *in_FS_OFFSET = uVar8;
      FUN_00403a84(piStack_28,uVar8,puVar14);
      return;
    }
    cVar1 = (char)local_8[0x92];
    if (cVar1 == '\0') {
      iVar6 = 4;
    }
    else if (cVar1 == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      (**(code **)(*local_8 + 0x44))(local_8,auStack_7c);
      iVar6 = iStack_60 - iStack_78 >> 1;
      if (iVar6 < 0) {
        iVar6 = iVar6 + (uint)((iStack_60 - iStack_78 & 1U) != 0);
      }
      iVar6 = iVar6 + -6;
    }
    else if (cVar1 == '\x02') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      iVar6 = iStack_60 + -0xe;
    }
    if (*(char *)((int)local_8 + 0x249) == '\x01') {
      (**(code **)(*local_8 + 0x44))(local_8,auStack_6c);
      iStack_64 = iStack_64 + -0xf;
    }
    else {
      iStack_64 = 0;
    }
    FUN_0046cae0(local_8);
    (*(code *)*puRam0066af40)();
    FUN_0040709c(iStack_64,iVar6,iStack_64 + 0xe,&local_4c);
    if (*(char *)((int)local_8 + 0x211) == '\x01') {
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
    else if (*(char *)((int)local_8 + 0x211) == '\x02') {
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
    local_4c.right = (local_4c.right + -0xc) - local_2c;
  }
  else {
    local_4c.left = local_4c.left + 0xc + local_2c;
  }
  local_4c.top = local_4c.top + 4;
  cVar1 = (**(code **)(*local_8 + 0x50))();
  if (cVar1 == '\0') {
    if ((char)local_8[0x9a] != '\0') {
      FUN_0040715c(&local_4c,1,1);
      FUN_0042a3a0(*(undefined4 *)(local_8[0x82] + 0xc),0xffffff);
      FUN_0053b598(local_8[0x82],local_1c,&local_4c,0,0,local_8[0x94],local_8[0x91],local_5c,
                   local_34,local_30,&local_24,&local_20,&local_18,&local_14,&local_10,local_8[0x96]
                   ,0x1fffffff,0x1fffffff,0xffffff,0,0x3ff00000,
                   CONCAT31((int3)((uint)local_8 >> 8),*(undefined1 *)((int)local_8 + 0x24a)) ^ 1,0,
                   0,0,0,0,0,local_8[0x95],0xffffffff,0xffffffff);
      FUN_0040715c(&local_4c,0xffffffff,0xffffffff);
    }
    FUN_0042a3a0(*(undefined4 *)(local_8[0x82] + 0xc),local_8[0x99]);
    iVar6 = local_8[0x94];
    uVar8 = 0;
    FUN_0053b598(local_8[0x82],local_1c,&local_4c,0,0,iVar6,local_8[0x91],local_5c,local_34,local_30
                 ,&local_24,&local_20,&local_18,&local_14,&local_10,local_8[0x96],0x1fffffff,
                 0x1fffffff,0x808080,0,0x3ff00000,
                 CONCAT31((int3)((uint)local_8 >> 8),*(undefined1 *)((int)local_8 + 0x24a)) ^ 1,0,0,
                 0,0,0,0,local_8[0x95],0xffffffff,0xffffffff);
  }
  else {
    iVar6 = local_8[0x94];
    uVar8 = 0;
    FUN_0053b598(local_8[0x82],local_1c,&local_4c,0,0,iVar6,local_8[0x91],local_5c,local_34,local_30
                 ,&local_24,&local_20,&local_18,&local_14,&local_10,local_8[0x96],0x1fffffff,
                 0x1fffffff,local_8[0x90],0,0x3ff00000,
                 CONCAT31((int3)((uint)local_8 >> 8),*(undefined1 *)((int)local_8 + 0x24a)) ^ 1,0,0,
                 0,0,0,0,local_8[0x95],0xffffffff,0xffffffff);
  }
  if (*(char *)((int)local_8 + 0x212) != '\0') {
    local_4c.right = local_4c.left + local_20 + 3;
    local_4c.bottom = local_4c.top + local_24 + 1;
    FUN_0042af10(local_3c,&local_4c);
  }
  *in_FS_OFFSET = uVar8;
  FUN_004048f8(&local_1c,4,iVar6,&LAB_0053d18d);
  return;
}

