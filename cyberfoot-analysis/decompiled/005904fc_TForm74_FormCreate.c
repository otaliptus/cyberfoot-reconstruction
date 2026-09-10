// Address: 005904fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm74_FormCreate(int param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *unaff_EBX;
  char cVar4;
  int unaff_ESI;
  wchar_t *unaff_EDI;
  int *in_FS_OFFSET;
  wchar_t *local_5c;
  wchar_t *local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  wchar_t *local_44;
  undefined4 local_40;
  wchar_t *local_3c;
  wchar_t *local_38;
  wchar_t *local_34;
  wchar_t *local_30;
  wchar_t *local_2c;
  wchar_t *local_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  wchar_t *local_c;
  wchar_t *local_8;
  
  puStack_1c = &stack0xfffffffc;
  iVar3 = 0xb;
  do {
    local_8 = (wchar_t *)0x0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puStack_20 = &LAB_00590c04;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  local_28 = L"<p align=\"left\"><shad>";
  local_2c = L"痿检ౌY䖍뫄\x03";
  FUN_00642c50(0x132,&local_44);
  local_2c = local_44;
  local_30 = L"</shad></p>";
  local_34 = L"喋评钃\x03\xe800䬵\xfffb喍뢼˂";
  FUN_00405330(&local_40,3);
  local_34 = L"喍뢼˂";
  FUN_00545088(*(undefined4 *)(param_1 + 0x394),local_40);
  local_34 = 
  L"喋讼碃\x03\xe800຦\xfff5喍ꆸ띐f\x8b诨୏茀롽琀责둕傡暷謀\xe800佶\v喋讴\xf883\x02謀梀\x01\xe800턚￩䖍记倕暷欀弒උ꽰fঋᒍ\xe8d1䯒￧喋记ﲃ\x02\xe800ไ\xfff5䖍\xe8c8ﰠ\xffff傡暷欀弰炡暯謀謀\xf084ȼ"
  ;
  FUN_00642c50(0x2c2,&local_48);
  local_34 = 
  L"喍ꆸ띐f\x8b诨୏茀롽琀责둕傡暷謀\xe800佶\v喋讴\xf883\x02謀梀\x01\xe800턚￩䖍记倕暷欀弒උ꽰fঋᒍ\xe8d1䯒￧喋记ﲃ\x02\xe800ไ\xfff5䖍\xe8c8ﰠ\xffff傡暷欀弰炡暯謀謀\xf084ȼ"
  ;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x378),local_48);
  local_34 = L"綃¸⍴喍ꆴ띐f\x8b盨୏謀둕莋˸";
  FUN_00645508(*(undefined4 *)PTR_DAT_0066b750,&local_4c);
  if (local_4c != 0) {
    local_34 = 
    L"喋讴\xf883\x02謀梀\x01\xe800턚￩䖍记倕暷欀弒උ꽰fঋᒍ\xe8d1䯒￧喋记ﲃ\x02\xe800ไ\xfff5䖍\xe8c8ﰠ\xffff傡暷欀弰炡暯謀謀\xf084ȼ"
    ;
    FUN_00645508(*(undefined4 *)PTR_DAT_0066b750,&local_50);
    local_34 = 
    L"䖍记倕暷欀弒උ꽰fঋᒍ\xe8d1䯒￧喋记ﲃ\x02\xe800ไ\xfff5䖍\xe8c8ﰠ\xffff傡暷欀弰炡暯謀謀\xf084ȼ"
    ;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x2f8) + 0x168),local_50);
  }
  local_34 = L"喋记ﲃ\x02\xe800ไ\xfff5䖍\xe8c8ﰠ\xffff傡暷欀弰炡暯謀謀\xf084ȼ";
  FUN_00405194(&local_54,*(int *)PTR_DAT_0066af70 + *(int *)PTR_DAT_0066b750 * 0x2f8);
  local_34 = L"䖍\xe8c8ﰠ\xffff傡暷欀弰炡暯謀謀\xf084ȼ";
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_54);
  local_34 = L"傡暷欀弰炡暯謀謀\xf084ȼ";
  FUN_005901f8(&local_3c);
  local_34 = L"삅ㅵ喍룼Ü";
  iVar3 = FUN_0064f2d0(*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b750 * 0x2f8));
  if (iVar3 == 0) {
    local_34 = L"喍룸Ý";
    FUN_00642c50(0xdc,&local_8);
    local_34 = L"喍룴ϥ";
    FUN_00642c50(0xdd,&local_c);
    local_34 = L"쀳䖉\xe9f0º";
    FUN_00642c50(0x3e5,&stack0xfffffff0);
    unaff_ESI = 0;
  }
  else {
    local_34 = (wchar_t *)0x590654;
    iVar3 = FUN_0064f2d0(*(undefined4 *)
                          (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b750 * 0x2f8));
    if (iVar3 == 1) {
      local_34 = L"喍룸ß";
      FUN_00642c50(0xde,&local_8);
      local_34 = L"喍룴Ϥ";
      FUN_00642c50(0xdf,&local_c);
      local_34 = L"䗇ǰ";
      FUN_00642c50(0x3e4,&stack0xfffffff0);
      unaff_ESI = 1;
    }
    else {
      local_34 = L"\xf883甂贚ﱅᖋ돸f劋\xe808䦚￧䗇˰";
      iVar3 = FUN_0064f2d0(*(undefined4 *)
                            (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b750 * 0x2f8));
      if (iVar3 == 2) {
        local_34 = L"䗇˰";
        thunk_FUN_0040502c(&local_8,*(undefined4 *)(PTR_DAT_0066b3f8 + 8));
        unaff_ESI = 2;
      }
      else {
        local_34 = L"\xf883甃贘ﱅᖋ돸f劋\xe80c䥢￧䗇ϰ";
        iVar3 = FUN_0064f2d0(*(undefined4 *)
                              (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b750 * 0x2f8));
        if (iVar3 == 3) {
          local_34 = L"䗇ϰ";
          thunk_FUN_0040502c(&local_8,*(undefined4 *)(PTR_DAT_0066b3f8 + 0xc));
          unaff_ESI = 3;
        }
      }
    }
  }
  pwVar2 = local_2c;
  if (((((int)local_3c < 1) && ((int)local_38 < 1)) && ((int)local_34 < 1)) &&
     ((((int)local_30 < 1 && ((int)local_2c < 1)) && ((int)local_28 < 1)))) {
    local_34 = L"쀳奚摙ႉ୨夌贀ꡅκ";
    FUN_00466128(*(undefined4 *)(param_1 + 0x378),1);
  }
  else {
    iVar3 = 0x16;
    if (0 < (int)local_2c) {
      local_34 = local_2c;
      local_38 = *(wchar_t **)(param_1 + 0x338);
      local_3c = L"䖋催쾋횋쎋훨\xfffb诿㢃\x03謀䡀삃̌诸푅삅踏¶";
      FUN_00642c50(0xe0,&local_58);
      local_3c = local_58;
      local_40 = 0x590752;
      FUN_00590328(param_1,1,0x16);
      iVar3 = *(int *)(*(int *)(param_1 + 0x338) + 0x48) + 0x22;
    }
    cVar4 = 0 < (int)pwVar2;
    if (0 < (int)local_30) {
      cVar4 = cVar4 + '\x01';
      if (unaff_ESI == 1) {
        local_34 = local_30;
        local_38 = *(wchar_t **)(param_1 + 0x308);
        local_30 = local_8;
        local_40 = 0x590789;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x308) + 0x48) + 0x11;
      }
      else if (unaff_ESI == 0) {
        local_34 = local_30;
        local_38 = *(wchar_t **)(param_1 + 0x328);
        local_30 = local_8;
        local_40 = 0x5907b9;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x328) + 0x48) + 0xf;
      }
      else if (unaff_ESI == 2) {
        local_34 = local_30;
        local_38 = *(wchar_t **)(param_1 + 0x388);
        local_30 = local_8;
        local_40 = 0x5907e6;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x328) + 0x48) + 0xf;
      }
      else if (unaff_ESI == 3) {
        local_34 = local_30;
        local_38 = *(wchar_t **)(param_1 + 900);
        local_30 = local_8;
        local_40 = 0x590813;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x328) + 0x48) + 0xf;
      }
    }
    if (0 < (int)local_28) {
      cVar4 = cVar4 + '\x01';
      if (unaff_ESI == 1) {
        local_34 = local_28;
        local_38 = *(wchar_t **)(param_1 + 0x324);
        local_30 = local_c;
        local_40 = 0x590847;
        FUN_00590328(param_1,cVar4,iVar3 + 5);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x324) + 0x48) + 0xf;
      }
      else {
        local_34 = local_28;
        local_38 = *(wchar_t **)(param_1 + 0x330);
        local_30 = local_c;
        local_40 = 0x59086e;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x330) + 0x48) + 0xf;
      }
    }
    if (0 < (int)unaff_EDI) {
      cVar4 = cVar4 + '\x01';
      local_34 = unaff_EDI;
      local_30 = unaff_EBX;
      if (unaff_ESI == 1) {
        local_38 = *(wchar_t **)(param_1 + 0x37c);
        local_40 = 0x5908a2;
        FUN_00590328(param_1,cVar4,iVar3 + 5);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x37c) + 0x48) + 0xf;
      }
      else {
        local_38 = *(wchar_t **)(param_1 + 0x380);
        local_40 = 0x5908c9;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x380) + 0x48) + 0xf;
      }
    }
    if (0 < (int)local_3c) {
      cVar4 = cVar4 + '\x01';
      local_34 = 
      L"傡暷欀开ᖋ꽰fኋ䒋㳂\xf883甝謭졅譐㲃\x03倀䖋僼쾋횋쎋\xf7e8\xfff9诿㲃\x03謀䡀삃̏\xe9f8Ü"
      ;
      FUN_00645c68(*(undefined4 *)
                    (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b750 * 0x2f8),&local_8);
      iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b750 * 0x2f8);
      if (iVar1 == 0x1d) {
        local_34 = local_3c;
        local_38 = *(wchar_t **)(param_1 + 0x33c);
        local_30 = local_8;
        local_40 = 0x590931;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x33c) + 0x48) + 0xf;
      }
      else if (iVar1 == 0x61) {
        local_34 = local_3c;
        local_38 = *(wchar_t **)(param_1 + 0x340);
        local_30 = local_8;
        local_40 = 0x59096f;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x340) + 0x48) + 0xf;
      }
      else if (iVar1 == 0x68) {
        local_34 = local_3c;
        local_38 = *(wchar_t **)(param_1 + 0x344);
        local_30 = local_8;
        local_40 = 0x5909ad;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x344) + 0x48) + 0xf;
      }
      else if (iVar1 == 0x41) {
        local_34 = local_3c;
        local_38 = *(wchar_t **)(param_1 + 0x348);
        local_30 = local_8;
        local_40 = 0x5909e8;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x348) + 0x48) + 0xf;
      }
      else {
        local_34 = local_3c;
        local_38 = *(wchar_t **)(param_1 + 0x32c);
        local_30 = local_8;
        local_40 = 0x590a12;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x32c) + 0x48) + 0xf;
      }
    }
    if (0 < (int)local_38) {
      cVar4 = cVar4 + '\x01';
      local_34 = 
      L"傡暷欀开ᖋ꽰fኋ䒋㳂\xf883甝謰책譐ᒃ\x03倀䖋僼쾋\xe983謅诖\xe8c3\xf8ab\xffff莋̔"
      ;
      FUN_006458c8(*(undefined4 *)
                    (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b750 * 0x2f8),&local_8);
      iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b750 * 0x2f8);
      if (iVar1 == 0x1d) {
        local_34 = local_38;
        local_38 = *(wchar_t **)(param_1 + 0x314);
        local_30 = local_8;
        local_40 = 0x590a7d;
        FUN_00590328(param_1,cVar4,iVar3 + -5);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x314) + 0x48) + 0xf;
      }
      else if (iVar1 == 0x61) {
        local_34 = local_38;
        local_38 = *(wchar_t **)(param_1 + 800);
        local_30 = local_8;
        local_40 = 0x590abb;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 800) + 0x48) + 0xf;
      }
      else if (iVar1 == 0x68) {
        local_34 = local_38;
        local_38 = *(wchar_t **)(param_1 + 0x31c);
        local_30 = local_8;
        local_40 = 0x590af9;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x31c) + 0x48) + 0xf;
      }
      else if (iVar1 == 0x41) {
        local_34 = local_38;
        local_38 = *(wchar_t **)(param_1 + 0x318);
        local_30 = local_8;
        local_40 = 0x590b34;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x318) + 0x48) + 0xf;
      }
      else {
        local_34 = local_38;
        local_38 = *(wchar_t **)(param_1 + 0x334);
        local_30 = local_8;
        local_40 = 0x590b5e;
        FUN_00590328(param_1,cVar4,iVar3);
        iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x334) + 0x48) + 0xf;
      }
    }
    if (0 < (int)local_34) {
      local_38 = *(wchar_t **)(param_1 + 0x374);
      local_3c = 
      L"䖋储쾋횋쎋痨\xfff7\xebff눍謁碃\x03\xe800啦￭쀳奚摙ႉ୨夌贀ꡅκ";
      FUN_004051d4(&local_5c,
                   *(undefined4 *)
                    (PTR_PTR_0066b288 +
                    *(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + *(int *)PTR_DAT_0066b750 * 0x2f8) * 4
                    ));
      local_30 = local_5c;
      local_40 = 0x590bb3;
      FUN_00590328(param_1,cVar4 + '\x01',iVar3);
    }
  }
  pwVar2 = local_28;
  *in_FS_OFFSET = (int)local_30;
  local_28 = L"幟譛工ÃⰀ";
  local_2c = L"䖍몴\x02";
  FUN_00405008(&local_5c,3,pwVar2);
  local_2c = L"䖍몼\x03";
  FUN_004048f8(&local_50,2);
  local_2c = L"䖍뫴\x03";
  FUN_00405008(&local_48,3);
  local_2c = L"\xe9c3㘏￧쓫幟譛工ÃⰀ";
  FUN_00405008(&stack0xfffffff0,3);
  return;
}

