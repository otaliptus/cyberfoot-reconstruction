// Address: 005d8068
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005d8068(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  wchar_t *unaff_ESI;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  wchar_t *local_38;
  undefined *local_34;
  undefined4 local_30;
  wchar_t *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int *local_10;
  int *local_c;
  
  local_20 = &stack0xfffffffc;
  iVar4 = 6;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_24 = &LAB_005d84d4;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  iVar4 = 0xb;
  puVar5 = &DAT_006d342c;
  piVar6 = &DAT_006d3400;
  do {
    local_2c = L"ދ肋Ũ";
    FUN_00545088(*puVar5,0);
    local_2c = L"잃茄ӆ畋ꇛ뙬f㢃ༀ종\x01謀ﱅ肋̌";
    (**(code **)(**(int **)(*piVar6 + 0x168) + 8))(*(int **)(*piVar6 + 0x168),DAT_006d345c);
    piVar6 = piVar6 + 1;
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(int *)PTR_DAT_0066b66c == 0) {
    local_2c = (wchar_t *)0x5d80dc;
    iVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x30c));
    local_2c = 
    L"\xf08bﺃༀ鲌\x03贀똄ҍ讀砕暵謀謒艔㬈ﰕ洳ༀ玅\x01謀砕暵謀謒舔උ걸f鄻À"
    ;
    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b578);
    if (-1 < iVar3) {
      do {
        if (((*(int *)(*(int *)PTR_DAT_0066b578 + 8 + iVar3 * 100) == DAT_006d33fc) &&
            (*(int *)(*(int *)PTR_DAT_0066b578 + iVar3 * 100) == *(int *)(PTR_DAT_0066ac78 + 0xc0)))
           && (iVar4 + 1 == *(int *)(*(int *)PTR_DAT_0066b578 + 4 + iVar3 * 100))) {
          iVar4 = 1;
          puVar5 = &DAT_006d342c;
          local_c = &DAT_006d3400;
          do {
            if (0 < *(int *)(*(int *)PTR_DAT_0066b578 + iVar3 * 100 + 8 + iVar4 * 4)) {
              local_2c = L"<P align=\"center\"><shad>";
              local_30 = *(undefined4 *)
                          (PTR_DAT_0066b660 +
                          *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                                  *(int *)(*(int *)PTR_DAT_0066b578 + iVar3 * 100 + 8 + iVar4 * 4) *
                                  0x130) * 4);
              local_34 = &DAT_005d8520;
              local_38 = 
              L"痿棬蔬]䖍跨똔ᒍ讒砍暵謀贉鄔呫㒚譟瀍暯謀贉턔门\xe2cf\xffff\xe875周嶅贀\xf045޺"
              ;
              FUN_00405194(&stack0xffffffe8,
                           *(int *)PTR_DAT_0066b5b8 +
                           *(int *)(*(int *)PTR_DAT_0066b578 + iVar3 * 100 + 8 + iVar4 * 4) * 0x130)
              ;
              local_38 = unaff_ESI;
              FUN_00405194(&stack0xffffffe4,
                           *(int *)PTR_DAT_0066af70 +
                           *(int *)(*(int *)PTR_DAT_0066b578 + iVar3 * 100 + 0x34 + iVar4 * 4) *
                           0x2f8,*(int *)PTR_DAT_0066af70,L"</shad><BR><shad>");
              FUN_00405330(&stack0xffffffec,7);
              local_2c = 
              L"ҍ趶耄ᖋ땸fኋҍ讂顄贴\xe455燨۠茀\xe47d琀贰똄ҍ讀砕暵謀贒舄䒋㒘喍\xe8e0\xe04e\x06喋诠\xf845\x8b肋Ũ"
              ;
              FUN_00545088(*puVar5,unaff_EBX);
              local_2c = 
              L"綃äぴҍ趶耄ᖋ땸fኋҍ讂顄贴\xe055仨۠謀\xe055䖋诸謀梀\x01\xe800呏￥荃\xf845茄Ӈﮃ༌튅\xfffe\xe9ffȋ"
              ;
              FUN_006462ac(*(undefined4 *)
                            (*(int *)PTR_DAT_0066b578 + iVar3 * 100 + 0x34 + iVar4 * 4),&local_20);
              if (local_20 != (undefined1 *)0x0) {
                local_2c = L"喋诠\xf845\x8b肋Ũ";
                FUN_006462ac(*(undefined4 *)
                              (*(int *)PTR_DAT_0066b578 + iVar3 * 100 + 0x34 + iVar4 * 4),&local_24)
                ;
                local_2c = L"荃\xf845茄Ӈﮃ༌튅\xfffe\xe9ffȋ";
                FUN_0042d6c0(*(undefined4 *)(*local_c + 0x168),local_24);
              }
            }
            iVar4 = iVar4 + 1;
            local_c = local_c + 1;
            puVar5 = puVar5 + 1;
          } while (iVar4 != 0xc);
          break;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
  }
  else {
    local_2c = (wchar_t *)0x5d82a4;
    iVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x308));
    local_2c = (wchar_t *)0x5d82b7;
    FUN_00466128(*(undefined4 *)(param_1 + 0x300),0);
    local_2c = L"\xf08bﺃༀ쒌\x01欀ෆᖋ곘fኋ咋ӂᔻ㏼m蔏Ɵ";
    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066acd8);
    if (-1 < iVar3) {
      do {
        if ((*(int *)(*(int *)PTR_DAT_0066acd8 + 4 + iVar3 * 0x68) == DAT_006d33fc) &&
           (iVar4 + 1 == *(int *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68))) {
          iVar4 = 1;
          piVar6 = &DAT_006d342c;
          local_10 = &DAT_006d3400;
          do {
            if (0 < *(int *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 4 + iVar4 * 4)) {
              local_2c = L"<P align=\"center\"><shad>";
              local_30 = *(undefined4 *)
                          (PTR_DAT_0066b660 +
                          *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                                  *(int *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 4 + iVar4 * 4)
                                  * 0x130) * 4);
              local_34 = &DAT_005d8520;
              local_38 = 
              L"痿棘蔬]䖍比ූඋ곘fঋᒍ毑驔弰උ꽰fঋᒍ\xe8d1췪￢痿棔蕔]䖍뫜\a"
              ;
              FUN_00405194(&local_2c,
                           *(int *)PTR_DAT_0066b5b8 +
                           *(int *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 4 + iVar4 * 4) * 0x130
                          );
              local_38 = local_2c;
              FUN_00405194(&local_30,
                           *(int *)PTR_DAT_0066af70 +
                           *(int *)(*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 0x30 + iVar4 * 4) *
                           0x2f8,*(int *)PTR_DAT_0066af70,L"</shad><BR><shad>");
              FUN_00405330(&local_28,7);
              local_2c = (wchar_t *)0x5d83c9;
              FUN_00545088(*piVar6,local_28);
              local_2c = (wchar_t *)0x5d83e3;
              FUN_006462ac(*(undefined4 *)
                            (*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 0x30 + iVar4 * 4),&local_34);
              if (local_34 != (undefined *)0x0) {
                local_2c = L"喋诌\xf445\x8b肋Ũ";
                FUN_006462ac(*(undefined4 *)
                              (*(int *)PTR_DAT_0066acd8 + iVar3 * 0x68 + 0x30 + iVar4 * 4),&local_38
                            );
                local_2c = (wchar_t *)0x5d8416;
                FUN_0042d6c0(*(undefined4 *)(*local_10 + 0x168),local_38);
              }
              iVar1 = *(int *)PTR_DAT_0066acd8 + iVar3 * 0x68;
              if (*(int *)(*(int *)PTR_DAT_0066acd8 + 0x60 + iVar3 * 0x68) ==
                  *(int *)(iVar1 + 4 + iVar4 * 4)) {
                local_2c = 
                L"ދ傋荀ࣂ䖋诼\x80\x03\xe800픙￨ދ傋荄᧪䖋诼\x80\x03\xe800픧￨荃\xf445茄Ӈﮃ༌薅\xfffe\xebff上ﺃ࿿㲅\xfffe㏿嫀奙襤栐蓛]䖍뫌\x02"
                ;
                FUN_00466128(*(undefined4 *)(param_1 + 0x300),CONCAT31((int3)((uint)iVar1 >> 8),1));
                local_2c = 
                L"ދ傋荄᧪䖋诼\x80\x03\xe800픧￨荃\xf445茄Ӈﮃ༌薅\xfffe\xebff上ﺃ࿿㲅\xfffe㏿嫀奙襤栐蓛]䖍뫌\x02"
                ;
                FUN_00465978(*(undefined4 *)(param_1 + 0x300),*(int *)(*piVar6 + 0x40) + 8);
                local_2c = 
                L"荃\xf445茄Ӈﮃ༌薅\xfffe\xebff上ﺃ࿿㲅\xfffe㏿嫀奙襤栐蓛]䖍뫌\x02"
                ;
                FUN_0046599c(*(undefined4 *)(param_1 + 0x300),*(int *)(*piVar6 + 0x44) + -0x19);
              }
            }
            iVar4 = iVar4 + 1;
            local_10 = local_10 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar4 != 0xc);
          break;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
  }
  puVar2 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005d84db;
  local_24 = (undefined1 *)0x5d84ac;
  FUN_004048f8(&local_38,2,puVar2);
  local_24 = (undefined1 *)0x5d84b9;
  FUN_00405008(&local_30,3);
  local_24 = (undefined1 *)0x5d84c6;
  FUN_004048f8(&local_24,2);
  local_24 = (undefined1 *)0x5d84d3;
  FUN_00405008(&stack0xffffffe4,3);
  return;
}

