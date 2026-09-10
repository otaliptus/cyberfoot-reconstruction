// Address: 00610b38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00610b38(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  wchar_t *local_60;
  wchar_t *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  wchar_t *local_50;
  wchar_t *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  wchar_t *local_3c;
  wchar_t *local_38;
  wchar_t *local_34;
  wchar_t *local_30;
  wchar_t *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  uint uVar9;
  uint local_10;
  
  iVar6 = 0xb;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_24 = &LAB_006128e7;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_20 = (undefined4 *)&stack0xfffffffc;
  if ((PTR_DAT_0066ac78[0x10c] != '\0') &&
     (iVar6 = *(int *)PTR_DAT_0066aea4, local_20 = (undefined4 *)&stack0xfffffffc, 0 < iVar6)) {
    iVar7 = 1;
    local_20 = (undefined4 *)&stack0xfffffffc;
    do {
      if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                    *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar7 * 0x1bc) * 0x2f8) == '\0') &&
         (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar7 * 0x1bc) * 0x2f8) == '\0')) {
        local_2c = L"炡浇謀頄肋Ŭ";
        FUN_0042ab6c(*(undefined4 *)(*(int *)(DAT_006d476c + iVar7 * 4) + 0x16c),0x6400);
        local_2c = L"ｃ\xe84d蔏Ｙ\xffff툳䗆ï줳䗆î碡暬謀袀";
        FUN_0042ab6c(*(undefined4 *)(*(int *)(DAT_006d4770 + iVar7 * 4) + 0x16c),0x6400);
      }
      else {
        local_2c = L"碡暬謀풀";
        FUN_0042ab6c(*(undefined4 *)(*(int *)(DAT_006d476c + iVar7 * 4) + 0x16c),
                     *(undefined4 *)(PTR_DAT_0066b5a8 + *(int *)(PTR_DAT_0066ac78 + 0xd4) * 4 + -4))
        ;
        local_2c = L"ル没浇謀頄肋Ŭ";
        FUN_0042ab6c(*(undefined4 *)(*(int *)(DAT_006d4770 + iVar7 * 4) + 0x16c),
                     *(undefined4 *)(PTR_DAT_0066b5a8 + *(int *)(PTR_DAT_0066ac78 + 0xd4) * 4 + -4))
        ;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  bVar2 = false;
  bVar1 = false;
  bVar4 = false;
  bVar3 = false;
  iVar6 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if (((((iVar6 == 4) || (iVar6 == 6)) || (iVar6 == 7)) || ((iVar6 == 5 || (iVar6 == 8)))) ||
     (iVar6 == 9)) {
    bVar2 = false;
    if ((iVar6 == 4) && (bVar2 = true, *(int *)(PTR_DAT_0066ac78 + 0x194) < 4)) {
      bVar4 = true;
    }
    bVar3 = false;
    if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 6) && (*(int *)PTR_DAT_0066b484 == 2)) {
      bVar2 = true;
      if (*(int *)(PTR_DAT_0066ac78 + 0x1a0) < 4) {
        bVar4 = true;
      }
    }
    else if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 6) && (*(int *)PTR_DAT_0066b484 == 1)) {
      bVar1 = true;
    }
    iVar6 = *(int *)(PTR_DAT_0066ac78 + 0x88);
    if (((iVar6 == 7) || (iVar6 == 8)) || (iVar6 == 9)) {
      if (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 6) {
        bVar2 = true;
        if (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 4) {
          bVar4 = true;
          bVar3 = false;
        }
      }
      else if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 7) && (*(int *)(PTR_DAT_0066ac78 + 0x62c) == 7)
              ) {
        bVar3 = true;
      }
      else if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 9))
      {
        bVar3 = true;
      }
      else {
        bVar2 = true;
        if (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 4) {
          bVar4 = true;
        }
      }
    }
    if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 5) && (*(int *)(PTR_DAT_0066ac78 + 0x1a8) < 3)) {
      bVar1 = true;
    }
  }
  iVar6 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if (iVar6 == 1) {
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      iVar6 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + *(int *)PTR_DAT_0066b484 * 0x294);
      if (iVar6 == 1) {
        local_2c = (wchar_t *)0x1;
        local_30 = L"⋫ᖋ겠fᖋ뒄f繈樓뤁\x14";
        FUN_0061086c(param_1,1,10);
      }
      else if (1 < iVar6) {
        local_2c = (wchar_t *)0x1;
        local_30 = L"蚋̐";
        FUN_0061086c(param_1,1,0x14);
      }
      iVar6 = *(int *)(*(int *)(param_1 + 0x310) + 0x4c);
      local_2c = (wchar_t *)(*(int *)(*(int *)(param_1 + 0x310) + 0x44) + iVar6 + iVar6 + 5);
      local_30 = L"蒡暴椀ꔀ";
      FUN_006109ac(param_1,1,10);
      if (1 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + *(int *)PTR_DAT_0066b484 * 0x294)) {
        local_2c = (wchar_t *)(*(int *)(*(int *)(DAT_006d4760 + 0x28) + 0x44) + 0x50);
        local_30 = L"蒡暴椀ꔀ";
        FUN_006109ac(param_1,0xb,0x14);
      }
      if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + *(int *)PTR_DAT_0066b484 * 0x294) == 1) {
        local_2c = (wchar_t *)0xa;
        local_30 = L"䂡浅謀䑐蚋̔";
        FUN_0061078c(param_1,1,1);
        local_2c = L"蚋̔";
        FUN_0046599c(*(undefined4 *)(param_1 + 0x314),
                     *(int *)(DAT_006d4540 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
        local_2c = L"闩";
        FUN_00466128(*(undefined4 *)(param_1 + 0x314),1);
      }
      else if (1 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + *(int *)PTR_DAT_0066b484 * 0x294)) {
        local_2c = (wchar_t *)0xa;
        local_30 = L"䂡浅謀䑐蚋̔";
        FUN_0061078c(param_1,1,1);
        local_2c = L"蚋̔";
        FUN_0046599c(*(undefined4 *)(param_1 + 0x314),
                     *(int *)(DAT_006d4540 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
        local_2c = L"ᑪஹ";
        FUN_00466128(*(undefined4 *)(param_1 + 0x314),1);
        local_2c = (wchar_t *)0x14;
        local_30 = L"䒡浅謀䑐蚋̘";
        FUN_0061078c(param_1,2,0xb);
        local_2c = L"蚋̘";
        FUN_0046599c(*(undefined4 *)(param_1 + 0x318),
                     *(int *)(DAT_006d4544 + 0x44) - *(int *)(*(int *)(param_1 + 0x318) + 0x4c));
        local_2c = L"ׇ䞐m\x02";
        FUN_00466128(*(undefined4 *)(param_1 + 0x318),1);
      }
      DAT_006d4790 = 2;
      if (*(int *)(PTR_DAT_0066ac78 + 0x13c) == 1) {
        if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) == 3)
        {
          DAT_006d4790 = 3;
        }
        else if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)
                 == 4) {
          DAT_006d4790 = 4;
        }
      }
      if (2 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + *(int *)PTR_DAT_0066b484 * 0x294)) {
        if ((DAT_006d4790 == 3) &&
           (2 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + *(int *)PTR_DAT_0066b484 * 0x294))) {
          local_2c = L"㋫㶃䞐m甄ꄩ뒄fi¥";
          FUN_006247cc(param_1,3);
        }
        else if ((DAT_006d4790 == 4) &&
                (3 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + *(int *)PTR_DAT_0066b484 * 0x294)))
        {
          local_2c = 
          L"撡浅謀䑐撡浅̀䱐슃謇㢆\x03\xe800䣾￥撡浅謀䑐撡浅̀䱐슃謇㲆\x03\xe800䣠￥撡浅謀䑐撡浅̀䱐슃謇䂆\x03\xe800䣂￥蒡暴椀ꔀ"
          ;
          FUN_006247cc(param_1,4);
        }
        local_2c = 
        L"撡浅謀䑐撡浅̀䱐슃謇㲆\x03\xe800䣠￥撡浅謀䑐撡浅̀䱐슃謇䂆\x03\xe800䣂￥蒡暴椀ꔀ"
        ;
        FUN_0046599c(*(undefined4 *)(param_1 + 0x338),
                     *(int *)(DAT_006d4564 + 0x44) + *(int *)(DAT_006d4564 + 0x4c) + 7);
        local_2c = L"撡浅謀䑐撡浅̀䱐슃謇䂆\x03\xe800䣂￥蒡暴椀ꔀ";
        FUN_0046599c(*(undefined4 *)(param_1 + 0x33c),
                     *(int *)(DAT_006d4564 + 0x44) + *(int *)(DAT_006d4564 + 0x4c) + 7);
        local_2c = L"蒡暴椀ꔀ";
        FUN_0046599c(*(undefined4 *)(param_1 + 0x340),
                     *(int *)(DAT_006d4564 + 0x44) + *(int *)(DAT_006d4564 + 0x4c) + 7);
        if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + *(int *)PTR_DAT_0066b484 * 0x294) < 4) {
          if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + *(int *)PTR_DAT_0066b484 * 0x294) == 3) {
            local_2c = L"蚋̼";
            FUN_00466128(*(undefined4 *)(param_1 + 0x338),
                         CONCAT31((int3)((uint)*(int *)PTR_DAT_0066aca0 >> 8),1));
            local_2c = L"蒡暴椀ꔀ";
            FUN_00466128(*(undefined4 *)(param_1 + 0x33c),1);
          }
        }
        else {
          local_2c = L"蚋̼";
          FUN_00466128(*(undefined4 *)(param_1 + 0x338),
                       CONCAT31((int3)((uint)*(int *)PTR_DAT_0066aca0 >> 8),1));
          local_2c = L"蚋̀";
          FUN_00466128(*(undefined4 *)(param_1 + 0x33c),1);
          local_2c = L"㟫蒡暴椀ꔀ";
          FUN_00466128(*(undefined4 *)(param_1 + 0x340),1);
        }
      }
      if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + *(int *)PTR_DAT_0066b484 * 0x294) == 1) {
        local_2c = (wchar_t *)0x0;
        local_30 = L"蚋̘";
        FUN_0061086c(param_1,0xb,0x28);
        local_2c = L"툳䒡浅\xe800侄￥툳撡浅\xe800佸￥蚋̸";
        FUN_00466128(*(undefined4 *)(param_1 + 0x318),0);
        local_2c = L"툳撡浅\xe800佸￥蚋̸";
        FUN_00466128(DAT_006d4544,0);
        local_2c = L"蚋̸";
        FUN_00466128(DAT_006d4564,0);
        local_2c = L"蚋̼";
        FUN_00466128(*(undefined4 *)(param_1 + 0x338),0);
        local_2c = L"蚋̀";
        FUN_00466128(*(undefined4 *)(param_1 + 0x33c),0);
        local_2c = L"듩\x16謀砕暬茀Ӹ蔏ᚥ";
        FUN_00466128(*(undefined4 *)(param_1 + 0x340),0);
      }
    }
    else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
      local_2c = (wchar_t *)0x1;
      local_30 = L"蚋̐";
      FUN_0061086c(param_1,1,0x14);
      local_2c = (wchar_t *)
                 (*(int *)(*(int *)(param_1 + 0x310) + 0x44) +
                  *(int *)(*(int *)(param_1 + 0x310) + 0x4c) +
                  *(int *)(*(int *)(param_1 + 0x310) + 0x4c) + 5);
      local_30 = L"悡浇謀ᑀ䂋荄䇀륐\n";
      FUN_006109ac(param_1,1,5);
      local_2c = (wchar_t *)(*(int *)(*(int *)(DAT_006d4760 + 0x14) + 0x44) + 0x41);
      local_30 = L"悡浇謀⡀䂋荄䇀륐\x0f";
      FUN_006109ac(param_1,6,10);
      local_2c = (wchar_t *)(*(int *)(*(int *)(DAT_006d4760 + 0x28) + 0x44) + 0x41);
      local_30 = L"悡浇謀㱀䂋荄䇀륐\x14";
      FUN_006109ac(param_1,0xb,0xf);
      local_2c = (wchar_t *)(*(int *)(*(int *)(DAT_006d4760 + 0x3c) + 0x44) + 0x41);
      local_30 = L"ժƹ";
      FUN_006109ac(param_1,0x10,0x14);
      local_2c = (wchar_t *)0x5;
      local_30 = L"੪ڹ";
      FUN_0061078c(param_1,1,1);
      local_2c = (wchar_t *)0xa;
      local_30 = L"ཪஹ";
      FUN_0061078c(param_1,2,6);
      local_2c = (wchar_t *)0xf;
      local_30 = L"ᑪႹ";
      FUN_0061078c(param_1,3,0xb);
      local_2c = (wchar_t *)0x14;
      local_30 = L"ƻ";
      FUN_0061078c(param_1,4,0x10);
      iVar6 = 1;
      piVar8 = &DAT_006d4540;
      do {
        local_2c = 
        L"䶋跜\xe045º愩\xe800㣲￟喋ꇠ䒐m嗨\xe160觿\xf045ދ傋譄\xf045倫荌ς䖋\xe8f0䙸￥Ʋ䖋\xe8f0䷺￥荃Ӈﮃ甅ꆭ뒄fi¥"
        ;
        FUN_00409dd8(iVar6,&local_28);
        local_2c = 
        L"喋ꇠ䒐m嗨\xe160觿\xf045ދ傋譄\xf045倫荌ς䖋\xe8f0䙸￥Ʋ䖋\xe8f0䷺￥荃Ӈﮃ甅ꆭ뒄fi¥"
        ;
        FUN_00404bf0(&local_24,"lab_div",local_28);
        local_2c = 
        L"䖉诰謇䑐䖋⯰䱐슃謃\xf045磨\xe546닿謁\xf045﫨\xe54d䏿잃茄׻굵蒡暴椀ꔀ"
        ;
        iVar7 = FUN_00427360(DAT_006d4490,local_24);
        local_2c = L"Ʋ䖋\xe8f0䷺￥荃Ӈﮃ甅ꆭ뒄fi¥";
        FUN_0046599c(iVar7,(*(int *)(*piVar8 + 0x44) - *(int *)(iVar7 + 0x4c)) + 3);
        local_2c = L"荃Ӈﮃ甅ꆭ뒄fi¥";
        FUN_00466128(iVar7,1);
        iVar6 = iVar6 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar6 != 5);
      if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + *(int *)PTR_DAT_0066b484 * 0x294) == 2) {
        local_2c = (wchar_t *)0x0;
        local_30 = L"jᒹ";
        FUN_0061086c(param_1,0xb,0xf);
        local_2c = (wchar_t *)0x0;
        local_30 = L"蚋̜";
        FUN_0061086c(param_1,0x10,0x14);
        local_2c = L"蚋̠";
        FUN_00466128(*(undefined4 *)(param_1 + 0x31c),0);
        local_2c = 
        L"툳䢡浅\xe800䶈￥툳梡浅\xe800䵼￥툳䲡浅\xe800䵰￥툳没浅\xe800䵤￥蒡暴椀ꔀ"
        ;
        FUN_00466128(*(undefined4 *)(param_1 + 800),0);
        local_2c = L"툳梡浅\xe800䵼￥툳䲡浅\xe800䵰￥툳没浅\xe800䵤￥蒡暴椀ꔀ";
        FUN_00466128(DAT_006d4548,0);
        local_2c = L"툳䲡浅\xe800䵰￥툳没浅\xe800䵤￥蒡暴椀ꔀ";
        FUN_00466128(DAT_006d4568,0);
        local_2c = L"툳没浅\xe800䵤￥蒡暴椀ꔀ";
        FUN_00466128(DAT_006d454c,0);
        local_2c = L"蒡暴椀ꔀ";
        FUN_00466128(DAT_006d456c,0);
      }
      if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + *(int *)PTR_DAT_0066b484 * 0x294) == 3) {
        local_2c = (wchar_t *)0x0;
        local_30 = L"蚋̠";
        FUN_0061086c(param_1,0x10,0x14);
        local_2c = L"툳䲡浅\xe800䴗￥툳没浅\xe800䴋￥滩\x14謀砝暬茀ϸ蔏࢝";
        FUN_00466128(*(undefined4 *)(param_1 + 800),0);
        local_2c = L"툳没浅\xe800䴋￥滩\x14謀砝暬茀ϸ蔏࢝";
        FUN_00466128(DAT_006d454c,0);
        local_2c = L"滩\x14謀砝暬茀ϸ蔏࢝";
        FUN_00466128(DAT_006d456c,0);
      }
    }
  }
  else if (iVar6 == 3) {
    iVar6 = *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530);
    local_2c = (wchar_t *)0x61146c;
    iVar7 = FUN_00402c38();
    if (*(int *)(PTR_DAT_0066b40c + *(int *)PTR_DAT_0066b080 * 4 + iVar6 * 0x50 + -0x54) == -1) {
      local_2c = (wchar_t *)
                 (*(int *)(*(int *)(param_1 + 0x310) + 0x44) +
                  *(int *)(*(int *)(param_1 + 0x310) + 0x4c) +
                  *(int *)(*(int *)(param_1 + 0x310) + 0x4c) + 5);
      local_30 = L"鲡暰椀관";
      FUN_006109ac(param_1,1,iVar7);
      if ((*(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x510) == 1) ||
         (10 < *(int *)PTR_DAT_0066b080)) {
        local_2c = (wchar_t *)0x1;
        local_30 = L"륓\x01";
        FUN_0061086c(param_1,1,iVar7);
        local_30 = L"䂡浅謀䑐蚋̔";
        local_2c = (wchar_t *)iVar7;
        FUN_0061078c(param_1,1,1);
        local_2c = L"蚋̔";
        FUN_0046599c(*(undefined4 *)(param_1 + 0x314),
                     *(int *)(DAT_006d4540 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
        local_2c = L"叩\x13ꄀ난fi­";
        FUN_00466128(*(undefined4 *)(param_1 + 0x314),1);
      }
      else if (*(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x510) == 2) {
        local_2c = (wchar_t *)0x1;
        local_30 = L"悡浇謀頄䂋荄僀赐͋厍謁\xe8c6\xf423\xffff륓\x01";
        FUN_0061086c(param_1,1,iVar7 + 3);
        local_2c = (wchar_t *)(*(int *)(*(int *)(DAT_006d4760 + iVar7 * 4) + 0x44) + 0x50);
        local_30 = L"륓\x01";
        FUN_006109ac(param_1,iVar7 + 1,iVar7 + 3);
        local_30 = L"䂡浅謀䑐蚋̔";
        local_2c = (wchar_t *)iVar7;
        FUN_0061078c(param_1,1,1);
        local_2c = L"蚋̔";
        FUN_0046599c(*(undefined4 *)(param_1 + 0x314),
                     *(int *)(DAT_006d4540 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
        local_2c = L"股暰茀ਸ輏ኾ";
        FUN_00466128(*(undefined4 *)(param_1 + 0x314),1);
        if (*(int *)PTR_DAT_0066b080 < 0xb) {
          local_2c = (wchar_t *)(iVar7 + 3);
          local_30 = L"䒡浅謀䑐蚋̔";
          FUN_0061078c(param_1,2,iVar7 + 1);
          local_2c = L"蚋̘";
          FUN_0046599c(*(undefined4 *)(param_1 + 0x318),
                       *(int *)(DAT_006d4544 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
          local_2c = L"緩\x12ꄀ난fi­";
          FUN_00466128(*(undefined4 *)(param_1 + 0x318),1);
        }
      }
      else if (*(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x510) == 3) {
        local_2c = (wchar_t *)0x1;
        local_30 = 
        L"悡浇謀頄䂋荄䛀赐͋厍謁\xe8c6\xf34d\xffff悡浇謀顄謌䑀삃偆䮍贆ѓ욋ヨ\xfff3叿ƹ"
        ;
        FUN_0061086c(param_1,1,iVar7 + 6);
        local_2c = (wchar_t *)(*(int *)(*(int *)(DAT_006d4760 + iVar7 * 4) + 0x44) + 0x46);
        local_30 = L"悡浇謀顄謌䑀삃偆䮍贆ѓ욋ヨ\xfff3叿ƹ";
        FUN_006109ac(param_1,iVar7 + 1,iVar7 + 3);
        local_2c = (wchar_t *)(*(int *)(*(int *)(DAT_006d4760 + 0xc + iVar7 * 4) + 0x44) + 0x46);
        local_30 = L"륓\x01";
        FUN_006109ac(param_1,iVar7 + 4,iVar7 + 6);
        local_30 = L"䂡浅謀䑐蚋̔";
        local_2c = (wchar_t *)iVar7;
        FUN_0061078c(param_1,1,1);
        local_2c = L"蚋̔";
        FUN_0046599c(*(undefined4 *)(param_1 + 0x314),
                     *(int *)(DAT_006d4540 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
        local_2c = L"股暰茀ਸ輏ᇋ";
        FUN_00466128(*(undefined4 *)(param_1 + 0x314),1);
        if (*(int *)PTR_DAT_0066b080 < 0xb) {
          local_2c = (wchar_t *)(iVar7 + 3);
          local_30 = L"䒡浅謀䑐蚋̔";
          FUN_0061078c(param_1,2,iVar7 + 1);
          local_2c = L"蚋̘";
          FUN_0046599c(*(undefined4 *)(param_1 + 0x318),
                       *(int *)(DAT_006d4544 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
          local_2c = L"䎍倆䮍먄\x03";
          FUN_00466128(*(undefined4 *)(param_1 + 0x318),1);
          local_2c = (wchar_t *)(iVar7 + 6);
          local_30 = L"䢡浅謀䑐蚋̔";
          FUN_0061078c(param_1,3,iVar7 + 4);
          local_2c = L"蚋̜";
          FUN_0046599c(*(undefined4 *)(param_1 + 0x31c),
                       *(int *)(DAT_006d4548 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
          local_2c = L"仩\x11ꄀ난fi­";
          FUN_00466128(*(undefined4 *)(param_1 + 0x31c),1);
        }
      }
      else if (*(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x510) == 4) {
        local_2c = (wchar_t *)0x1;
        local_30 = 
        L"悡浇謀頄䂋荄䛀赐͋厍謁\xe8c6\xf21e\xffff悡浇謀顄謌䑀삃偆䮍贆ѓ욋Ǩ\xfff2ꇿ䝠m䒋ᢘ䂋荄䛀赐ो厍謇\xe8c6\xf1e4\xffff륓\x01"
        ;
        FUN_0061086c(param_1,1,iVar7 + 9);
        local_2c = (wchar_t *)(*(int *)(*(int *)(DAT_006d4760 + iVar7 * 4) + 0x44) + 0x46);
        local_30 = 
        L"悡浇謀顄謌䑀삃偆䮍贆ѓ욋Ǩ\xfff2ꇿ䝠m䒋ᢘ䂋荄䛀赐ो厍謇\xe8c6\xf1e4\xffff륓\x01"
        ;
        FUN_006109ac(param_1,iVar7 + 1,iVar7 + 3);
        local_2c = (wchar_t *)(*(int *)(*(int *)(DAT_006d4760 + 0xc + iVar7 * 4) + 0x44) + 0x46);
        local_30 = L"悡浇謀顄謘䑀삃偆䮍贉ݓ욋\xe4e8\xfff1叿ƹ";
        FUN_006109ac(param_1,iVar7 + 4,iVar7 + 6);
        local_2c = (wchar_t *)(*(int *)(*(int *)(DAT_006d4760 + 0x18 + iVar7 * 4) + 0x44) + 0x46);
        local_30 = L"륓\x01";
        FUN_006109ac(param_1,iVar7 + 7,iVar7 + 9);
        local_30 = L"䂡浅謀䑐蚋̔";
        local_2c = (wchar_t *)iVar7;
        FUN_0061078c(param_1,1,1);
        local_2c = L"蚋̔";
        FUN_0046599c(*(undefined4 *)(param_1 + 0x314),
                     *(int *)(DAT_006d4540 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
        local_2c = L"股暰茀ਸ輏ၿ";
        FUN_00466128(*(undefined4 *)(param_1 + 0x314),1);
        if (*(int *)PTR_DAT_0066b080 < 0xb) {
          local_2c = (wchar_t *)(iVar7 + 3);
          local_30 = L"䒡浅謀䑐蚋̔";
          FUN_0061078c(param_1,2,iVar7 + 1);
          local_2c = L"蚋̘";
          FUN_0046599c(*(undefined4 *)(param_1 + 0x318),
                       *(int *)(DAT_006d4544 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
          local_2c = L"䎍倆䮍먄\x03";
          FUN_00466128(*(undefined4 *)(param_1 + 0x318),1);
          local_2c = (wchar_t *)(iVar7 + 6);
          local_30 = L"䢡浅謀䑐蚋̔";
          FUN_0061078c(param_1,3,iVar7 + 4);
          local_2c = L"蚋̜";
          FUN_0046599c(*(undefined4 *)(param_1 + 0x31c),
                       *(int *)(DAT_006d4548 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
          local_2c = L"䎍倉䮍먇\x04";
          FUN_00466128(*(undefined4 *)(param_1 + 0x31c),1);
          local_2c = (wchar_t *)(iVar7 + 9);
          local_30 = L"䲡浅謀䑐蚋̔";
          FUN_0061078c(param_1,4,iVar7 + 7);
          local_2c = L"蚋̠";
          FUN_0046599c(*(undefined4 *)(param_1 + 800),
                       *(int *)(DAT_006d454c + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
          local_2c = L"웩\x0fꄀ난fi­";
          FUN_00466128(*(undefined4 *)(param_1 + 800),1);
        }
      }
    }
    else if ((*(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) == 8) &&
            (*(int *)PTR_DAT_0066b080 == 10)) {
      if (*(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x510) < 2) {
        local_2c = (wchar_t *)
                   (*(int *)(*(int *)(param_1 + 0x310) + 0x44) +
                    *(int *)(*(int *)(param_1 + 0x310) + 0x4c) +
                    *(int *)(*(int *)(param_1 + 0x310) + 0x4c) + 5);
        local_30 = L"Ū鲡暰椀관";
        FUN_006109ac(param_1,1,
                     *(undefined4 *)
                      (PTR_DAT_0066b40c +
                      *(int *)PTR_DAT_0066b080 * 4 +
                      *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) * 0x50 +
                      -0x54));
        local_2c = (wchar_t *)0x1;
        local_30 = L"鲡暰椀관";
        FUN_0061086c(param_1,1,
                     *(undefined4 *)
                      (PTR_DAT_0066b40c +
                      *(int *)PTR_DAT_0066b080 * 4 +
                      *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) * 0x50 +
                      -0x54));
        local_2c = *(wchar_t **)
                    (PTR_DAT_0066b40c +
                    *(int *)PTR_DAT_0066b080 * 4 +
                    *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) * 0x50 +
                    -0x54);
        local_30 = L"꣩\f謀ႆ\x03謀䑀隋̐";
        FUN_0061078c(param_1,1,1);
      }
      else {
        local_2c = (wchar_t *)0x1;
        local_30 = L"蚋̐";
        FUN_0061086c(param_1,1,3);
        local_2c = (wchar_t *)
                   ((*(int *)(*(int *)(param_1 + 0x310) + 0x44) +
                    *(int *)(*(int *)(param_1 + 0x310) + 0x4c)) * 4);
        local_30 = L"ͪƹ";
        FUN_006109ac(param_1,1,3);
        local_2c = (wchar_t *)0x3;
        local_30 = L"䂡浅謀䑐蚋̔";
        FUN_0061078c(param_1,1,1);
        local_2c = L"蚋̘";
        FUN_0046599c(*(undefined4 *)(param_1 + 0x318),
                     *(int *)(DAT_006d4540 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
        local_2c = L"λ";
        FUN_00466128(*(undefined4 *)(param_1 + 0x318),1);
        iVar6 = 3;
        if (2 < *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x510)) {
          local_2c = (wchar_t *)0x1;
          local_30 = L"悡浇謀ీ䂋荄䛀륐\x06";
          FUN_0061086c(param_1,4,6);
          local_2c = (wchar_t *)(*(int *)(*(int *)(DAT_006d4760 + 0xc) + 0x44) + 0x46);
          local_30 = L"٪ҹ";
          FUN_006109ac(param_1,4,6);
          local_2c = (wchar_t *)0x6;
          local_30 = L"䒡浅謀䑐蚋̘";
          FUN_0061078c(param_1,2,4);
          local_2c = L"蚋̜";
          FUN_0046599c(*(undefined4 *)(param_1 + 0x31c),
                       *(int *)(DAT_006d4544 + 0x44) - *(int *)(*(int *)(param_1 + 0x318) + 0x4c));
          local_2c = L"ڻ";
          FUN_00466128(*(undefined4 *)(param_1 + 0x31c),1);
          iVar6 = 6;
        }
        if (2 < *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x510)) {
          local_2c = (wchar_t *)0x1;
          local_30 = L"悡浇謀ᡀ䂋荄䛀륐\t";
          FUN_0061086c(param_1,7,9);
          local_2c = (wchar_t *)(*(int *)(*(int *)(DAT_006d4760 + 0x18) + 0x44) + 0x46);
          local_30 = L"४޹";
          FUN_006109ac(param_1,7,9);
          local_2c = (wchar_t *)0x9;
          local_30 = L"䢡浅謀䑐蚋̜";
          FUN_0061078c(param_1,3,7);
          local_2c = L"蚋̠";
          FUN_0046599c(*(undefined4 *)(param_1 + 800),
                       *(int *)(DAT_006d4548 + 0x44) - *(int *)(*(int *)(param_1 + 0x31c) + 0x4c));
          local_2c = L"঻";
          FUN_00466128(*(undefined4 *)(param_1 + 800),1);
          iVar6 = 9;
        }
        local_2c = (wchar_t *)
                   (*(int *)(*(int *)(param_1 + 0x310) + 0x44) +
                    *(int *)(*(int *)(param_1 + 0x310) + 0x4c) +
                    *(int *)(*(int *)(param_1 + 0x310) + 0x4c) + 5);
        local_30 = L"Ū䮍贂œ욋苨￭跿Ƀ赐ŋҺ";
        FUN_006109ac(param_1,iVar6 + 1,iVar6 + 2);
        local_2c = (wchar_t *)0x1;
        local_30 = L"䎍倂䮍먁\x04";
        FUN_0061086c(param_1,iVar6 + 1,iVar6 + 2);
        local_2c = (wchar_t *)(iVar6 + 2);
        local_30 = L"軩\r謀ႆ\x03謀䑀隋̐";
        FUN_0061078c(param_1,4,iVar6 + 1);
      }
    }
    else {
      local_2c = (wchar_t *)
                 (*(int *)(*(int *)(param_1 + 0x310) + 0x44) +
                  *(int *)(*(int *)(param_1 + 0x310) + 0x4c) +
                  *(int *)(*(int *)(param_1 + 0x310) + 0x4c) + 5);
      local_30 = L"Ū鲡暰椀관";
      FUN_006109ac(param_1,1,
                   *(undefined4 *)
                    (PTR_DAT_0066b40c +
                    *(int *)PTR_DAT_0066b080 * 4 +
                    *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) * 0x50 +
                    -0x54));
      local_2c = (wchar_t *)0x1;
      local_30 = L"鲡暰椀관";
      FUN_0061086c(param_1,1,
                   *(undefined4 *)
                    (PTR_DAT_0066b40c +
                    *(int *)PTR_DAT_0066b080 * 4 +
                    *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) * 0x50 +
                    -0x54));
      local_2c = *(wchar_t **)
                  (PTR_DAT_0066b40c +
                  *(int *)PTR_DAT_0066b080 * 4 +
                  *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) * 0x50 +
                  -0x54);
      local_30 = L"싩\v謀砝暬茀˸蔏¡";
      FUN_0061078c(param_1,1,1);
    }
  }
  else if (iVar6 == 2) {
    if (*(int *)(PTR_DAT_0066ac78 + 0x110) == 0) {
      local_2c = (wchar_t *)
                 (*(int *)(*(int *)(param_1 + 0x310) + 0x44) +
                  *(int *)(*(int *)(param_1 + 0x310) + 0x4c) + 2);
      local_30 = L"㏫蚋̐";
      FUN_006109ac(param_1,1,*(undefined4 *)PTR_DAT_0066aea4);
    }
    else {
      local_2c = (wchar_t *)
                 (*(int *)(*(int *)(param_1 + 0x310) + 0x44) +
                  *(int *)(*(int *)(param_1 + 0x310) + 0x4c) +
                  *(int *)(*(int *)(param_1 + 0x310) + 0x4c) + 2);
      local_30 = L"Ūඋ꺤fঋƺ";
      FUN_006109ac(param_1,1,*(undefined4 *)PTR_DAT_0066aea4);
    }
    local_2c = (wchar_t *)0x1;
    local_30 = L"꒡暮謀倀ƹ";
    FUN_0061086c(param_1,1,*(undefined4 *)PTR_DAT_0066aea4);
    local_2c = *(wchar_t **)PTR_DAT_0066aea4;
    local_30 = L"ዩ\vꄀ걸f뢃\x88";
    FUN_0061078c(param_1,1,1);
  }
  else if (((*(int *)(PTR_DAT_0066ac78 + 0x88) == 0) || (bVar1)) ||
          (*(int *)(PTR_DAT_0066ac78 + 0x88) == 10)) {
    local_2c = (wchar_t *)
               (*(int *)(*(int *)(param_1 + 0x310) + 0x44) +
                *(int *)(*(int *)(param_1 + 0x310) + 0x4c) +
                *(int *)(*(int *)(param_1 + 0x310) + 0x4c) + 5);
    local_30 = L"Ūඋ꺤fঋƺ";
    FUN_006109ac(param_1,1,*(undefined4 *)PTR_DAT_0066aea4);
    local_2c = (wchar_t *)0x1;
    local_30 = L"꒡暮謀倀ƹ";
    FUN_0061086c(param_1,1,*(undefined4 *)PTR_DAT_0066aea4);
    local_2c = *(wchar_t **)PTR_DAT_0066aea4;
    local_30 = L"诩\nꄀ걸f뢃\x88";
    FUN_0061078c(param_1,1,1);
  }
  else if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 5) || (bVar3)) {
    local_2c = (wchar_t *)
               (*(int *)(*(int *)(param_1 + 0x310) + 0x44) +
                *(int *)(*(int *)(param_1 + 0x310) + 0x4c) +
                *(int *)(*(int *)(param_1 + 0x310) + 0x4c) + 5);
    local_30 = L"Ūʹ";
    FUN_006109ac(param_1,1,2);
    local_2c = (wchar_t *)0x1;
    local_30 = L"Ūƹ";
    FUN_0061086c(param_1,1,2);
    local_2c = (wchar_t *)0x1;
    local_30 = L"悡浇謀р䂋荄僀륐\x02";
    FUN_0061078c(param_1,1,1);
    local_2c = (wchar_t *)(*(int *)(*(int *)(DAT_006d4760 + 4) + 0x44) + 0x50);
    local_30 = L"ɪʹ";
    FUN_006109ac(param_1,2,2);
    local_2c = (wchar_t *)0x2;
    local_30 = L"䂡浅謀䑐蚋̔";
    FUN_0061078c(param_1,2,2);
    local_2c = L"蚋̔";
    FUN_0046599c(*(undefined4 *)(param_1 + 0x314),
                 *(int *)(DAT_006d4540 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
    local_2c = (wchar_t *)0x611ecf;
    FUN_00466128(*(undefined4 *)(param_1 + 0x314),1);
    local_2c = L"<P align=\"center\"><SHAD>";
    local_30 = L"痿棐⥄a䖍뫔\x03";
    FUN_00642c50(0xd9,&local_34);
    local_30 = local_34;
    local_34 = L"</SHAD></P>";
    local_38 = L"喋诔ᒆ\x03\xe800ㆄ\xfff3䒡浅謀䑐蚋̔";
    FUN_00405330(&local_30,3);
    local_38 = L"䒡浅謀䑐蚋̔";
    FUN_00545088(*(undefined4 *)(param_1 + 0x314),local_30);
    local_38 = L"蚋̘";
    FUN_0046599c(*(undefined4 *)(param_1 + 0x318),
                 *(int *)(DAT_006d4544 + 0x44) - *(int *)(*(int *)(param_1 + 0x314) + 0x4c));
    local_38 = L"౨愩贀졕ﶸ\x01\xe800഑\x03痿棈⥄a䖍뫌\x03";
    FUN_00466128(*(undefined4 *)(param_1 + 0x318),1);
    local_38 = L"<P align=\"center\"><SHAD>";
    local_3c = L"痿棈⥄a䖍뫌\x03";
    FUN_00642c50(0x1fd,&local_3c);
    local_40 = L"</SHAD></P>";
    local_44 = 0x611f54;
    FUN_00405330(&local_38,3);
    local_2c = L"⧩\t萀࿒ↄ\t耀\xef7dༀ㺄\x02ꄀ걸f뢃\x88";
    FUN_00545088(*(undefined4 *)(param_1 + 0x318),local_38);
  }
  else if (bVar2) {
    if (bVar4) {
      if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) {
        local_10 = 6;
      }
      else if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 9) {
        local_10 = 8;
      }
      else {
        local_10 = 0x10;
      }
      local_2c = (wchar_t *)0x1;
      local_30 = L"蚋̐";
      FUN_0061086c(param_1,1,local_10);
      local_2c = (wchar_t *)
                 (*(int *)(*(int *)(param_1 + 0x310) + 0x44) +
                  *(int *)(*(int *)(param_1 + 0x310) + 0x4c) +
                 *(int *)(*(int *)(param_1 + 0x310) + 0x4c));
      local_30 = L"碡暬茀袸";
      FUN_006109ac(param_1,1,local_10);
      if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) {
        local_10 = 3;
      }
      else if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 9) {
        local_10 = 4;
      }
      else {
        local_10 = 8;
      }
      if (1 < local_10) {
        iVar6 = local_10 - 1;
        iVar7 = 2;
        do {
          local_2c = (wchar_t *)
                     (*(int *)(*(int *)(DAT_006d4760 + (iVar7 * 2 + -2) * 4) + 0x44) + 0x3c);
          local_30 = L"ｃ\xe84d푵䖋藴绀褠\xe845ƻ";
          FUN_006109ac(param_1,iVar7 * 2 + -1,iVar7 * 2);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (local_10 != 0) {
        iVar6 = 1;
        uVar9 = local_10;
        do {
          local_2c = (wchar_t *)(iVar6 * 2);
          local_30 = L"ｃ\xe84d\xe875䖋藴࿀ʎ\b褀\xe845ƻ";
          FUN_0061078c(param_1,iVar6,iVar6 * 2 + -1);
          iVar6 = iVar6 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (local_10 != 0) {
        iVar6 = 1;
        piVar8 = &DAT_006d4540;
        local_20 = (undefined4 *)PTR_PTR_0066adc4;
        do {
          local_2c = 
          L"䶋跀쑅º愩\xe800⬳￟喋ꇄ䒐m雨\xe152觿\xf045ދ傋譄\xf045倫荌ς䖋\xe8f0㢹￥Ʋ䖋\xe8f0䀻￥碡暬茀袸"
          ;
          FUN_00409dd8(iVar6,&local_44);
          local_2c = 
          L"喋ꇄ䒐m雨\xe152觿\xf045ދ傋譄\xf045倫荌ς䖋\xe8f0㢹￥Ʋ䖋\xe8f0䀻￥碡暬茀袸"
          ;
          FUN_00404bf0(&local_40,"lab_div",local_44);
          local_2c = 
          L"䖉诰謇䑐䖋⯰䱐슃謃\xf045맨\xe538닿謁\xf045㯨\xe540ꇿ걸f뢃\x88";
          iVar7 = FUN_00427360(DAT_006d4490,local_40);
          local_2c = L"Ʋ䖋\xe8f0䀻￥碡暬茀袸";
          FUN_0046599c(iVar7,(*(int *)(*piVar8 + 0x44) - *(int *)(iVar7 + 0x4c)) + 3);
          local_2c = L"碡暬茀袸";
          FUN_00466128(iVar7,1);
          if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 6))
          {
            local_2c = L"<P align=\"center\"><FONT  size=\"9\" face=\"Arial\"><SHAD>";
            local_30 = (wchar_t *)0x61211b;
            FUN_00642c50(0x1dd,&local_4c);
            local_30 = local_4c;
            local_34 = L" ";
            local_38 = (wchar_t *)0x61212d;
            FUN_00409dd8(iVar6,&local_54);
            local_38 = L"痿梴⧘a䖍몼\x05";
            FUN_004051d4(&local_50,local_54);
            local_38 = local_50;
            local_3c = L"</SHAD></FONT></P>";
            local_40 = L"喋讼\xf045ヨ\xf32f\xebff桇⥠a喍뢨ǝ";
            FUN_00405330(&local_48,5);
            local_2c = (wchar_t *)0x612158;
            FUN_00545088(iVar7,local_48);
          }
          else {
            local_2c = L"<P align=\"center\"><FONT  size=\"9\" face=\"Arial\"><SHAD>";
            local_30 = (wchar_t *)0x61216c;
            FUN_00642c50(0x1dd,&local_5c);
            local_30 = local_5c;
            local_34 = L" ";
            local_38 = L"痿梤⧘a䖍몬\x05";
            FUN_004051d4(&local_60,*local_20);
            local_38 = local_60;
            local_3c = L"</SHAD></FONT></P>";
            local_40 = (wchar_t *)0x612196;
            FUN_00405330(&local_58,5);
            local_2c = L"荃\xe445茄Ӈ䷿࿨\xf185\xfffe\xe9ffۙ";
            FUN_00545088(iVar7,local_58);
          }
          iVar6 = iVar6 + 1;
          local_20 = local_20 + 1;
          piVar8 = piVar8 + 1;
          local_10 = local_10 - 1;
        } while (local_10 != 0);
      }
    }
    else {
      local_2c = (wchar_t *)
                 (*(int *)(*(int *)(param_1 + 0x310) + 0x44) +
                  *(int *)(*(int *)(param_1 + 0x310) + 0x4c) +
                  *(int *)(*(int *)(param_1 + 0x310) + 0x4c) + 5);
      local_30 = L"Ūඋ꺤fঋƺ";
      FUN_006109ac(param_1,1,*(undefined4 *)PTR_DAT_0066aea4);
      local_2c = (wchar_t *)0x1;
      local_30 = L"꒡暮謀倀ƹ";
      FUN_0061086c(param_1,1,*(undefined4 *)PTR_DAT_0066aea4);
      local_2c = *(wchar_t **)PTR_DAT_0066aea4;
      local_30 = 
      L"狩\x06㌀觀ﱅ쀳䖉ꇸ뒄f㢃༁ゅ\x03ꄀ䤠m\xe883琄䠉ᩴ瑈䠫㱴㲡浅謀р쎺";
      FUN_0061078c(param_1,1,1);
    }
  }
  puVar5 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = (undefined4 *)&LAB_006128ee;
  local_24 = (undefined1 *)0x6128aa;
  FUN_00405008(&local_60,3,puVar5);
  local_24 = (undefined1 *)0x6128b2;
  FUN_004048d4(&local_54);
  local_24 = (undefined1 *)0x6128bf;
  FUN_00405008(&local_50,3);
  local_24 = (undefined1 *)0x6128cc;
  FUN_004048f8(&local_44,2);
  local_24 = (undefined1 *)0x6128d9;
  FUN_00405008(&local_3c,4);
  local_24 = (undefined1 *)0x6128e6;
  FUN_004048f8(&local_28,2);
  return;
}

