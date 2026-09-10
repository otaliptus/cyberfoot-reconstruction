// Address: 005b00e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005b00e8(int param_1,char param_2)

{
  wchar_t *pwVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [28];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined *local_ac;
  undefined *local_a8;
  undefined *local_a4;
  undefined *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined *local_8c [4];
  undefined1 *local_7c [4];
  undefined1 **local_6c;
  undefined **local_68;
  undefined **local_64;
  undefined **local_60;
  undefined1 **local_5c;
  undefined *local_58;
  undefined *local_54;
  undefined4 uStack_50;
  int local_4c;
  undefined *local_48;
  undefined1 *local_44;
  wchar_t *local_40;
  wchar_t *local_3c;
  int local_38;
  char *local_34;
  undefined *local_30;
  undefined *local_2c;
  char *local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int iVar7;
  
  local_1c = &stack0xfffffffc;
  iVar3 = 0x1c;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_20 = &LAB_005b1439;
  local_24 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (char *)0x5b0123;
  FUN_00466128(*(undefined4 *)(param_1 + 0x328),0);
  local_28 = (char *)0x5b0133;
  FUN_00466128(*(undefined4 *)(param_1 + 0x32c),0);
  local_28 = (char *)0x5b0143;
  FUN_00466128(*(undefined4 *)(param_1 + 0x330),0);
  local_28 = (char *)0x5b0153;
  FUN_00466128(*(undefined4 *)(param_1 + 0x334),0);
  iVar3 = 4;
  local_5c = local_7c;
  do {
    *local_5c = (undefined1 *)0xffffffff;
    local_5c = local_5c + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 4;
  local_60 = local_8c;
  do {
    *local_60 = (undefined *)0xffffffff;
    local_60 = local_60 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_4c = 1;
  local_1c = (undefined1 *)0x1;
  uStack_50 = (wchar_t *)((uint)uStack_50 & 0xffffff);
  local_28 = "hP\x14[";
  FUN_00465978(*(undefined4 *)(param_1 + 0x308),*(undefined4 *)(*(int *)(param_1 + 0x304) + 0x40));
  local_28 = "<P align=\"center\"> Campeonato ";
  local_2c = *(undefined **)(PTR_PTR_0066b288 + DAT_006d25e4 * 4);
  local_30 = &DAT_005b1478;
  local_34 = (char *)0x5b01e7;
  FUN_00404c64(&local_94,3);
  local_34 = (char *)0x5b01f8;
  FUN_004051d4(&local_90,local_94);
  local_34 = (char *)0x5b020c;
  FUN_00545088(*(undefined4 *)(param_1 + 0x2fc),local_90);
  local_34 = (char *)0x5b0218;
  FUN_00466128(DAT_006d25d4,0);
  local_34 = (char *)0x5b0224;
  FUN_00466128(DAT_006d25d0,1);
  local_44 = *(undefined1 **)
              (PTR_DAT_0066b50c +
              *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) * 0x30 + -0x28);
  local_1c = *(undefined1 **)
              (PTR_DAT_0066b50c +
              *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) * 0x30 + -0x30);
  local_40 = (wchar_t *)0x0;
  local_3c = (wchar_t *)0x0;
  local_38 = 0;
  local_48 = (undefined *)0x0;
  local_2c = *(undefined **)
              (PTR_DAT_0066b50c +
              *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) * 0x30 + -0x2c);
  local_30 = *(undefined **)
              (PTR_DAT_0066b50c +
              *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) * 0x30 + -0x28);
  if (1 < (int)local_2c) {
    uStack_50 = (wchar_t *)CONCAT13(1,(undefined3)uStack_50);
  }
  if (param_2 != '\0') {
    uStack_50 = (wchar_t *)((uint)uStack_50 & 0xffffff);
  }
  local_24 = local_44;
  if (uStack_50._3_1_ != '\0') {
    local_34 = "<P align=\"center\"> Campeonato ";
    local_38 = *(int *)(PTR_PTR_0066b288 + DAT_006d25e4 * 4);
    local_3c = L"ⴠㄠ₪楤楶\xe373㱯瀯>";
    local_40 = L"開ｨ\xffff薍ｬ\xffff飨\xe54e诿沕\xffff诿ﱅ肋˼";
    FUN_00404c64(&local_9c,3);
    local_34 = (char *)0x5b033c;
    FUN_004051d4(&local_98,local_9c);
    local_34 = (char *)0x5b0350;
    FUN_00545088(*(undefined4 *)(param_1 + 0x2fc),local_98);
  }
  local_34 = (char *)0x5b0363;
  FUN_00465978(*(undefined4 *)(param_1 + 0x350),0x2a0);
  local_34 = (char *)0x5b0376;
  FUN_0046599c(*(undefined4 *)(param_1 + 0x350),0x158);
  local_34 = (char *)0x5b0386;
  FUN_00466128(*(undefined4 *)(param_1 + 0x350),0);
  if ((uStack_50._3_1_ == '\0') || (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510) < 2))
  {
    local_34 = (char *)0x5b03c8;
    FUN_00466128(*(undefined4 *)(param_1 + 0x350),0);
  }
  else {
    local_34 = (char *)0x5b03b6;
    FUN_00466128(*(undefined4 *)(param_1 + 0x350),1);
  }
  if (uStack_50._3_1_ == '\0') {
    local_28 = *(char **)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510);
  }
  else {
    local_28 = local_2c;
  }
  if (param_2 != '\0') {
    local_28 = *(char **)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510);
  }
  if (uStack_50._3_1_ == '\0') {
    local_40 = DAT_00669ff4;
    if ((*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) == 4) ||
       (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) == 3)) {
      local_40 = DAT_00669ff0;
    }
    iVar3 = DAT_00669fa8;
    if (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510) < 2) {
      iVar3 = DAT_00669fb0;
    }
    if (param_2 == '\0') {
      local_34 = local_24;
      local_3c = local_40;
      local_40 = L"1ª divisão";
      local_44 = (undefined1 *)0x1;
      local_48 = (undefined *)0x5b04b0;
      local_38 = iVar3;
      FUN_005b1514(param_1,1,1);
      if (1 < *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510)) {
        local_48 = local_24 + 6;
        local_4c = DAT_00669fac;
        uStack_50 = DAT_00669ff4;
        local_54 = &DAT_005b14bc;
        local_58 = (undefined *)0x0;
        local_5c = (undefined1 **)0x5b04f5;
        FUN_005b1514(param_1,2,local_24 + 1);
      }
      iVar3 = DAT_00669fac;
      if (local_24 == (undefined *)0x6) {
        iVar3 = DAT_00669fa8;
      }
      if (2 < *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510)) {
        local_48 = local_24 + 0xc;
        uStack_50 = (wchar_t *)
                    (*(int *)(*(int *)(DAT_006d2660 + 0xf0 + (int)local_24 * 0x28) + 0x44) + 0x32);
        local_54 = (undefined *)0x5b0555;
        local_4c = iVar3;
        FUN_00642c50(0x25,&local_a0);
        local_54 = local_a0;
        local_44 = (undefined1 *)0x0;
        local_5c = (undefined1 **)0x5b0571;
        FUN_005b1514(param_1,3,local_24 + 7);
      }
      if (local_24 == (undefined *)0x6) {
        iVar3 = *(int *)(*(int *)(DAT_006d2660 + 0x1e0) + 0x44);
      }
      else {
        iVar3 = *(int *)(*(int *)(DAT_006d2660 + 0x1e0 + (int)local_24 * 0x28) + 0x44);
      }
      local_40 = (wchar_t *)(iVar3 + 0x32);
      if ((*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510) < 4) ||
         (7 < *(int *)(PTR_DAT_0066b50c +
                      *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) * 0x30 + -0x1c))) {
        if (3 < *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510)) {
          local_48 = (undefined *)0x5b0664;
          FUN_00466128(*(undefined4 *)(param_1 + 0x350),1);
          local_48 = (undefined *)0x5b0677;
          FUN_0046599c(*(undefined4 *)(param_1 + 0x350),0x17a);
        }
      }
      else {
        local_48 = local_24 + 0x12;
        local_4c = DAT_00669fac;
        uStack_50 = local_40;
        local_54 = (undefined *)0x5b0615;
        FUN_00642c50(0x26,&local_a4);
        local_54 = local_a4;
        local_44 = (undefined1 *)0x0;
        local_5c = (undefined1 **)0x5b0631;
        FUN_005b1514(param_1,4,local_24 + 0xd);
      }
    }
    else {
      local_34 = (char *)0x5b068c;
      FUN_00466128(*(undefined4 *)(param_1 + 0x350),0);
      local_24 = (undefined *)0x6;
      local_34 = (undefined *)0x6;
      local_38 = DAT_00669fb0;
      local_3c = DAT_00669ff4;
      local_40 = L"2ª divisão";
      local_44 = (undefined1 *)0x1;
      local_48 = (undefined *)0x5b06bc;
      FUN_005b1514(param_1,1,1);
      if (2 < *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510)) {
        local_48 = local_24 + 6;
        local_4c = DAT_00669fb0;
        uStack_50 = (wchar_t *)
                    (*(int *)(*(int *)(DAT_006d2660 + (int)local_24 * 0x28) + 0x44) + 0x32);
        local_54 = (undefined *)0x5b0709;
        FUN_00642c50(0x25,&local_a8);
        local_54 = local_a8;
        local_58 = (undefined *)0x0;
        local_5c = (undefined1 **)0x5b0723;
        FUN_005b1514(param_1,2,local_24 + 1);
      }
      if (3 < *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510)) {
        local_48 = local_24 + 0xc;
        local_4c = DAT_00669fb0;
        uStack_50 = (wchar_t *)
                    (*(int *)(*(int *)(DAT_006d2660 + 0xf0 + (int)local_24 * 0x28) + 0x44) + 0x32);
        local_54 = (undefined *)0x5b0778;
        FUN_00642c50(0x26,&local_ac);
        local_54 = local_ac;
        local_44 = (undefined1 *)0x0;
        local_5c = (undefined1 **)0x5b0794;
        FUN_005b1514(param_1,3,local_24 + 7);
      }
    }
  }
  else {
    local_38 = DAT_00669fa8;
    if (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) == 7) {
      local_38 = DAT_00669fb0;
    }
    local_34 = local_24;
    local_3c = DAT_00669ff4;
    local_40 = L"Grupo A";
    local_44 = (undefined1 *)0x1;
    local_48 = (undefined *)0x5b07e3;
    FUN_005b1514(param_1,1,1);
    if (1 < (int)local_2c) {
      iVar3 = 2;
      local_60 = &PTR_DAT_0066a0f8;
      do {
        local_4c = DAT_00669fa8;
        if (2 < iVar3) {
          local_4c = DAT_00669fac;
        }
        if (iVar3 == 3) {
          local_40 = DAT_00669ff4;
        }
        else {
          local_40 = (wchar_t *)
                     (*(int *)(*(int *)(DAT_006d2660 + (iVar3 + -1) * (int)local_24 * 0x28) + 0x44)
                     + 0x37);
        }
        if (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) == 7) {
          local_4c = DAT_00669fb0;
        }
        local_48 = local_24 + (iVar3 + -1) * (int)local_24;
        uStack_50 = local_40;
        local_54 = (undefined *)0x5b0881;
        FUN_00404bf0(&local_b4,"Grupo ",*local_60);
        local_54 = (undefined *)0x5b0892;
        FUN_004051d4(&local_b0,local_b4);
        local_54 = (undefined *)local_b0;
        local_44 = (undefined1 *)0x0;
        local_5c = (undefined1 **)0x5b08ad;
        FUN_005b1514(param_1,iVar3,(iVar3 + -1) * (int)local_24 + 1);
        iVar3 = iVar3 + 1;
        local_60 = local_60 + 1;
        local_54 = (undefined *)((int)local_54 + -1);
      } while (local_54 != (undefined *)0x0);
    }
  }
  if (param_2 == '\0') {
    iVar3 = 1;
  }
  else {
    iVar3 = 2;
  }
  if (uStack_50._3_1_ != '\0') {
    iVar7 = 1;
    local_60 = (undefined **)(PTR_DAT_0066ae98 + 0x54);
    do {
      iVar5 = 0;
      if (0 < (int)local_1c) {
        local_54 = local_1c;
        local_64 = local_60;
        do {
          puVar6 = local_64[DAT_006d25e4 * 0x15a + -0x15];
          iVar5 = iVar5 + 1;
          local_4c = 0x5b0928;
          local_48 = (undefined *)iVar5;
          FUN_004060a8(&DAT_006d25d8,PTR_DAT_005ae25c,1);
          *(undefined **)(DAT_006d25d8 + -0x28 + iVar5 * 0x28) = puVar6;
          *(undefined4 *)(DAT_006d25d8 + -0x24 + iVar5 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xc0 + (int)puVar6 * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0x20 + iVar5 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xe8 + (int)puVar6 * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0x1c + iVar5 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x110 + (int)puVar6 * 0x2f8);
          *(int *)(DAT_006d25d8 + -0x18 + iVar5 * 0x28) =
               *(int *)(*(int *)PTR_DAT_0066af70 + 0xe8 + (int)puVar6 * 0x2f8) -
               (*(int *)(*(int *)PTR_DAT_0066af70 + 0x110 + (int)puVar6 * 0x2f8) +
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x138 + (int)puVar6 * 0x2f8));
          *(undefined4 *)(DAT_006d25d8 + -0x14 + iVar5 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x138 + (int)puVar6 * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0x10 + iVar5 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x160 + (int)puVar6 * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0xc + iVar5 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x188 + (int)puVar6 * 0x2f8);
          *(int *)(DAT_006d25d8 + -8 + iVar5 * 0x28) =
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x160 + (int)puVar6 * 0x2f8) -
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x188 + (int)puVar6 * 0x2f8);
          local_64 = local_64 + 1;
          local_54 = local_54 + -1;
        } while (local_54 != (undefined *)0x0);
      }
      local_48 = (undefined *)0x5b0a58;
      DAT_006d2654 = FUN_00405eec(DAT_006d25d8);
      local_48 = (undefined *)(DAT_006d2654 + -1);
      local_44 = &LAB_005ae390;
      uStack_50 = (wchar_t *)0x5b0a77;
      FUN_004bcdb0(DAT_006d25d8,0x28,0);
      uStack_50 = 
      L"ҍ讀謗숄䖉讈\xe807呤￥ҍ讀謗쉄觘豅ދ凨\xe554跿耄ឋ䒋냂䖉讐\xe807吾￥ҍ讀謗쉄覈鑅j잋ƹ"
      ;
      iVar5 = FUN_00405ef4(DAT_006d25d8);
      local_7c[0] = *(undefined1 **)(DAT_006d25d8 + iVar5 * 0x28);
      uStack_50 = 
      L"ҍ讀謗쉄觘豅ދ凨\xe554跿耄ឋ䒋냂䖉讐\xe807吾￥ҍ讀謗쉄覈鑅j잋ƹ";
      iVar5 = FUN_00405ef4(DAT_006d25d8);
      local_7c[1] = *(undefined1 **)(DAT_006d25d8 + -0x28 + iVar5 * 0x28);
      uStack_50 = L"ҍ讀謗쉄覰遅ދ㻨\xe554跿耄ឋ䒋裂䖉檔謀맇\x01";
      iVar5 = FUN_00405ef4(DAT_006d25d8);
      local_7c[2] = *(undefined1 **)(DAT_006d25d8 + -0x50 + iVar5 * 0x28);
      uStack_50 = L"ҍ讀謗쉄覈鑅j잋ƹ";
      iVar5 = FUN_00405ef4(DAT_006d25d8);
      local_7c[3] = *(undefined1 **)(DAT_006d25d8 + -0x78 + iVar5 * 0x28);
      uStack_50 = (wchar_t *)0x0;
      local_54 = (undefined *)0x5b0ad6;
      FUN_004060a8(&DAT_006d25d8,PTR_DAT_005ae25c,1);
      local_60 = local_60 + 0x14;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (iVar3 <= (int)local_28) {
    local_54 = local_28 + (1 - iVar3);
    local_60 = (undefined **)(PTR_DAT_0066ae98 + iVar3 * 0x50 + 4);
    local_5c = (undefined1 **)(PTR_DAT_0066ae98 + iVar3 * 0x28 + 4);
    do {
      puVar6 = (undefined *)0x0;
      if ((uStack_50._3_1_ == '\0') && (1 < iVar3)) {
        local_24 = (undefined *)0x6;
      }
      if (0 < (int)local_24) {
        local_58 = local_24;
        local_68 = local_60;
        local_6c = local_5c;
        do {
          if (uStack_50._3_1_ == '\0') {
            puVar4 = local_68[DAT_006d25e4 * 0x15a + -0x15];
          }
          else {
            puVar4 = local_6c[DAT_006d25e4 * 0x15a + 0x59];
          }
          puVar6 = puVar6 + 1;
          local_4c = 0x5b0b93;
          local_48 = puVar6;
          FUN_004060a8(&DAT_006d25d8,PTR_DAT_005ae25c,1);
          *(undefined1 **)(DAT_006d25d8 + -0x28 + (int)puVar6 * 0x28) = puVar4;
          *(undefined4 *)(DAT_006d25d8 + -0x24 + (int)puVar6 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xc0 + (int)puVar4 * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0x20 + (int)puVar6 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xe8 + (int)puVar4 * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0x1c + (int)puVar6 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x110 + (int)puVar4 * 0x2f8);
          *(int *)(DAT_006d25d8 + -0x18 + (int)puVar6 * 0x28) =
               *(int *)(*(int *)PTR_DAT_0066af70 + 0xe8 + (int)puVar4 * 0x2f8) -
               (*(int *)(*(int *)PTR_DAT_0066af70 + 0x110 + (int)puVar4 * 0x2f8) +
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x138 + (int)puVar4 * 0x2f8));
          *(undefined4 *)(DAT_006d25d8 + -0x14 + (int)puVar6 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x138 + (int)puVar4 * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0x10 + (int)puVar6 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x160 + (int)puVar4 * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0xc + (int)puVar6 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x188 + (int)puVar4 * 0x2f8);
          *(int *)(DAT_006d25d8 + -8 + (int)puVar6 * 0x28) =
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x160 + (int)puVar4 * 0x2f8) -
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x188 + (int)puVar4 * 0x2f8);
          local_6c = local_6c + 1;
          local_68 = local_68 + 1;
          local_58 = local_58 + -1;
        } while (local_58 != (undefined *)0x0);
      }
      local_48 = (undefined *)0x5b0cc7;
      DAT_006d2654 = FUN_00405eec(DAT_006d25d8);
      local_48 = (undefined *)(DAT_006d2654 + -1);
      local_44 = &LAB_005ae390;
      uStack_50 = L"ދ삃먤ᔀ[㏨\xe53c诿䣆삅踏\x99";
      FUN_004bcdb0(DAT_006d25d8,0x28,0);
      uStack_50 = L"욋蕈࿀馎";
      FUN_00404928(DAT_006d25d8 + 0x24,&DAT_005b1500);
      if (0 < (int)(puVar6 + -1)) {
        iVar7 = 1;
        local_58 = puVar6 + -1;
        do {
          if ((((*(int *)(DAT_006d25d8 + 4 + iVar7 * 0x28) ==
                 *(int *)(DAT_006d25d8 + -0x24 + iVar7 * 0x28)) &&
               (*(int *)(DAT_006d25d8 + 0x20 + iVar7 * 0x28) ==
                *(int *)(DAT_006d25d8 + -8 + iVar7 * 0x28))) &&
              (*(int *)(DAT_006d25d8 + 0x18 + iVar7 * 0x28) ==
               *(int *)(DAT_006d25d8 + -0x10 + iVar7 * 0x28))) &&
             (*(int *)(DAT_006d25d8 + 0xc + iVar7 * 0x28) ==
              *(int *)(DAT_006d25d8 + -0x1c + iVar7 * 0x28))) {
            uStack_50 = 
            L"⟫閍ｌ\xffff䎍\xe801遢￥開ｌ\xffffҍ讛贏셄뤤ᔌ[懨\xe53e䏿䷿ྫྷ澅\xffff仿\xf685谏ŝ"
            ;
            FUN_004048d4(DAT_006d25d8 + 0x24 + iVar7 * 0x28);
          }
          else {
            uStack_50 = L"開ｌ\xffffҍ讛贏셄뤤ᔌ[懨\xe53e䏿䷿ྫྷ澅\xffff仿\xf685谏ŝ";
            FUN_00409dd8(iVar7 + 1,&local_b8);
            uStack_50 = 
            L"ｃ걍蔏ｯ\xffff蕎࿶嶌\x01䘀疉㎬跛鬄ឋҋ观\xe445Ⴚ嬕贀ⲅ\xffff\xe8ff⌑￥䕫忤ᖋ꽰fኋᒍ跂ⲅ\xffff뇿\xe81a⋅￥閍Ｌ\xffff薍ｈ\xffff壨\xe53d诿䢕\xffff诿큵㒍ꆶ♠m䒋Ӱ⻨\xeb54跿鬄ឋ咋Ⓜ悡洦謀\xf004ᣨ\xeb54뻿\x01"
            ;
            FUN_00404bf0(DAT_006d25d8 + 0x24 + iVar7 * 0x28,local_b8,&DAT_005b150c);
          }
          iVar7 = iVar7 + 1;
          local_58 = local_58 + -1;
        } while (local_58 != (undefined *)0x0);
      }
      if (-1 < (int)(puVar6 + -1)) {
        iVar7 = 0;
        local_58 = puVar6;
        do {
          local_20 = *(undefined1 **)(DAT_006d25d8 + iVar7 * 0x28);
          uStack_50 = 
          L"䕫忤ᖋ꽰fኋᒍ跂ⲅ\xffff뇿\xe81a⋅￥閍Ｌ\xffff薍ｈ\xffff壨\xe53d诿䢕\xffff诿큵㒍ꆶ♠m䒋Ӱ⻨\xeb54跿鬄ឋ咋Ⓜ悡洦謀\xf004ᣨ\xeb54뻿\x01"
          ;
          FUN_004030d4(local_d8,&DAT_005b1510);
          uStack_50 = 
          L"閍Ｌ\xffff薍ｈ\xffff壨\xe53d诿䢕\xffff诿큵㒍ꆶ♠m䒋Ӱ⻨\xeb54跿鬄ឋ咋Ⓜ悡洦謀\xf004ᣨ\xeb54뻿\x01"
          ;
          FUN_004030a4(local_d8,*(int *)PTR_DAT_0066af70 + (int)local_20 * 0x2f8,0x1a);
          uStack_50 = 
          L"開ｈ\xffff疋跐똴悡洦謀\xf044\xe804吮￫ҍ讛謗쉔ꄤ♠mҋ\xe8f0吘￫ƾ";
          FUN_00404b48(&local_bc,local_d8);
          pcVar2 = local_34;
          uStack_50 = L"ҍ讛謗쉔ꄤ♠mҋ\xe8f0吘￫ƾ";
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + 4 + (int)local_34 * 0x28),local_bc);
          uStack_50 = L"ƾ";
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + (int)pcVar2 * 0x28),
                       *(undefined4 *)(DAT_006d25d8 + 0x24 + iVar7 * 0x28));
          iVar5 = 1;
          do {
            uStack_50 = 
            L"開Ｈ\xffff䖋跐耄උ♠mҍ证끄\xe804叟￫荆৾왵閍Ｄ\xffff䖋\xe8e4䚛\t붃Ｄ\xffff琀贬ₕ\xffff诿\xe445蓨ॆ謀ₕ\xffffꇿ⩰m䶋诐蠄肋Ũ"
            ;
            FUN_00409dd8(*(undefined4 *)(DAT_006d25d8 + iVar7 * 0x28 + iVar5 * 4),&local_dc);
            uStack_50 = 
            L"荆৾왵閍Ｄ\xffff䖋\xe8e4䚛\t붃Ｄ\xffff琀贬ₕ\xffff诿\xe445蓨ॆ謀ₕ\xffffꇿ⩰m䶋诐蠄肋Ũ"
            ;
            FUN_00466238(*(undefined4 *)(DAT_006d2660 + (int)local_34 * 0x28 + 4 + iVar5 * 4),
                         local_dc);
            iVar5 = iVar5 + 1;
          } while (iVar5 != 9);
          uStack_50 = L"붃Ｄ\xffff琀贬ₕ\xffff诿\xe445蓨ॆ謀ₕ\xffffꇿ⩰m䶋诐蠄肋Ũ"
          ;
          FUN_00645508(local_20,&local_e0);
          if (local_e0 == 0) {
            uStack_50 = 
            L"䖋㮈\xe445ॵ䖋觐碅\xffff诿豅䔻痤謉큅薉ｼ\xffff䖋㮐\xe445ٵ䖋觐聅䖋㮔\xe445ٵ䖋觐葅䗿䏐䷿ྫྷꦅ\xfffe櫿謀맇\x01"
            ;
            FUN_0043aa68(*(undefined4 *)(DAT_006d2a70 + (int)local_34 * 4),0);
          }
          else {
            uStack_50 = 
            L"開＠\xffff炡洪謀큍ҋ讈梀\x01\xe800젠￧ያ炡洪謀큕ҋ㎐\xe8d2鮴￨䖋㮈\xe445ॵ䖋觐碅\xffff诿豅䔻痤謉큅薉ｼ\xffff䖋㮐\xe445ٵ䖋觐聅䖋㮔\xe445ٵ䖋觐葅䗿䏐䷿ྫྷꦅ\xfffe櫿謀맇\x01"
            ;
            FUN_00645508(local_20,&local_e4);
            uStack_50 = 
            L"ያ炡洪謀큕ҋ㎐\xe8d2鮴￨䖋㮈\xe445ॵ䖋觐碅\xffff诿豅䔻痤謉큅薉ｼ\xffff䖋㮐\xe445ٵ䖋觐聅䖋㮔\xe445ٵ䖋觐葅䗿䏐䷿ྫྷꦅ\xfffe櫿謀맇\x01"
            ;
            FUN_0042d6c0(*(undefined4 *)(*(int *)(DAT_006d2a70 + (int)local_34 * 4) + 0x168),
                         local_e4);
          }
          if (local_7c[0] == local_20) {
            local_8c[0] = local_34;
          }
          if (local_7c[1] == local_20) {
            local_8c[1] = local_34;
          }
          if (local_7c[2] == local_20) {
            local_8c[2] = local_34;
          }
          if (local_7c[3] == local_20) {
            local_8c[3] = local_34;
          }
          local_34 = local_34 + 1;
          iVar7 = iVar7 + 1;
          local_58 = local_58 + -1;
        } while (local_58 != (undefined *)0x0);
      }
      uStack_50 = (wchar_t *)0x0;
      local_54 = (undefined *)0x5b0f13;
      FUN_004060a8(&DAT_006d25d8,PTR_DAT_005ae25c,1);
      iVar3 = iVar3 + 1;
      local_5c = local_5c + 10;
      local_60 = local_60 + 0x14;
      local_54 = (undefined *)((int)local_54 + -1);
    } while (local_54 != (undefined *)0x0);
  }
  local_24 = local_44;
  if (uStack_50._3_1_ == '\0') {
    local_48 = (undefined *)0x5b0f44;
    local_3c = (wchar_t *)FUN_0064a9b0(DAT_006d25e4);
    if (*(int *)(PTR_DAT_0066b50c +
                *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) * 0x30 + -0x24) <=
        (int)local_3c) {
      local_3c = *(wchar_t **)
                  (PTR_DAT_0066b50c +
                  *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) * 0x30 + -0x24);
    }
    local_48 = (undefined *)0x5b0fa5;
    local_38 = FUN_0064a9f4(DAT_006d25e4);
    if (*(int *)(PTR_DAT_0066b50c +
                *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) * 0x30 + -0x24) <=
        local_38) {
      local_38 = *(int *)(PTR_DAT_0066b50c +
                         *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) * 0x30 + -0x24);
    }
    if (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) == 1) {
      local_48 = (undefined *)0x4;
      local_4c = 0x5b1053;
      FUN_005ae33c(param_1,1,2);
      local_48 = (undefined *)0x5;
      local_4c = 0x5b1067;
      FUN_005ae33c(param_1,6,6);
    }
    else if (param_2 == '\0') {
      if (0 < local_38) {
        local_48 = (undefined *)0x5;
        local_4c = 0x5b108b;
        FUN_005ae33c(param_1,(int)local_24 - (local_38 + -1),local_24);
      }
      local_48 = (undefined *)0x4;
      local_4c = 0x5b109d;
      FUN_005ae33c(param_1,1,4);
    }
    if (param_2 == '\0') {
      if (1 < *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510)) {
        local_48 = (undefined *)0x4;
        local_4c = 0x5b10d5;
        FUN_005ae33c(param_1,local_24 + 1,local_24 + local_38);
        local_48 = (undefined *)0x5;
        local_4c = 0x5b10eb;
        FUN_005ae33c(param_1,local_24 + 6,local_24 + 6);
      }
      if (2 < *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510)) {
        local_48 = (undefined *)0x4;
        local_4c = 0x5b111b;
        FUN_005ae33c(param_1,local_24 + 7,local_24 + 7);
        local_48 = (undefined *)0x5;
        local_4c = 0x5b1131;
        FUN_005ae33c(param_1,local_24 + 0xc,local_24 + 0xc);
      }
      if (3 < *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510)) {
        local_48 = (undefined *)0x4;
        local_4c = 0x5b1165;
        FUN_005ae33c(param_1,local_24 + 0xd,local_24 + 0xd);
        local_48 = (undefined *)0x5;
        local_4c = 0x5b117b;
        FUN_005ae33c(param_1,local_24 + 0x12,local_24 + 0x12);
      }
    }
    else {
      if (1 < *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510)) {
        local_48 = (undefined *)0x4;
        local_4c = 0x5b11ac;
        FUN_005ae33c(param_1,1,local_38);
        local_48 = (undefined *)0x5;
        local_4c = 0x5b11c0;
        FUN_005ae33c(param_1,6,6);
      }
      if (2 < *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510)) {
        local_48 = (undefined *)0x4;
        local_4c = 0x5b11ee;
        FUN_005ae33c(param_1,7,7);
        local_48 = (undefined *)0x5;
        local_4c = 0x5b1202;
        FUN_005ae33c(param_1,0xc,0xc);
      }
      if (3 < *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510)) {
        local_48 = (undefined *)0x4;
        local_4c = 0x5b1234;
        FUN_005ae33c(param_1,0xd,0xd);
        local_48 = (undefined *)0x5;
        local_4c = 0x5b1248;
        FUN_005ae33c(param_1,0x12,0x12);
      }
    }
  }
  else {
    if (0 < (int)local_28) {
      local_54 = local_28;
      iVar3 = 1;
      do {
        local_48 = (undefined *)0x4;
        local_4c = 0x5b12a1;
        FUN_005ae33c(param_1,(iVar3 + -1) * (int)local_24 + 1,(iVar3 + -1) * (int)local_24 + 4);
        iVar3 = iVar3 + 1;
        local_54 = local_54 + -1;
      } while (local_54 != (undefined *)0x0);
    }
    if (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510) == 1) {
      local_48 = (undefined *)0x5b12cb;
      local_3c = (wchar_t *)FUN_0064a9b0(DAT_006d25e4);
    }
    else {
      local_3c = (wchar_t *)0x6;
    }
    if (*(int *)(PTR_DAT_0066b50c +
                *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) * 0x30 + -0x24) <=
        (int)local_3c) {
      local_3c = *(wchar_t **)
                  (PTR_DAT_0066b50c +
                  *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) * 0x30 + -0x24);
    }
    if (0 < (int)local_3c) {
      local_48 = (undefined *)0x5;
      local_4c = 0x5b1347;
      FUN_005ae33c(param_1,local_8c[0],local_8c[0]);
    }
    if (1 < (int)local_3c) {
      local_48 = (undefined *)0x5;
      local_4c = 0x5b1363;
      FUN_005ae33c(param_1,local_8c[1],local_8c[1]);
    }
    if (2 < (int)local_3c) {
      local_48 = (undefined *)0x5;
      local_4c = 0x5b1379;
      FUN_005ae33c(param_1,local_8c[2],local_8c[2]);
    }
    if (3 < (int)local_3c) {
      local_48 = (undefined *)0x5;
      local_4c = 0x5b138f;
      FUN_005ae33c(param_1,local_8c[3],local_8c[3]);
    }
  }
  if (param_2 == '\0') {
    local_48 = (undefined *)0x5b139d;
    FUN_005aedfc(param_1);
  }
  else {
    local_48 = (undefined *)0x5b13af;
    FUN_00466128(*(undefined4 *)(param_1 + 0x338),0);
    local_48 = (undefined *)0x5b13bf;
    FUN_00466128(*(undefined4 *)(param_1 + 0x348),0);
    local_48 = (undefined *)0x5b13cf;
    FUN_00466128(*(undefined4 *)(param_1 + 0x340),0);
  }
  pwVar1 = local_3c;
  *in_FS_OFFSET = local_44;
  local_3c = L"幟譛工Ã\xffff\xffff\x1e";
  local_40 = L"薍ｈ\xffffκ";
  FUN_004048f8(&local_e4,3,pwVar1);
  local_40 = L"薍ｔ\xffffֺ";
  FUN_004048f8(&local_bc,3);
  local_40 = 
  L"薍ｨ\xffff뷨\xe534跿沅\xffff\xe8ff㯎￥薍ｰ\xffff꟨\xe534跿璅\xffff\xe8ff㮸￥\xe9c3ⷚ￥鳫幟譛工Ã\xffff\xffff\x1e"
  ;
  FUN_00405008(&local_b0,5);
  local_40 = (wchar_t *)0x5b1417;
  FUN_004048d4(&local_9c);
  local_40 = 
  L"薍ｰ\xffff꟨\xe534跿璅\xffff\xe8ff㮸￥\xe9c3ⷚ￥鳫幟譛工Ã\xffff\xffff\x1e";
  FUN_00404ff0(&local_98);
  local_40 = (wchar_t *)0x5b142d;
  FUN_004048d4(&local_94);
  local_40 = L"\xe9c3ⷚ￥鳫幟譛工Ã\xffff\xffff\x1e";
  FUN_00404ff0(&local_90);
  return;
}

