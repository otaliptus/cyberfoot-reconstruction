// Address: 005fef00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm34_bt1Click(int param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [24];
  undefined4 local_38;
  undefined4 local_34;
  wchar_t *local_30;
  undefined4 uStack_2c;
  wchar_t *pwStack_28;
  undefined1 *puStack_24;
  undefined4 local_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  iVar5 = 0xe;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puStack_1c = &LAB_005ff211;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  puStack_24 = (undefined1 *)0x5fef29;
  FUN_00404ff0(&local_8);
  puStack_24 = (undefined1 *)0x5fef37;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x31c) + 0x134))();
  if (iVar5 != 0) {
    puStack_24 = &stack0xfffffff0;
    piVar1 = *(int **)(param_1 + 0x31c);
    pwStack_28 = 
    L"킋䖍뇤\xe8fc狥￡䖍僤䖍뫔\xf228_ࣨ\xe175跿푕욋\xe859\xf4cd\xfff0喋跴\xf845\xe6e8\xe05b诿\xf845櫨\xe0b0诿정暴褀눂謁ಃ\x03\xe800熅￦ָ"
    ;
    uVar4 = (**(code **)(*piVar1 + 0x138))();
    pwStack_28 = 
    L"䖍僤䖍뫔\xf228_ࣨ\xe175跿푕욋\xe859\xf4cd\xfff0喋跴\xf845\xe6e8\xe05b诿\xf845櫨\xe0b0诿정暴褀눂謁ಃ\x03\xe800熅￦ָ"
    ;
    FUN_00416244(&local_20,uVar4,0xfc);
    pwStack_28 = (wchar_t *)&local_20;
    uStack_2c = 0x5fef70;
    FUN_00416478(&local_30,&DAT_005ff228);
    pwVar2 = pwStack_28;
    pwStack_28 = 
    L"喋跴\xf845\xe6e8\xe05b诿\xf845櫨\xe0b0诿정暴褀눂謁ಃ\x03\xe800熅￦ָ";
    FUN_0050e448(piVar1,&local_30,pwVar2);
    pwStack_28 = L"䖋\xe8f8끪￠ᖋ듈fʉƲ莋̌";
    FUN_00404b6c(&local_c,unaff_EBX);
    pwStack_28 = L"ᖋ듈fʉƲ莋̌";
    uVar4 = FUN_00409ff8(local_c);
    *(undefined4 *)PTR_DAT_0066b4c8 = uVar4;
    pwStack_28 = L"ָ";
    FUN_00466128(*(undefined4 *)(param_1 + 0x30c),1);
    pwStack_28 = L"\xf883༄욇\x01＀蔤\xefbd_\xefd1_\xf028_\xf07f_\xf0d6_\xf12a_喍룐Ǎ";
    uVar4 = FUN_004032c8(5);
    switch(uVar4) {
    case 0:
      pwStack_28 = 
      L"䖋僐좡暴欀☀ᖋ떸fኋᒍ跂둅ퟨ\xe040뫿\xf22c_䖍놴\xe815䂘￠喍趴책編\xe061诿챕䖍姼ꧨ\xe062\xe9ffŔ"
      ;
      FUN_00642c50(0x1cd,&local_34);
      pwStack_28 = (wchar_t *)local_34;
      uStack_2c = 0x5feffd;
      FUN_004030d4(local_50,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066b4c8 * 0x130);
      uStack_2c = 0x5ff00c;
      FUN_004030a4(local_50,&DAT_005ff22c,0x15);
      uStack_2c = 0x5ff017;
      FUN_00405194(&local_38,local_50);
      pwVar2 = pwStack_28;
      pwStack_28 = 
      L"哩\x01贀끕춸\x01\xe800㰛\x04䖋傰좡暴欀☀ᖋ떸fኋᒍ跂둅胨\xe040뫿\xf22c_䖍놴\xe815䁁￠喍趴걅⛨\xe061诿걕䖍姼勨\xe062\xe9ffý"
      ;
      FUN_004052cc(&local_8,local_38,pwVar2);
      break;
    case 1:
      pwStack_28 = 
      L"䖋傰좡暴欀☀ᖋ떸fኋᒍ跂둅胨\xe040뫿\xf22c_䖍놴\xe815䁁￠喍趴걅⛨\xe061诿걕䖍姼勨\xe062\xe9ffý"
      ;
      FUN_00642c50(0x1cd,&local_54);
      pwStack_28 = (wchar_t *)local_54;
      uStack_2c = 0x5ff054;
      FUN_004030d4(local_50,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066b4c8 * 0x130);
      uStack_2c = 0x5ff063;
      FUN_004030a4(local_50,&DAT_005ff22c,0x15);
      uStack_2c = 0x5ff06e;
      FUN_00405194(&local_58,local_50);
      pwVar2 = pwStack_28;
      pwStack_28 = L"﷩";
      FUN_004052cc(&local_8,local_58,pwVar2);
      break;
    case 2:
      pwStack_28 = 
      L"䖋储좡暴欀☀ᖋ떸fኋᒍ跂둅⧨\xe040뫿\xf22c_䖍놴\xe815㿪￠喍趴ꑅ쿨\xe060诿ꑕ䖍姼ﯨ\xe061\xe9ff¦"
      ;
      FUN_00642c50(0x1ce,&local_5c);
      pwStack_28 = (wchar_t *)local_5c;
      uStack_2c = 0x5ff0ab;
      FUN_004030d4(local_50,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066b4c8 * 0x130);
      uStack_2c = 0x5ff0ba;
      FUN_004030a4(local_50,&DAT_005ff22c,0x15);
      uStack_2c = 0x5ff0c5;
      FUN_00405194(&local_60,local_50);
      pwVar2 = pwStack_28;
      pwStack_28 = L"ꛩ";
      FUN_004052cc(&local_8,local_60,pwVar2);
      break;
    case 3:
      pwStack_28 = 
      L"䖋傠좡暴欀☀ᖋ떸fኋᒍ跂둅틨\xe03f뫿\xf22c_䖍놴\xe815㾓￠喍趴鱅磨\xe060诿鱕䖍姼ꓨ\xe061\xebff赒顕춸\x01\xe800㬙\x04䖋傘좡暴欀☀ᖋ떸fኋᒍ跂둅绨\xe03f뫿\xf22c_䖍놴\xe815㼿￠喍趴鑅ⓨ\xe060诿鑕䖍姼僨\xe061棿\xf234_痿棼\xf29c_䖍몐\x03"
      ;
      FUN_00642c50(0x1ce,&local_64);
      pwStack_28 = (wchar_t *)local_64;
      uStack_2c = 0x5ff102;
      FUN_004030d4(local_50,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066b4c8 * 0x130);
      uStack_2c = 0x5ff111;
      FUN_004030a4(local_50,&DAT_005ff22c,0x15);
      uStack_2c = 0x5ff11c;
      FUN_00405194(&local_68,local_50);
      pwVar2 = pwStack_28;
      pwStack_28 = L"勫喍뢘Ǎ";
      FUN_004052cc(&local_8,local_68,pwVar2);
      break;
    case 4:
      pwStack_28 = 
      L"䖋傘좡暴欀☀ᖋ떸fኋᒍ跂둅绨\xe03f뫿\xf22c_䖍놴\xe815㼿￠喍趴鑅ⓨ\xe060诿鑕䖍姼僨\xe061棿\xf234_痿棼\xf29c_䖍몐\x03"
      ;
      FUN_00642c50(0x1cd,&local_6c);
      pwStack_28 = (wchar_t *)local_6c;
      uStack_2c = 0x5ff156;
      FUN_004030d4(local_50,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066b4c8 * 0x130);
      uStack_2c = 0x5ff165;
      FUN_004030a4(local_50,&DAT_005ff22c,0x15);
      uStack_2c = 0x5ff170;
      FUN_00405194(&local_70,local_50);
      pwVar2 = pwStack_28;
      pwStack_28 = L"㑨忲＀ﱵ鱨忲贀遅κ";
      FUN_004052cc(&local_8,local_70,pwVar2);
    }
    pwStack_28 = L"<SHAD><B><FONT color=\"#FFFFFF\"><P align=\"center\">";
    uStack_2c = local_8;
    local_30 = L"</P></FONT></B></SHAD>";
    local_34 = 0x5ff196;
    FUN_00405330(&local_74,3);
    puStack_24 = (undefined1 *)0x5ff1a4;
    FUN_00545088(*(undefined4 *)(param_1 + 0x30c),local_74);
    puStack_24 = (undefined1 *)0x5ff1b1;
    FUN_0043b234(*(undefined4 *)(param_1 + 0x2f8),1);
    puStack_24 = (undefined1 *)0x5ff1be;
    FUN_00466128(*(undefined4 *)(param_1 + 0x318),0);
  }
  puVar3 = puStack_18;
  *in_FS_OFFSET = local_20;
  puStack_18 = &LAB_005ff218;
  puStack_1c = (undefined1 *)0x5ff1d8;
  FUN_00405008(&local_74,9,puVar3);
  puStack_1c = (undefined1 *)0x5ff1e5;
  FUN_00405008(&local_38,2);
  puStack_1c = (undefined1 *)0x5ff1f8;
  FUN_00405744(&local_30,PTR_DAT_004010f8,2);
  puStack_1c = (undefined1 *)0x5ff200;
  FUN_00404ff0(&stack0xfffffff0);
  puStack_1c = (undefined1 *)0x5ff208;
  FUN_004048d4(&local_c);
  puStack_1c = (undefined1 *)0x5ff210;
  FUN_00404ff0(&local_8);
  return;
}

