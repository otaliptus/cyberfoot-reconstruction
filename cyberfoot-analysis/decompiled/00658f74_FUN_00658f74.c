// Address: 00658f74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00658f74(undefined4 param_1,undefined *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  wchar_t **ppwVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *unaff_EBX;
  wchar_t *pwVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  undefined4 local_b8;
  wchar_t *local_b4;
  undefined4 local_b0;
  undefined *local_ac;
  undefined4 local_a8;
  wchar_t *local_a4;
  undefined4 local_a0;
  wchar_t *local_9c;
  wchar_t *local_98;
  undefined1 *local_94;
  undefined4 local_90;
  wchar_t *local_8c;
  wchar_t *local_88;
  wchar_t *local_84;
  wchar_t *local_80;
  undefined *local_7c;
  wchar_t *local_78;
  wchar_t *local_74;
  wchar_t *local_70;
  wchar_t *local_6c;
  wchar_t *local_68;
  wchar_t *local_64;
  undefined *local_60;
  wchar_t *local_5c;
  wchar_t *local_58;
  wchar_t *local_54;
  wchar_t *local_50;
  wchar_t *local_4c;
  wchar_t *local_48 [4];
  wchar_t *local_38;
  wchar_t *local_34;
  wchar_t *local_30;
  undefined *local_2c;
  undefined4 local_28;
  wchar_t *local_24;
  undefined1 *local_20;
  wchar_t *local_10;
  int local_c;
  undefined4 local_8;
  
  bVar10 = 0;
  iVar5 = 0x16;
  do {
    local_c = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  UNLOCK();
  local_8 = 0;
  local_20 = (undefined1 *)0x658f9f;
  FUN_00405628(&local_54,PTR_DAT_00488aa0);
  local_24 = (wchar_t *)&DAT_00659510;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (undefined *)0x658fb5;
  local_20 = &stack0xfffffffc;
  FUN_00404ff0(&stack0xffffffe4);
  local_2c = (undefined *)0x658fbd;
  FUN_00404ff0(&local_20);
  local_2c = (undefined *)0x658fc5;
  FUN_00404ff0(&local_24);
  iVar5 = 5;
  ppwVar3 = local_48;
  local_30 = (wchar_t *)param_2;
  do {
    *ppwVar3 = (wchar_t *)0x0;
    ppwVar3 = ppwVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined4 *)PTR_DAT_0066b394 = param_1;
  local_2c = (undefined *)0x658fed;
  iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b474);
  if (-1 < iVar5) {
    do {
      puVar2 = local_2c;
      if (*(int *)(*(int *)PTR_DAT_0066b474 + iVar5 * 0x20) == *(int *)PTR_DAT_0066b394) {
        local_2c = (undefined *)0x659015;
        iVar4 = FUN_00405eec(puVar2);
        local_2c = (undefined *)(iVar4 + 1);
        local_30 = (wchar_t *)0x65902a;
        FUN_004060a8(&local_2c,PTR_DAT_00658f54,1);
        puVar2 = local_2c;
        local_2c = (undefined *)0x659035;
        iVar4 = FUN_00405ef4(puVar2);
        puVar8 = (undefined4 *)(*(int *)PTR_DAT_0066b474 + iVar5 * 0x20);
        puVar9 = (undefined4 *)(local_2c + iVar4 * 0x20);
        for (iVar6 = 8; local_2c = param_2, iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
        }
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
  }
  local_2c = &DAT_00659528;
  local_30 = L"痿梬镄e喍뢨Ł";
  FUN_00642c50(0x196,&local_58);
  local_30 = local_58;
  local_34 = L"<IND x=\"40\">";
  local_38 = L"痿梨镤e喍뢤T";
  FUN_00642c50(0x141,&local_5c);
  local_38 = local_5c;
  local_48[3] = L" <IND x=\"173\">";
  local_48[2] = L"痿梤閈e喍뢠O";
  FUN_00642c50(0x54,&local_60);
  local_48[2] = (wchar_t *)local_60;
  local_48[1] = L"<IND x=\"205\">";
  local_48[0] = L"痿梠閨e喍뢜P";
  FUN_00642c50(0x4f,&local_64);
  local_48[0] = local_64;
  local_4c = L"<IND x=\"235\">";
  local_50 = L"痿梜闈e喍뢘W";
  FUN_00642c50(0x50,&local_68);
  local_50 = local_68;
  local_54 = L"<IND x=\"265\">";
  local_58 = L"痿梘门e䖍뫜\r";
  FUN_00642c50(0x57,&local_6c);
  local_58 = local_6c;
  local_5c = L"<br>";
  local_60 = (undefined *)0x6590eb;
  FUN_00405330(&local_28,0xd);
  local_c = 0;
  local_60 = (undefined *)0x6590f8;
  FUN_00404ff0(&local_10);
  local_60 = (undefined *)0x659100;
  FUN_00404ff0(&stack0xffffffec);
  if ((int)param_2 < 0) {
    local_30 = (wchar_t *)0x0;
  }
  pwVar7 = local_30;
  local_34 = (wchar_t *)0x0;
  local_60 = (undefined *)0x659119;
  iVar5 = FUN_00405ef4(local_2c);
  if ((int)pwVar7 <= iVar5) {
    iVar5 = (iVar5 - (int)pwVar7) + 1;
    do {
      local_34 = (wchar_t *)((int)local_34 + 1);
      if (*(int *)(local_2c + (int)pwVar7 * 0x20 + 0x1c) == local_c) {
        local_60 = (undefined *)0x659169;
        FUN_00404ff0(&stack0xffffffe8);
      }
      else {
        local_60 = (undefined *)0x659154;
        FUN_00409dd8(*(int *)(local_2c + (int)pwVar7 * 0x20 + 0x1c) + *(int *)PTR_DAT_0066b7c4,
                     &local_70);
        local_60 = (undefined *)0x65915f;
        FUN_004051d4(&stack0xffffffe8,local_70);
      }
      local_64 = local_10;
      local_6c = L"<IND x=\"40\">";
      local_70 = (wchar_t *)0x659192;
      FUN_00405194(&local_74,
                   *(int *)PTR_DAT_0066af70 + *(int *)(local_2c + (int)pwVar7 * 0x20 + 0x18) * 0x2f8
                  );
      local_70 = local_74;
      local_74 = L"<IND x=\"173\">";
      local_78 = (wchar_t *)0x6591a9;
      FUN_00409dd8(*(undefined4 *)(local_2c + (int)pwVar7 * 0x20 + 4),&local_7c);
      local_78 = (wchar_t *)0x6591b4;
      FUN_004051d4(&local_78,local_7c);
      local_7c = &DAT_00659618;
      local_80 = (wchar_t *)0x6591cb;
      FUN_00409dd8(*(undefined4 *)(local_2c + (int)pwVar7 * 0x20 + 8),&local_84);
      local_80 = (wchar_t *)0x6591d6;
      FUN_004051d4(&local_80,local_84);
      local_84 = L"<IND x=\"238\">";
      local_88 = (wchar_t *)0x6591f0;
      FUN_00409dd8(*(undefined4 *)(local_2c + (int)pwVar7 * 0x20 + 0xc),&local_8c);
      local_88 = (wchar_t *)0x659201;
      FUN_004051d4(&local_88,local_8c);
      local_8c = L"<IND x=\"268\">";
      local_90 = 0x65921e;
      FUN_00409dd8(*(undefined4 *)(local_2c + (int)pwVar7 * 0x20 + 0x10),&local_94);
      local_90 = 0x65922f;
      FUN_004051d4(&local_90,local_94);
      local_98 = L"<br>";
      local_9c = L"䖋诘\xf044謜砕暬㬀삂";
      local_94 = unaff_EBX;
      FUN_00405330(&stack0xffffffe4,0xf);
      local_c = *(int *)(local_2c + (int)pwVar7 * 0x20 + 0x1c);
      if (local_34 == (wchar_t *)0xf) break;
      pwVar7 = (wchar_t *)((int)pwVar7 + 1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_60 = (undefined *)0x659282;
  iVar5 = FUN_00405ef4(local_2c);
  if (-1 < iVar5) {
    iVar5 = iVar5 + 1;
    iVar4 = 0;
    do {
      local_48[0] = (wchar_t *)((int)local_48[0] + *(int *)(local_2c + iVar4 * 0x20 + 4));
      local_48[1] = (wchar_t *)((int)local_48[1] + *(int *)(local_2c + iVar4 * 0x20 + 8));
      local_48[2] = (wchar_t *)((int)local_48[2] + *(int *)(local_2c + iVar4 * 0x20 + 0xc));
      local_48[3] = (wchar_t *)((int)local_48[3] + *(int *)(local_2c + iVar4 * 0x20 + 0x10));
      local_38 = (wchar_t *)((int)local_38 + *(int *)(local_2c + iVar4 * 0x20 + 0x14));
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_60 = &DAT_00659678;
  local_64 = (wchar_t *)0x6592db;
  FUN_00642c50(0x142,&local_98);
  local_64 = local_98;
  local_68 = L":<IND x=\"173\">";
  local_6c = (wchar_t *)0x6592f4;
  FUN_00409dd8(local_48[0],&local_a0);
  local_6c = (wchar_t *)0x659305;
  FUN_004051d4(&local_9c,local_a0);
  local_6c = local_9c;
  local_70 = L"<IND x=\"207\">";
  local_74 = (wchar_t *)0x65931e;
  FUN_00409dd8(local_48[1],&local_a8);
  local_74 = (wchar_t *)0x65932f;
  FUN_004051d4(&local_a4,local_a8);
  local_74 = local_a4;
  local_78 = L"<IND x=\"238\">";
  local_7c = (undefined *)0x659348;
  FUN_00409dd8(local_48[2],&local_b0);
  local_7c = (undefined *)0x659359;
  FUN_004051d4(&local_ac,local_b0);
  local_7c = local_ac;
  local_80 = L"<IND x=\"268\">";
  local_84 = (wchar_t *)0x659372;
  FUN_00409dd8(local_48[3],&local_b8);
  local_84 = L"뗿ｐ\xffffꡨ斖栀雌e䖍뫠\f";
  FUN_004051d4(&local_b4,local_b8);
  local_84 = local_b4;
  local_88 = L" <IND x=\"300\">";
  local_8c = L"</b>";
  local_90 = 0x6593a0;
  FUN_00405330(&local_24,0xc);
  local_90 = 0x6593a8;
  iVar5 = FUN_00405eec(local_2c);
  local_54 = (wchar_t *)((int)local_30 + 0xf);
  if (iVar5 <= (int)local_54) {
    local_54 = (wchar_t *)0xffffffff;
  }
  if ((int)local_30 < 2) {
    local_50 = (wchar_t *)0xffffffff;
  }
  else {
    local_50 = (wchar_t *)0x1;
  }
  local_90 = local_28;
  local_94 = local_20;
  local_9c = local_24;
  local_a0 = 0x6593ed;
  FUN_00405330(&local_4c,4);
  local_a0 = 0;
  local_a4 = (wchar_t *)0x659402;
  FUN_004060a8(&local_2c,PTR_DAT_00658f54,1);
  local_a0 = 0x659416;
  FUN_0040595c(local_8,&local_54,PTR_DAT_00488aa0);
  puVar1 = local_94;
  *in_FS_OFFSET = local_9c;
  local_94 = (undefined1 *)0x65951a;
  local_98 = (wchar_t *)0x65942e;
  FUN_004048d4(&local_b8,local_9c,puVar1);
  local_98 = (wchar_t *)0x659439;
  FUN_00404ff0(&local_b4);
  local_98 = (wchar_t *)0x659444;
  FUN_004048d4(&local_b0);
  local_98 = (wchar_t *)0x65944f;
  FUN_00404ff0(&local_ac);
  local_98 = (wchar_t *)0x65945a;
  FUN_004048d4(&local_a8);
  local_98 = (wchar_t *)0x659465;
  FUN_00404ff0(&local_a4);
  local_98 = L"薍ｨ\xffffʺ";
  FUN_004048d4(&local_a0);
  local_98 = (wchar_t *)0x659480;
  FUN_00405008(&local_9c,2);
  local_98 = (wchar_t *)0x65948b;
  FUN_004048d4(&local_94);
  local_98 = (wchar_t *)0x659496;
  FUN_00404ff0(&local_90);
  local_98 = (wchar_t *)0x6594a1;
  FUN_004048d4(&local_8c);
  local_98 = L"䖍\xe880될ￚ䖍\xe884무ￚ䖍\xe888됐ￚ䖍몌\x02";
  FUN_00404ff0(&local_88);
  local_98 = L"䖍\xe884무ￚ䖍\xe888됐ￚ䖍몌\x02";
  FUN_004048d4(&local_84);
  local_98 = L"䖍\xe888됐ￚ䖍몌\x02";
  FUN_00404ff0(&local_80);
  local_98 = L"䖍몌\x02";
  FUN_004048d4(&local_7c);
  local_98 = L"䖍\xe894돻ￚ䖍몘\x06";
  FUN_00405008(&local_78,2);
  local_98 = L"䖍몘\x06";
  FUN_004048d4(&local_70);
  local_98 = L"䖍记ꀕ䢊\xe800숄ￚ䖍诘吕斏\xe800쳆ￚ䖍뫜\a";
  FUN_00405008(&local_6c,6);
  local_98 = L"䖍诘吕斏\xe800쳆ￚ䖍뫜\a";
  FUN_004056f8(&local_54,PTR_DAT_00488aa0);
  local_98 = L"䖍뫜\a";
  FUN_004061c8(&local_2c,PTR_DAT_00658f54);
  local_98 = L"\xe9c3괃ￚ৩\xffff忿孞\xe58b썝";
  FUN_00405008(&local_28,7);
  return;
}

