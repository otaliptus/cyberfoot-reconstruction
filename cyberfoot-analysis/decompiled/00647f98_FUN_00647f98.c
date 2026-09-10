// Address: 00647f98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00647f98(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_FS_OFFSET;
  byte bVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  undefined4 local_140;
  undefined1 local_13c [256];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char local_2e;
  char local_2d;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  bVar7 = 0;
  local_140 = 0;
  local_38 = 0;
  local_28 = 0;
  local_2c = 0;
  puStack_150 = (undefined1 *)0x647fc5;
  local_c = param_3;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puVar1 = PTR_DAT_0066b5b8;
  puStack_154 = &LAB_006489b8;
  iStack_158 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_158;
  local_2d = '\0';
  local_2e = '\0';
  local_34 = 100;
  puStack_150 = &stack0xfffffffc;
  FUN_004048d4(&local_2c);
  local_24 = *(undefined4 *)(*(int *)puVar1 + 0x40 + param_1 * 0x130);
  local_20 = *(undefined4 *)(*(int *)puVar1 + 0x44 + param_1 * 0x130);
  if (*(int *)(*(int *)puVar1 + 0x20 + param_1 * 0x130) <= *(int *)(PTR_DAT_0066ac78 + 0x3c) + -1) {
    switch(*(undefined4 *)
            (*(int *)PTR_DAT_0066af70 + 0x7c +
            *(int *)(*(int *)puVar1 + 0x20 + param_1 * 0x130) * 0x2f8)) {
    case 0:
      local_34 = 0x78;
      break;
    case 1:
      local_34 = 0x19;
      break;
    case 2:
      local_34 = 0x32;
      break;
    case 3:
      local_34 = 0x3c;
      break;
    case 4:
      local_34 = 0x46;
      break;
    case 5:
      local_34 = 0x50;
    }
    if (*(char *)(*(int *)puVar1 + 0x15 + param_1 * 0x130) != '\0') {
      local_34 = 3;
    }
    iVar2 = FUN_004032c8(local_34);
    if (iVar2 == 1) {
      local_2d = '\x01';
    }
  }
  if (local_2d != '\0') {
    FUN_0040496c(&local_2c,"virou tecnico");
    FUN_00404b48(&local_38,*(int *)puVar1 + param_1 * 0x130);
    FUN_00647e90(*(undefined4 *)(*(int *)puVar1 + 0x20 + param_1 * 0x130),local_38);
  }
  local_18 = *(int *)(*(int *)puVar1 + 0x20 + param_1 * 0x130);
  *(undefined4 *)(*(int *)puVar1 + 0x20 + param_1 * 0x130) = 0xffffffff;
  if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + local_18 * 0x2f8) == '\0') {
    iVar2 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066af70 + local_18 * 0x2f8 + 0x68 + iVar2 * 4) < 3) &&
         (iVar2 == *(int *)(*(int *)puVar1 + 0x24 + param_1 * 0x130))) {
        local_2e = '\x01';
        local_c = iVar2;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 5);
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 100 + local_18 * 0x2f8) < 0x10) {
      local_2e = '\x01';
    }
  }
  if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x2ec + local_18 * 0x2f8) < 0x12) && (local_2e == '\0'))
  {
    iVar8 = local_8;
    if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + local_18 * 0x2f8) == '\0') {
      uVar10 = 0xffffffff;
      FUN_0064e824(local_18,local_c,0xffffffff,local_8,0xffffd8f0);
    }
    else {
      uVar10 = local_20;
      FUN_0064e824(local_18,local_c,0xffffffff,local_8,local_24);
    }
  }
  else {
    iVar2 = FUN_00405eec(*(undefined4 *)puVar1);
    FUN_004060a8(puVar1,PTR_DAT_00488b00,1,iVar2 + 1);
    iVar2 = FUN_00405ef4(*(undefined4 *)puVar1);
    puVar5 = (undefined4 *)(*(int *)puVar1 + param_1 * 0x130);
    puVar6 = (undefined4 *)(*(int *)puVar1 + iVar2 * 0x130);
    for (iVar4 = 0x4c; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    *(int *)(*(int *)puVar1 + 0x20 + iVar2 * 0x130) = local_18;
    *(undefined4 *)(*(int *)puVar1 + 0x11c + iVar2 * 0x130) =
         *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0);
    local_10 = 0x11;
    local_14 = 10;
    uVar3 = FUN_004032c8(100);
    if (uVar3 < 0x23) {
      local_10 = 0x14;
    }
    else if (uVar3 - 0x23 < 0x28) {
      local_10 = 0x13;
    }
    else if (uVar3 - 0x4b < 0xe) {
      local_10 = 0x12;
    }
    else if (uVar3 - 0x59 < 0xb) {
      local_10 = 0x12;
    }
    iVar4 = *(int *)(*(int *)puVar1 + 0x20 + iVar2 * 0x130);
    if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar4 * 0x2f8) < 0x14) ||
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) != '\0')) {
      iVar4 = *(int *)(*(int *)puVar1 + 0x20 + iVar2 * 0x130);
      if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar4 * 0x2f8) < 0x12) ||
         (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) != '\0')) {
        uVar3 = FUN_004032c8(100);
        if (uVar3 < 0x23) {
          local_14 = FUN_004032c8(5);
          local_14 = local_14 + 2;
        }
        else if (uVar3 - 0x23 < 0x2d) {
          local_14 = FUN_004032c8(8);
          local_14 = local_14 + 4;
        }
        else if (uVar3 - 0x50 < 0x13) {
          local_14 = FUN_004032c8(5);
          local_14 = local_14 + 7;
        }
        else if (uVar3 - 0x50 == 0x13) {
          local_14 = FUN_004032c8(5);
          local_14 = local_14 + 10;
        }
      }
      else {
        uVar3 = FUN_004032c8(100);
        if (uVar3 < 10) {
          local_14 = FUN_004032c8(2);
          local_14 = local_14 + 8;
        }
        else if (uVar3 - 10 < 0x46) {
          local_14 = FUN_004032c8(4);
          local_14 = local_14 + 8;
        }
        else if (uVar3 - 0x50 < 0x13) {
          local_14 = FUN_004032c8(5);
          local_14 = local_14 + 10;
        }
        else if (uVar3 - 0x50 == 0x13) {
          local_14 = FUN_004032c8(7);
          local_14 = local_14 + 10;
        }
      }
    }
    else {
      uVar3 = FUN_004032c8(100);
      if ((int)(uVar3 + 1) < 0x29) {
        if (uVar3 < 10) {
          local_14 = FUN_004032c8(2);
          local_14 = local_14 + 10;
        }
        else if (uVar3 - 10 < 0x14) {
          local_14 = FUN_004032c8(4);
          local_14 = local_14 + 10;
        }
        else if (uVar3 - 0x1e < 10) {
          local_14 = FUN_004032c8(4);
          local_14 = local_14 + 0xc;
        }
      }
      else if (uVar3 - 0x28 < 0x14) {
        local_14 = FUN_004032c8(4);
        local_14 = local_14 + 0xe;
      }
      else if (uVar3 - 0x3c < 0x14) {
        local_14 = FUN_004032c8(4);
        local_14 = local_14 + 0xf;
      }
      else if (uVar3 - 0x50 < 0x13) {
        local_14 = FUN_004032c8(5);
        local_14 = local_14 + 0xf;
      }
      else if (uVar3 - 0x50 == 0x13) {
        local_14 = FUN_004032c8(7);
        local_14 = local_14 + 0x14;
      }
    }
    iVar4 = *(int *)(*(int *)puVar1 + 0x28 + iVar2 * 0x130);
    if (iVar4 < 0x5a) {
      if (iVar4 < 0x46) {
        if (iVar4 < 0x32) {
          if (0x22 < iVar4) {
            iVar4 = FUN_004032c8(3);
            if (iVar4 == 0) {
              local_14 = local_14 + 5;
            }
            else if (iVar4 == 1) {
              local_14 = local_14 + 3;
            }
            else if (iVar4 == 2) {
              local_14 = local_14 + 2;
            }
          }
        }
        else {
          iVar4 = FUN_004032c8(3);
          if (iVar4 == 0) {
            local_14 = local_14 + 10;
          }
          else if (iVar4 == 1) {
            local_14 = local_14 + 7;
          }
          else if (iVar4 == 2) {
            local_14 = local_14 + 5;
          }
        }
      }
      else {
        iVar4 = FUN_004032c8(3);
        if (iVar4 == 0) {
          local_14 = local_14 + 0x14;
        }
        else if (iVar4 == 1) {
          local_14 = local_14 + 0xf;
        }
        else if (iVar4 == 2) {
          local_14 = local_14 + 10;
        }
      }
    }
    else {
      iVar4 = FUN_004032c8(3);
      if (iVar4 == 0) {
        local_14 = local_14 + 0x1e;
      }
      else if (iVar4 == 1) {
        local_14 = local_14 + 0x14;
      }
      else if (iVar4 == 2) {
        local_14 = local_14 + 10;
      }
    }
    if (*(char *)(*(int *)puVar1 + 0x15 + iVar2 * 0x130) == '\0') {
      FUN_004048d4(&local_28);
    }
    else {
      FUN_0040496c(&local_28,"estrela antes");
    }
    if (*(char *)(*(int *)puVar1 + 0x15 + iVar2 * 0x130) == '\0') {
      iVar4 = FUN_004032c8(0x46);
      if (iVar4 == 1) {
        *(undefined1 *)(*(int *)puVar1 + 0x15 + iVar2 * 0x130) = 1;
      }
      else {
        *(undefined1 *)(*(int *)puVar1 + 0x15 + iVar2 * 0x130) = 0;
      }
    }
    else {
      iVar4 = FUN_004032c8(2);
      if (iVar4 == 1) {
        *(undefined1 *)(*(int *)puVar1 + 0x15 + iVar2 * 0x130) = 1;
      }
      else {
        *(undefined1 *)(*(int *)puVar1 + 0x15 + iVar2 * 0x130) = 0;
      }
    }
    if (*(char *)(*(int *)puVar1 + 0x15 + iVar2 * 0x130) != '\0') {
      iVar4 = FUN_004032c8(10);
      local_14 = iVar4 + local_14 + 10;
    }
    if (*(char *)(*(int *)puVar1 + 0x15 + iVar2 * 0x130) == '\0') {
      FUN_0040496c(&local_28,local_28);
    }
    else {
      FUN_00404bac(&local_28," estrela depois");
    }
    puVar9 = &DAT_00648a18;
    iVar8 = local_2c;
    uVar10 = local_28;
    FUN_00404c64(&local_28,4);
    *(undefined4 *)(*(int *)puVar1 + 0x18 + iVar2 * 0x130) = local_10;
    *(int *)(*(int *)puVar1 + 0x28 + iVar2 * 0x130) = local_14;
    iVar4 = *(int *)puVar1;
    puVar5 = (undefined4 *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
    *(undefined4 *)(iVar4 + 0x68 + iVar2 * 0x130) = *puVar5;
    *(undefined4 *)(iVar4 + 0x6c + iVar2 * 0x130) = puVar5[1];
    *(undefined4 *)(*(int *)puVar1 + 0x78 + iVar2 * 0x130) = 100;
    local_3c = FUN_00652134(iVar2);
    *(longlong *)(*(int *)puVar1 + 0x40 + iVar2 * 0x130) =
         (longlong)ROUND((float)local_3c * _DAT_00648a1c);
    local_3c = FUN_00652590(iVar2);
    *(longlong *)(*(int *)puVar1 + 0x38 + iVar2 * 0x130) =
         (longlong)ROUND((float)local_3c * _DAT_00648a1c);
    *(undefined4 *)(*(int *)puVar1 + 0xe4 + iVar2 * 0x130) = 3;
    *(undefined4 *)(*(int *)puVar1 + 0x54 + iVar2 * 0x130) = 0;
    FUN_00647c48(4,iVar2);
    *(undefined4 *)(*(int *)puVar1 + 0x80 + iVar2 * 0x130) = 0;
    *(undefined4 *)(*(int *)puVar1 + 0x104 + iVar2 * 0x130) = 0;
    *(undefined4 *)(*(int *)puVar1 + 0x10c + iVar2 * 0x130) = 0;
    *(undefined4 *)(*(int *)puVar1 + 0x108 + iVar2 * 0x130) = 0;
    if (local_8 == 0) {
      FUN_0064dfd4(local_18,iVar2,&local_140,iVar8,puVar9);
      FUN_00404b80(local_13c,local_140,0xff);
      FUN_004030e0(*(int *)puVar1 + iVar2 * 0x130,local_13c,0x14);
    }
    else {
      FUN_00404b80(local_13c,local_8,0xff);
      FUN_004030e0(*(int *)puVar1 + iVar2 * 0x130,local_13c,0x14);
    }
    *(undefined1 *)(*(int *)puVar1 + 0x84 + iVar2 * 0x130) = 0;
    if (-1 < local_c) {
      *(int *)(*(int *)puVar1 + 0x24 + iVar2 * 0x130) = local_c;
      if (local_c == 0) {
        iVar4 = FUN_004032c8(3);
        if (iVar4 == 0) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 0;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 2;
        }
        else if (iVar4 == 1) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 2;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 3;
        }
        else if (iVar4 == 2) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 3;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 0;
        }
      }
      if (local_c == 1) {
        iVar4 = FUN_004032c8(3);
        if (iVar4 == 0) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 6;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 10;
        }
        else if (iVar4 == 1) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 6;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 0xd;
        }
        else if (iVar4 == 2) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 10;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 0xb;
        }
      }
      if (local_c == 2) {
        iVar4 = FUN_004032c8(3);
        if (iVar4 == 0) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 7;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 10;
        }
        else if (iVar4 == 1) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 7;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 0xc;
        }
        else if (iVar4 == 2) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 7;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 5;
        }
      }
      if (local_c == 3) {
        iVar4 = FUN_004032c8(4);
        if (iVar4 == 0) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 7;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 10;
        }
        else if (iVar4 == 1) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 7;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 0xb;
        }
        else if (iVar4 == 2) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 4;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 0xb;
        }
        else if (iVar4 == 3) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 4;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 9;
        }
      }
      if (local_c == 4) {
        iVar4 = FUN_004032c8(3);
        if (iVar4 == 0) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 9;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 5;
        }
        else if (iVar4 == 1) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 0xd;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 9;
        }
        else if (iVar4 == 2) {
          *(undefined4 *)(*(int *)puVar1 + 0x5c + iVar2 * 0x130) = 8;
          *(undefined4 *)(*(int *)puVar1 + 0x60 + iVar2 * 0x130) = 9;
        }
      }
    }
    *(undefined4 *)(*(int *)puVar1 + 0xe8 + iVar2 * 0x130) = 0;
    *(undefined4 *)(*(int *)puVar1 + 0xf0 + iVar2 * 0x130) = 0;
    *(undefined1 *)(*(int *)puVar1 + 0xec + iVar2 * 0x130) = 0;
    *(undefined1 *)(*(int *)puVar1 + 0xf5 + iVar2 * 0x130) = 0;
    *(undefined1 *)(*(int *)puVar1 + 0xf4 + iVar2 * 0x130) = 0;
    *(undefined4 *)(*(int *)puVar1 + 0xf8 + iVar2 * 0x130) = 0;
    iVar4 = 0;
    do {
      *(undefined4 *)(*(int *)puVar1 + iVar2 * 0x130 + 0x8c + iVar4 * 4) = 0;
      *(undefined4 *)(*(int *)puVar1 + iVar2 * 0x130 + 0xb8 + iVar4 * 4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0xb);
  }
  *in_FS_OFFSET = iVar8;
  FUN_004048d4(&local_140,iVar8,uVar10,&LAB_006489bf);
  FUN_004048d4(&local_38);
  FUN_004048f8(&local_2c,2);
  FUN_004048d4(&local_8);
  return;
}

