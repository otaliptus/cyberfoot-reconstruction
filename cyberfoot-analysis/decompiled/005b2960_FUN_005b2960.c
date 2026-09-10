// Address: 005b2960
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005b2960(int param_1,int param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84 [20];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  wchar_t *local_30;
  int local_2c;
  wchar_t *local_28;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_c;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 0x15;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_005b367c;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_28 = L"䖋诼䢀\x03㌀\xe8d2㞃￫䖋诼䂀\x03㌀\xe8d2㝳￫疉菴\xf47d痿윇\xf445\x01"
  ;
  FUN_00466128(*(undefined4 *)(param_1 + 0x338),0);
  local_28 = L"䖋诼䂀\x03㌀\xe8d2㝳￫疉菴\xf47d痿윇\xf445\x01";
  FUN_00466128(*(undefined4 *)(param_1 + 0x348),0);
  local_28 = L"疉菴\xf47d痿윇\xf445\x01";
  FUN_00466128(*(undefined4 *)(param_1 + 0x340),0);
  if (param_2 == -1) {
    param_2 = 1;
  }
  local_28 = L"繈눎ꄁ◔m䣨\xeb37\xebff㌌ꇒ◔m㫨\xeb37ꇿ걸f뢀Ű";
  iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (iVar4 < 2) {
    local_28 = L"碡暬耀炸\x01";
    FUN_00466128(DAT_006d25d4,0);
  }
  else {
    local_28 = L"೫툳풡津\xe800㜺￫碡暬耀炸\x01";
    FUN_00466128(DAT_006d25d4,1);
  }
  if (PTR_DAT_0066ac78[0x170] != '\0') {
    local_28 = L"遨嬶椀堅洦ꔀ";
    FUN_00466128(DAT_006d25d0,0);
  }
  local_28 = L"<P align=\"center\"> ";
  local_2c = 0x5b2a2e;
  FUN_00645c68(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d2658 * 0x294),&local_40);
  local_2c = local_40;
  local_30 = L"</p>";
  local_34 = 0x5b2a43;
  FUN_00405330(&local_3c,3);
  local_34 = 0x5b2a54;
  FUN_00545088(*(undefined4 *)(param_1 + 0x2fc),local_3c);
  if (param_2 == 1) {
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      local_34 = 0x14;
      local_38 = DAT_00669fa8;
      local_3c = DAT_00669ff4;
      local_40 = 0x5b2a8b;
      FUN_00642c50(0x23,&local_44);
      local_40 = local_44;
      local_44 = 1;
      local_48 = 0x5b2aa3;
      FUN_005b1514(param_1,1,1);
      if (1 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2658 * 0x294)) {
        local_48 = 0x28;
        local_4c = DAT_00669fac;
        local_50 = DAT_00669ff4;
        local_54 = 0x5b2ada;
        FUN_00642c50(0x24,&local_48);
        local_54 = local_48;
        local_58 = 0;
        local_5c = 0x5b2af2;
        FUN_005b1514(param_1,2,0x15);
      }
      unaff_EDI = 0x14;
      if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2658 * 0x294) < 2) {
        unaff_EBX = 1;
      }
      else {
        unaff_EBX = 2;
      }
    }
    else {
      unaff_EDI = 10;
      local_34 = 10;
      local_38 = DAT_00669fa8;
      local_3c = DAT_00669ff4;
      local_40 = 0x5b2b4b;
      FUN_00642c50(0x23,&local_4c);
      local_40 = local_4c;
      local_44 = 1;
      local_48 = 0x5b2b63;
      FUN_005b1514(param_1,1,1);
      local_48 = 0x14;
      local_4c = DAT_00669fac;
      local_50 = DAT_00669ff4;
      local_54 = 0x5b2b7e;
      FUN_00642c50(0x24,&local_50);
      local_54 = local_50;
      local_58 = 0;
      local_5c = 0x5b2b96;
      FUN_005b1514(param_1,2,0xb);
      if (2 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2658 * 0x294)) {
        local_5c = 0x1e;
        local_60 = DAT_00669fa8;
        local_64 = *(int *)(*(int *)(DAT_006d2660 + 400) + 0x44) + 0x32;
        local_68 = 0x5b2bd9;
        FUN_00642c50(0x25,&local_54);
        local_68 = local_54;
        uStack_6c = 0;
        uStack_70 = 0x5b2bf1;
        FUN_005b1514(param_1,3,0x15);
      }
      if (3 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2658 * 0x294)) {
        local_34 = 0x28;
        local_38 = DAT_00669fac;
        local_3c = *(int *)(*(int *)(DAT_006d2660 + 400) + 0x44) + 0x32;
        local_40 = 0x5b2c34;
        FUN_00642c50(0x26,&local_58);
        local_40 = local_58;
        local_30 = (wchar_t *)0x0;
        local_48 = 0x5b2c4c;
        FUN_005b1514(param_1,4,0x1f);
      }
      unaff_EBX = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2658 * 0x294);
    }
  }
  iVar4 = 1;
  if (1 < param_2) {
    iVar4 = 0x15;
    unaff_EDI = 0x14;
    local_34 = 0x5b2c8d;
    FUN_00642c50(param_2 + 0x22,&local_5c);
    local_34 = 0x5b2c9d;
    FUN_004e1414(*(undefined4 *)(DAT_006d2764 + 8),local_5c);
    unaff_EBX = param_2;
  }
  local_20 = (undefined1 *)0xffffffff;
  local_24 = -1;
  local_28 = (wchar_t *)0xffffffff;
  local_2c = -1;
  local_34 = 0x5b2cd7;
  iVar3 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d2658 * 0x294));
  if (iVar3 < 4) {
    if (5 < *(int *)(PTR_DAT_0066ac78 + 0x110)) {
      local_34 = 0x5b2d1d;
      local_20 = (undefined1 *)
                 FUN_006454a8(2,*(undefined4 *)
                                 (*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d2658 * 0x294),
                              *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0));
    }
    local_34 = 0x5b2d3e;
    iVar3 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d2658 * 0x294));
    if (iVar3 == 1) {
      local_34 = 0x5b2d70;
      local_24 = FUN_006454a8(4,*(undefined4 *)
                                 (*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d2658 * 0x294),
                              *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0));
    }
  }
  if (param_2 <= unaff_EBX) {
    local_34 = (unaff_EBX - param_2) + 1;
    local_c = param_2;
    do {
      if (0 < unaff_EDI) {
        iVar3 = 1;
        local_38 = unaff_EDI;
        do {
          if (iVar3 == 1) {
            local_34 = 0x5b2dad;
            thunk_FUN_0040502c(&local_30,&DAT_005b36cc);
          }
          else {
            local_34 = 0x5b2db7;
            FUN_00404ff0(&local_30);
          }
          iVar1 = *(int *)(*(int *)PTR_DAT_0066aca0 + DAT_006d2658 * 0x294 + local_c * 0x50 + 0xfc +
                          iVar3 * 4);
          if (1 < iVar3) {
            local_1c = *(undefined1 **)
                        (*(int *)PTR_DAT_0066aca0 + DAT_006d2658 * 0x294 + local_c * 0x50 + 0xf8 +
                        iVar3 * 4);
            if ((((*(int *)(*(int *)PTR_DAT_0066af70 + 0xb8 + iVar1 * 0x2f8) ==
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0xb8 + (int)local_1c * 0x2f8)) &&
                 (*(int *)(*(int *)PTR_DAT_0066af70 + 0x158 + iVar1 * 0x2f8) -
                  *(int *)(*(int *)PTR_DAT_0066af70 + 0x180 + iVar1 * 0x2f8) ==
                  *(int *)(*(int *)PTR_DAT_0066af70 + 0x158 + (int)local_1c * 0x2f8) -
                  *(int *)(*(int *)PTR_DAT_0066af70 + 0x180 + (int)local_1c * 0x2f8))) &&
                (*(int *)(*(int *)PTR_DAT_0066af70 + 0x158 + iVar1 * 0x2f8) ==
                 *(int *)(*(int *)PTR_DAT_0066af70 + 0x158 + (int)local_1c * 0x2f8))) &&
               (*(int *)(*(int *)PTR_DAT_0066af70 + 0x108 + iVar1 * 0x2f8) ==
                *(int *)(*(int *)PTR_DAT_0066af70 + 0x108 + (int)local_1c * 0x2f8))) {
              local_34 = 0x5b2eed;
              FUN_00404ff0(&local_30);
            }
            else {
              local_34 = 0x5b2efa;
              FUN_00409dd8(iVar3,&local_60);
              local_34 = 0x5b2f07;
              FUN_00404bac(&local_60,&DAT_005b36dc);
              local_34 = 0x5b2f12;
              FUN_004051d4(&local_30,local_60);
            }
          }
          local_34 = 0x5b2f1d;
          FUN_00404b6c(&local_64,local_30);
          local_34 = 0x5b2f31;
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + iVar4 * 0x28),local_64);
          local_34 = 0x5b2f3e;
          FUN_004030d4(local_84,&DAT_005b36e0);
          local_34 = 0x5b2f55;
          FUN_004030a4(local_84,*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8,0x1a);
          local_34 = 0x5b2f60;
          FUN_00404b48(&local_68,local_84);
          local_34 = 0x5b2f75;
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + 4 + iVar4 * 0x28),local_68);
          local_34 = 0x5b2f8e;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb8 + iVar1 * 0x2f8),&local_88);
          local_34 = 0x5b2fa6;
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + 8 + iVar4 * 0x28),local_88);
          local_34 = 0x5b2fbf;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xe0 + iVar1 * 0x2f8),&local_8c);
          local_34 = 0x5b2fd7;
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + 0xc + iVar4 * 0x28),local_8c);
          local_34 = 0x5b2ff0;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x108 + iVar1 * 0x2f8),&local_90);
          local_34 = 0x5b3008;
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + 0x10 + iVar4 * 0x28),local_90);
          local_34 = 0x5b3042;
          FUN_00409dd8(*(int *)(*(int *)PTR_DAT_0066af70 + 0xe0 + iVar1 * 0x2f8) -
                       (*(int *)(*(int *)PTR_DAT_0066af70 + 0x108 + iVar1 * 0x2f8) +
                       *(int *)(*(int *)PTR_DAT_0066af70 + 0x130 + iVar1 * 0x2f8)),&local_94);
          local_34 = 0x5b305a;
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + 0x14 + iVar4 * 0x28),local_94);
          local_34 = 0x5b3073;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x130 + iVar1 * 0x2f8),&local_98);
          local_34 = 0x5b308b;
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + 0x18 + iVar4 * 0x28),local_98);
          local_34 = 0x5b30a4;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x158 + iVar1 * 0x2f8),&local_9c);
          local_34 = 0x5b30bc;
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + 0x1c + iVar4 * 0x28),local_9c);
          local_34 = 0x5b30d5;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x180 + iVar1 * 0x2f8),&local_a0);
          local_34 = 0x5b30ed;
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + 0x20 + iVar4 * 0x28),local_a0);
          local_34 = 0x5b3115;
          FUN_00409dd8(*(int *)(*(int *)PTR_DAT_0066af70 + 0x158 + iVar1 * 0x2f8) -
                       *(int *)(*(int *)PTR_DAT_0066af70 + 0x180 + iVar1 * 0x2f8),&local_a4);
          local_34 = 0x5b312d;
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + 0x24 + iVar4 * 0x28),local_a4);
          local_34 = 0x5b313a;
          FUN_00645508(iVar1,&local_a8);
          if (local_a8 == 0) {
            local_34 = 0x5b317a;
            FUN_0043aa68(*(undefined4 *)(DAT_006d2a70 + iVar4 * 4),0);
          }
          else {
            local_34 = 0x5b3150;
            FUN_00645508(iVar1,&local_ac);
            local_34 = 0x5b3169;
            FUN_0042d6c0(*(undefined4 *)(*(int *)(DAT_006d2a70 + iVar4 * 4) + 0x168),local_ac);
          }
          if ((undefined1 *)iVar1 == local_20) {
            local_28 = (wchar_t *)iVar4;
          }
          if (iVar1 == local_24) {
            local_2c = iVar4;
          }
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      local_c = local_c + 1;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  local_34 = 0x5b31c1;
  iVar4 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d2658 * 0x294));
  if (iVar4 == 3) {
    iVar4 = 4;
  }
  if (iVar4 == 2) {
    iVar4 = 3;
  }
  if (iVar4 == 0) {
    iVar4 = 2;
  }
  local_34 = 0x5b3205;
  iVar3 = FUN_0064c63c(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d2658 * 0x294),4,
                       iVar4);
  local_34 = 0x5b322c;
  local_1c = (undefined1 *)
             FUN_0064c63c(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d2658 * 0x294),6
                          ,iVar4);
  if (1 < iVar3) {
    iVar3 = iVar3 + -1;
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    if (0 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2658 * 0x294)) {
      local_34 = 5;
      local_38 = 0x5b3275;
      FUN_005ae33c(param_1,0x11,0x14);
    }
    if (1 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2658 * 0x294)) {
      local_34 = 4;
      local_38 = 0x5b32a9;
      FUN_005ae33c(param_1,0x15,0x18);
      local_34 = 5;
      local_38 = 0x5b32bd;
      FUN_005ae33c(param_1,0x25,0x28);
    }
  }
  else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    local_34 = 5;
    local_38 = 0x5b32e5;
    FUN_005ae33c(param_1,9,10);
    local_34 = 5;
    local_38 = 0x5b32f9;
    FUN_005ae33c(param_1,0x13,0x14);
    local_34 = 5;
    local_38 = 0x5b330d;
    FUN_005ae33c(param_1,0x1d,0x1e);
    local_34 = 5;
    local_38 = 0x5b3321;
    FUN_005ae33c(param_1,0x27,0x28);
    local_34 = 4;
    local_38 = 0x5b3335;
    FUN_005ae33c(param_1,0xb,0xc);
    local_34 = 4;
    local_38 = 0x5b3349;
    FUN_005ae33c(param_1,0x15,0x16);
    local_34 = 4;
    local_38 = 0x5b335d;
    FUN_005ae33c(param_1,0x1f,0x20);
  }
  if (0 < (int)local_28) {
    if ((int)local_28 <= (int)local_1c + iVar3) {
      local_1c = (undefined1 *)((int)local_1c + 1);
    }
    if ((int)local_28 <= iVar3) {
      iVar3 = iVar3 + 1;
    }
  }
  if ((0 < local_2c) && ((wchar_t *)local_2c != local_28)) {
    if (local_2c <= (int)local_1c + iVar3) {
      local_1c = (undefined1 *)((int)local_1c + 1);
    }
    if (local_2c <= iVar3) {
      iVar3 = iVar3 + 1;
    }
  }
  if (param_2 == 1) {
    if (((PTR_DAT_0066ac78[0x171] != '\0') && (0 < iVar3)) && (0 < iVar3)) {
      iVar4 = 1;
      do {
        local_34 = 6;
        local_38 = 0x5b33cf;
        FUN_005ae33c(param_1,1,iVar4);
        iVar4 = iVar4 + 1;
      } while (local_34 != 1);
    }
    if ((PTR_DAT_0066ac78[0x172] != '\0') && (0 < (int)local_1c)) {
      local_34 = 3;
      local_38 = 0x5b33fd;
      FUN_005ae33c(param_1,iVar3 + 1,(int)local_1c + iVar3);
    }
  }
  if (0 < (int)local_28) {
    local_34 = 6;
    local_38 = 0x5b3413;
    FUN_005ae33c(param_1,local_28,local_28);
  }
  if ((0 < local_2c) && ((wchar_t *)local_2c != local_28)) {
    local_34 = 6;
    local_38 = 0x5b3431;
    FUN_005ae33c(param_1,local_2c,local_2c);
  }
  if ((*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2658 * 0x294) < 3) ||
     (*(int *)(PTR_DAT_0066ac78 + 0x168) != 2)) {
    local_34 = 0x5b35dc;
    FUN_00466128(*(undefined4 *)(param_1 + 0x328),0);
    local_34 = 0x5b35ec;
    FUN_00466128(*(undefined4 *)(param_1 + 0x32c),0);
    local_34 = 0x5b35fc;
    FUN_00466128(*(undefined4 *)(param_1 + 0x330),0);
    local_34 = 0x5b360c;
    FUN_00466128(*(undefined4 *)(param_1 + 0x334),0);
    local_34 = 0x5b361c;
    FUN_00466128(*(undefined4 *)(param_1 + 0x374),0);
    local_34 = 0x5b362c;
    FUN_00466128(*(undefined4 *)(param_1 + 0x378),0);
    local_34 = 0x5b363c;
    FUN_00466128(*(undefined4 *)(param_1 + 0x37c),0);
  }
  else {
    local_34 = 0x5b3473;
    FUN_00466128(*(undefined4 *)(param_1 + 0x328),
                 CONCAT31((int3)((uint)*(int *)PTR_DAT_0066aca0 >> 8),1));
    local_34 = 0x5b3483;
    FUN_00466128(*(undefined4 *)(param_1 + 0x32c),1);
    local_34 = 0x5b3493;
    FUN_00466128(*(undefined4 *)(param_1 + 0x374),1);
    local_34 = 0x5b34a3;
    FUN_00466128(*(undefined4 *)(param_1 + 0x378),1);
    local_34 = 0x5b34bd;
    FUN_0046599c(*(undefined4 *)(param_1 + 0x374),*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x44))
    ;
    local_34 = 0x5b34d7;
    FUN_0046599c(*(undefined4 *)(param_1 + 0x378),*(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x44))
    ;
    local_34 = 0x5b34f1;
    FUN_0046599c(*(undefined4 *)(param_1 + 0x37c),*(undefined4 *)(*(int *)(param_1 + 0x330) + 0x44))
    ;
    local_34 = 0x5b350b;
    FUN_00465978(*(undefined4 *)(param_1 + 0x374),*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x40))
    ;
    local_34 = 0x5b3525;
    FUN_00465978(*(undefined4 *)(param_1 + 0x378),*(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x40))
    ;
    local_34 = 0x5b353f;
    FUN_00465978(*(undefined4 *)(param_1 + 0x37c),*(undefined4 *)(*(int *)(param_1 + 0x330) + 0x40))
    ;
    if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d2658 * 0x294) < 4) {
      local_34 = 0x5b358d;
      FUN_00466128(*(undefined4 *)(param_1 + 0x330),0);
      local_34 = 0x5b359d;
      FUN_00466128(*(undefined4 *)(param_1 + 0x37c),0);
    }
    else {
      local_34 = 0x5b356b;
      FUN_00466128(*(undefined4 *)(param_1 + 0x330),
                   CONCAT31((int3)((uint)*(int *)PTR_DAT_0066aca0 >> 8),1));
      local_34 = 0x5b357b;
      FUN_00466128(*(undefined4 *)(param_1 + 0x37c),1);
    }
    local_34 = 0x5b35ad;
    FUN_00466128(*(undefined4 *)(param_1 + 0x334),1);
    if (param_2 == 1) {
      local_34 = 0x5b35ca;
      FUN_00465978(*(undefined4 *)(param_1 + 0x334),0x19f);
    }
  }
  pwVar2 = local_28;
  *in_FS_OFFSET = (int)local_30;
  local_28 = L"幟譛工Ã☀";
  local_2c = 0x5b3659;
  FUN_004048f8(&local_ac,10,pwVar2);
  local_2c = 0x5b3666;
  FUN_004048f8(&local_68,3);
  local_2c = 0x5b3673;
  FUN_00405008(&local_5c,9);
  local_2c = 0x5b367b;
  FUN_00404ff0(&local_30);
  return;
}

