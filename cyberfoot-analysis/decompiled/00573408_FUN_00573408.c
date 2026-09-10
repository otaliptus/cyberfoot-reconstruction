// Address: 00573408
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00573408(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4 [68];
  undefined1 local_80 [40];
  undefined4 uStack_58;
  wchar_t *pwStack_54;
  undefined4 uStack_50;
  wchar_t *pwStack_4c;
  wchar_t *pwStack_48;
  undefined4 uStack_44;
  wchar_t *pwStack_40;
  wchar_t *local_3c;
  undefined4 local_38;
  wchar_t *local_34;
  wchar_t *local_30;
  int local_2c;
  wchar_t *local_28;
  int *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int *piVar7;
  undefined4 *puVar8;
  int local_c;
  int local_8;
  
  local_1c = (undefined4 *)&stack0xfffffffc;
  iVar4 = 0x1b;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = (undefined4 *)&LAB_0057393d;
  local_24 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = L"ƻ";
  local_8 = param_1;
  FUN_00404ff0(&local_c);
  iVar4 = 1;
  puVar5 = &DAT_006d1f3c;
  puVar8 = &DAT_006d1f84;
  do {
    if (*(int *)(*(int *)PTR_DAT_0066b154 + *(int *)PTR_DAT_0066b27c * 600 + param_2 * 0x2c + 300 +
                iVar4 * 4) < 1) {
      local_28 = L"䖋说㌀\xe8d2ⲓ￯荃\xf445茄Ӈﮃ甌뮤\a";
      FUN_00466128(*puVar5,0);
      local_28 = L"荃\xf445茄Ӈﮃ甌뮤\a";
      FUN_00466128(*puVar8,0);
    }
    else {
      local_28 = 
      L"䖋说눀\xe801Ⲫ￯ᗫދ툳鿨\xef2c诿\xf445\x8b툳鏨\xef2c䏿䖃Ӵ잃茄೻ꑵ޻";
      FUN_00466128(*puVar5,CONCAT31((int3)((uint)(param_2 * 0xb) >> 8),1));
      local_28 = L"ᗫދ툳鿨\xef2c诿\xf445\x8b툳鏨\xef2c䏿䖃Ӵ잃茄೻ꑵ޻";
      FUN_00466128(*puVar8,1);
    }
    iVar4 = iVar4 + 1;
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 != 0xc);
  iVar4 = 7;
  puVar5 = &DAT_006d1f68;
  puVar8 = &DAT_006d1fb0;
  do {
    local_28 = (wchar_t *)0x5734bc;
    FUN_00466128(*puVar5,0);
    local_28 = (wchar_t *)0x5734c8;
    FUN_00466128(*puVar8,0);
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_28 = 
  L"綃ØṴ喍诔딄⁘m뛨ഭ謀푕⢡洟謀（䱑ᗫ咹圹謀栕曆ꄀἨm雨\xf37d믿\x12";
  FUN_006462ac(*(undefined4 *)(&DAT_006d2058 + param_2 * 4),&local_2c);
  if (local_2c == 0) {
    local_28 = L"ኻ";
    FUN_004ab2b0(DAT_006d1f28,DAT_0066c668,"camisa1");
  }
  else {
    local_28 = L"喋ꇔἨmࢋ凿\xeb4c뤕㥔Wᖋ왨f⢡洟\xe800綖\xfff3ኻ";
    FUN_006462ac(*(undefined4 *)(&DAT_006d2058 + param_2 * 4),&local_30);
    local_28 = L"ᗫ咹圹謀栕曆ꄀἨm雨\xf37d믿\x12";
    (**(code **)(*DAT_006d1f28 + 0x4c))(DAT_006d1f28,local_30);
  }
  iVar4 = 0x12;
  piVar6 = &DAT_006d1f3c;
  piVar7 = &DAT_006d1f84;
  local_1c = &DAT_006d1fcc;
  local_20 = &DAT_006d2014;
  do {
    local_28 = 
    L"䖋诬謀颀\x01㌀诒（ⱑ䖋诨㌀\xe8d2Ⳏ￯䖋诤㌀\xe8d2Ⳃ￯䖃Ӥ䖃Ө䖃Ӭ잃䬄녵ƻ"
    ;
    (**(code **)(**(int **)(*piVar6 + 0x168) + 8))(*(int **)(*piVar6 + 0x168),DAT_006d1f24);
    local_28 = L"䖋诨㌀\xe8d2Ⳏ￯䖋诤㌀\xe8d2Ⳃ￯䖃Ӥ䖃Ө䖃Ӭ잃䬄녵ƻ";
    (**(code **)(**(int **)(*piVar7 + 0x198) + 0x2c))(*(int **)(*piVar7 + 0x198),0);
    local_28 = L"䖋诤㌀\xe8d2Ⳃ￯䖃Ӥ䖃Ө䖃Ӭ잃䬄녵ƻ";
    FUN_00466238(*local_1c,0);
    local_28 = L"䖃Ӥ䖃Ө䖃Ӭ잃䬄녵ƻ";
    FUN_00466238(*local_20,0);
    local_20 = local_20 + 1;
    local_1c = local_1c + 1;
    piVar7 = piVar7 + 1;
    piVar6 = piVar6 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 1;
  do {
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b154 + *(int *)PTR_DAT_0066b27c * 600 + param_2 * 0x2c +
                     300 + iVar4 * 4);
    if (0 < iVar1) {
      local_28 = (wchar_t *)0xffffffff;
      local_2c = -1;
      local_30 = L"荃೻멵ƻ";
      FUN_00572e1c(local_8,iVar4,iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xc);
  iVar4 = 1;
  piVar7 = &DAT_006d1f3c;
  local_24 = &DAT_006d1f84;
  do {
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b154 + *(int *)PTR_DAT_0066b27c * 600 + param_2 * 0x2c +
                     0x24 + iVar4 * 4);
    if (iVar1 < 1) {
      local_28 = L"䖋诜㌀\xe8d2⮞￯ދ肋Ũ";
      (**(code **)(**(int **)(*local_24 + 0x198) + 0x2c))(*(int **)(*local_24 + 0x198),0);
      uVar2 = *(undefined4 *)local_28;
      local_28 = L"ދ肋Ũ";
      FUN_00466238(uVar2,0);
      local_28 = (wchar_t *)0x5736ad;
      (**(code **)(**(int **)(*piVar7 + 0x168) + 8))(*(int **)(*piVar7 + 0x168),DAT_006d1f24);
    }
    else {
      local_28 = *(wchar_t **)
                  (*(int *)PTR_DAT_0066b154 + *(int *)PTR_DAT_0066b27c * 600 + param_2 * 0x2c + 300
                  + iVar4 * 4);
      local_2c = 0x573648;
      FUN_00573028(local_8,iVar4,iVar1);
      if (iVar4 == 0xb) {
        local_2c = 0x573660;
        (**(code **)(**(int **)(*piVar7 + 0x168) + 8))(*(int **)(*piVar7 + 0x168),DAT_006d1f2c);
      }
      else if (iVar4 < 0xb) {
        local_2c = 0x57367a;
        (**(code **)(**(int **)(*piVar7 + 0x168) + 8))(*(int **)(*piVar7 + 0x168),DAT_006d1f28);
      }
    }
    iVar4 = iVar4 + 1;
    local_24 = local_24 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar4 != 0xc);
  local_28 = 
  L"岺圹贀葅\xf8e8\xe8f9毿딄⁘m譟瀕暯謀贒숔䖍놄\xe842嶺￨喍趄䂅\xffff\xe8ff留￨袺圹贀䂅\xffff뇿\xe843曆￨閍｀\xffff䖍\xe8c8ᩭ￩痿￈\xf875遨圹贀책κ"
  ;
  FUN_00573b98(local_8,param_2,&local_c);
  local_28 = 
  L"ѫ墵洠开ᖋ꽰fኋᒍ跂葅䊱ꯨ\xe8f9跿葕薍｀\xffff취\xe8f9뫿㦈W薍｀\xffff䎱诨\xe8f9跿䂕\xffff跿졅淨\xe91a\xffff졵痿棸㦐W䖍뫌\x03"
  ;
  FUN_004030d4(local_80,&DAT_0057395c);
  local_28 = 
  L"喍趄䂅\xffff\xe8ff留￨袺圹贀䂅\xffff뇿\xe843曆￨閍｀\xffff䖍\xe8c8ᩭ￩痿￈\xf875遨圹贀책κ"
  ;
  FUN_004030a4(local_80,*(int *)PTR_DAT_0066af70 + *(int *)(&DAT_006d2058 + param_2 * 4) * 0x2f8,
               0x42);
  local_28 = 
  L"袺圹贀䂅\xffff뇿\xe843曆￨閍｀\xffff䖍\xe8c8ᩭ￩痿￈\xf875遨圹贀책κ";
  FUN_004030d4(local_c4,local_80);
  local_28 = L"閍｀\xffff䖍\xe8c8ᩭ￩痿￈\xf875遨圹贀책κ";
  FUN_004030a4(local_c4,&DAT_00573988,0x43);
  local_28 = L"痿￈\xf875遨圹贀책κ";
  FUN_00405194(&local_3c,local_c4);
  local_28 = local_3c;
  local_2c = local_c;
  local_30 = L"</p></shad>";
  local_34 = 
  L"喋跌큅⋨\xe914诿큕䖋诼䲀\x03謀颀\x01謀（ⱑ䖋诼傀\x03눀\xe801⦷￯䖋诼咀\x03눀\xe801⦧￯䖋诼墀\x03눀\xe801⦗￯걨圹ꄀ뉼fk譋吕暱謀贒숄蒋㢰\x02謀㐕暵＀舴쁨圹贀㢅\xffff뫿\x03"
  ;
  FUN_00405330(&local_38,3);
  local_34 = L"喋诐ﱅ肋͌";
  FUN_00404b6c(&local_34,local_38);
  pwVar3 = local_34;
  piVar7 = *(int **)(*(int *)(local_8 + 0x34c) + 0x198);
  local_34 = 
  L"䖋诼傀\x03눀\xe801⦷￯䖋诼咀\x03눀\xe801⦧￯䖋诼墀\x03눀\xe801⦗￯걨圹ꄀ뉼fk譋吕暱謀贒숄蒋㢰\x02謀㐕暵＀舴쁨圹贀㢅\xffff뫿\x03"
  ;
  (**(code **)(*piVar7 + 0x2c))(piVar7,pwVar3);
  local_34 = 
  L"䖋诼咀\x03눀\xe801⦧￯䖋诼墀\x03눀\xe801⦗￯걨圹ꄀ뉼fk譋吕暱謀贒숄蒋㢰\x02謀㐕暵＀舴쁨圹贀㢅\xffff뫿\x03"
  ;
  FUN_00466128(*(undefined4 *)(local_8 + 0x350),1);
  local_34 = 
  L"䖋诼墀\x03눀\xe801⦗￯걨圹ꄀ뉼fk譋吕暱謀贒숄蒋㢰\x02謀㐕暵＀舴쁨圹贀㢅\xffff뫿\x03"
  ;
  FUN_00466128(*(undefined4 *)(local_8 + 0x354),1);
  local_34 = L"걨圹ꄀ뉼fk譋吕暱謀贒숄蒋㢰\x02謀㐕暵＀舴쁨圹贀㢅\xffff뫿\x03";
  FUN_00466128(*(undefined4 *)(local_8 + 0x358),1);
  local_34 = L"<shad>";
  local_38 = *(undefined4 *)
              (PTR_DAT_0066b534 +
              *(int *)(*(int *)PTR_DAT_0066b154 + *(int *)PTR_DAT_0066b27c * 600 + 0x238 +
                      param_2 * 4) * 4);
  local_3c = L"</shad>";
  pwStack_40 = L"開Ｘ\xffff薍＼\xffff跨\xe913诿㲕\xffff诿ﱅ肋͐";
  FUN_00405330(&local_cc,3);
  pwStack_40 = 
  L"開＼\xffff䖋诼傀\x03謀颀\x01謀（ⱑ걨圹ꄀ뉼fk譋吕暱謀贒숄蒋䢰\x02謀㐕暵＀艴栘㧀W薍Ｐ\xffffκ"
  ;
  FUN_00404b6c(&local_c8,local_cc);
  piVar7 = *(int **)(*(int *)(local_8 + 0x350) + 0x198);
  pwStack_40 = L"걨圹ꄀ뉼fk譋吕暱謀贒숄蒋䢰\x02謀㐕暵＀艴栘㧀W薍Ｐ\xffffκ";
  (**(code **)(*piVar7 + 0x2c))(piVar7,local_c8);
  pwStack_40 = L"<shad>";
  uStack_44 = *(undefined4 *)
               (PTR_DAT_0066b534 +
               *(int *)(*(int *)PTR_DAT_0066b154 + *(int *)PTR_DAT_0066b27c * 600 + 0x248 +
                       param_2 * 4) * 4 + 0x18);
  pwStack_48 = L"</shad>";
  pwStack_4c = L"開Ｐ\xffff薍Ｔ\xffffⓨ\xe913诿㒕\xffff诿ﱅ肋͔";
  FUN_00405330(&local_d4,3);
  pwStack_4c = 
  L"開Ｔ\xffff䖋诼咀\x03謀颀\x01謀（ⱑ걨圹ꄀ뉼fk譋吕暱謀贒숄蒋䂰\x02謀㐕暵＀艴栌㧀W薍Ｈ\xffffκ"
  ;
  FUN_00404b6c(&local_d0,local_d4);
  piVar7 = *(int **)(*(int *)(local_8 + 0x354) + 0x198);
  pwStack_4c = L"걨圹ꄀ뉼fk譋吕暱謀贒숄蒋䂰\x02謀㐕暵＀艴栌㧀W薍Ｈ\xffffκ";
  (**(code **)(*piVar7 + 0x2c))(piVar7,local_d0);
  pwStack_4c = L"<shad>";
  uStack_50 = *(undefined4 *)
               (PTR_DAT_0066b534 +
               *(int *)(*(int *)PTR_DAT_0066b154 + *(int *)PTR_DAT_0066b27c * 600 + 0x240 +
                       param_2 * 4) * 4 + 0xc);
  pwStack_54 = L"</shad>";
  uStack_58 = 0x5738a0;
  FUN_00405330(&local_dc,3);
  uStack_58 = 0x5738b1;
  FUN_00404b6c(&local_d8,local_dc);
  piVar7 = *(int **)(*(int *)(local_8 + 0x358) + 0x198);
  uStack_58 = 0x5738cb;
  (**(code **)(*piVar7 + 0x2c))(piVar7,local_d8);
  pwVar3 = pwStack_4c;
  *in_FS_OFFSET = pwStack_54;
  pwStack_4c = L"幟譛工Ã\xffff\xffff\a";
  uStack_50 = 0x5738e3;
  FUN_00404ff0(&local_dc,pwStack_54,pwVar3);
  uStack_50 = 0x5738ee;
  FUN_004048d4(&local_d8);
  uStack_50 = 0x5738f9;
  FUN_00404ff0(&local_d4);
  uStack_50 = 0x573904;
  FUN_004048d4(&local_d0);
  uStack_50 = 0x57390f;
  FUN_00404ff0(&local_cc);
  uStack_50 = 0x57391a;
  FUN_004048d4(&local_c8);
  uStack_50 = 0x573927;
  FUN_00405008(&local_3c,2);
  uStack_50 = 0x573934;
  FUN_004048f8(&local_34,3);
  uStack_50 = 0x57393c;
  FUN_00404ff0(&local_c);
  return;
}

