// Address: 005f8a14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm67_addnaescalacao(int param_1,int param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t **ppwVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 *puVar5;
  int iVar6;
  int *in_FS_OFFSET;
  float10 fVar7;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  undefined4 uStack_8c;
  wchar_t *pwStack_88;
  int iStack_84;
  wchar_t *local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  undefined *local_74;
  wchar_t *local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 uStack_66;
  wchar_t *local_64;
  int local_60;
  wchar_t *local_5c;
  undefined4 local_58 [2];
  undefined2 local_50;
  undefined2 uStack_4e;
  int iStack_4c;
  wchar_t *pwStack_48;
  undefined4 local_44;
  undefined1 *local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0x14;
  do {
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_10 = 0;
  local_24 = (undefined1 *)0x5f8a47;
  local_c = param_2;
  local_8 = param_1;
  FUN_00405658(&local_44,PTR_DAT_004010e8,5);
  local_24 = (undefined1 *)0x5f8a5a;
  FUN_00405658(local_58,PTR_DAT_004010e8,5);
  local_28 = &LAB_005f9079;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c;
  local_24 = &stack0xfffffffc;
  FUN_00404ff0(&stack0xffffffe8);
  FUN_00404ff0(&local_28);
  FUN_00404ff0(&stack0xffffffe4);
  FUN_00404ff0(&local_14);
  iVar6 = 3;
  ppwVar3 = &local_64;
  do {
    *ppwVar3 = (wchar_t *)0xffffffff;
    ppwVar3 = ppwVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 5;
  puVar5 = &local_44;
  do {
    FUN_00404ff0(puVar5);
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 5;
  puVar5 = local_58;
  do {
    FUN_00404ff0(puVar5);
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_00404ff0(&stack0xffffffe0);
  FUN_00404ff0(&local_24);
  iVar6 = local_10;
  local_2c = 0;
  FUN_00405330(&stack0xffffffe8,3);
  TForm67_get_substituto
            (local_8,*(undefined4 *)(*(int *)PTR_DAT_0066b128 + iVar6 * 0x20),
             *(undefined4 *)(*(int *)PTR_DAT_0066b128 + 4 + iVar6 * 0x20));
  if (0 < *(int *)(*(int *)PTR_DAT_0066b128 + 0x1c + iVar6 * 0x20)) {
    thunk_FUN_0040502c(&stack0xffffffe0,L" <img src=\"i_ct\">");
  }
  iVar6 = 3;
  ppwVar3 = &local_64;
  puVar5 = local_58;
  local_30 = &stack0xffffffc0;
  do {
    puVar5 = (undefined4 *)((int)puVar5 + 4);
    if (-1 < (int)*ppwVar3) {
      local_2c = local_2c + 1;
      if (0 < *(int *)(*(int *)PTR_DAT_0066ae14 + 0x1c + (int)*ppwVar3 * 0x20)) {
        thunk_FUN_0040502c(&local_24,L" <img src=\"i_ct\">");
      }
      if (PTR_DAT_0066ac78[0xdd] == '\0') {
        if (*(int *)(*(int *)PTR_DAT_0066ae14 + 8 + (int)*ppwVar3 * 0x20) < 0x5d) {
          uVar4 = FUN_00651e70(*(undefined4 *)(*(int *)PTR_DAT_0066ae14 + 8 + (int)*ppwVar3 * 0x20))
          ;
          FUN_00409dd8(uVar4,&local_6c);
          FUN_00404bac(&local_6c,&DAT_005f90f4);
          FUN_004051d4(puVar5,local_6c);
        }
        else {
          uVar4 = FUN_00651e70(*(undefined4 *)(*(int *)PTR_DAT_0066ae14 + 8 + (int)*ppwVar3 * 0x20))
          ;
          FUN_00409dd8(uVar4,&local_68);
          FUN_00404bac(&local_68,&DAT_005f90e4);
          FUN_004051d4(puVar5,CONCAT22(uStack_66,local_68));
        }
      }
      if (PTR_DAT_0066ac78[0xdd] != '\0') {
        if (*(int *)(*(int *)PTR_DAT_0066ae14 + 8 + (int)*ppwVar3 * 0x20) < 0x5d) {
          uVar4 = FUN_00651e70(*(undefined4 *)(*(int *)PTR_DAT_0066ae14 + 8 + (int)*ppwVar3 * 0x20))
          ;
          FUN_00409dd8(uVar4,&local_74);
          FUN_00404bac(&local_74,&DAT_005f9104);
          FUN_004051d4(puVar5,local_74);
        }
        else {
          uVar4 = FUN_00651e70(*(undefined4 *)(*(int *)PTR_DAT_0066ae14 + 8 + (int)*ppwVar3 * 0x20))
          ;
          FUN_00409dd8(uVar4,&local_70);
          FUN_00404bac(&local_70,&DAT_005f9104);
          FUN_004051d4(puVar5,local_70);
        }
      }
      FUN_00405194(&local_78,
                   *(int *)PTR_DAT_0066b5b8 +
                   *(int *)(*(int *)PTR_DAT_0066ae14 + (int)*ppwVar3 * 0x20) * 0x130);
      FUN_004052cc(local_30,local_78,local_24);
    }
    iVar2 = local_10;
    local_30 = local_30 + 4;
    ppwVar3 = ppwVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (*(float *)(*(int *)PTR_DAT_0066b128 + 0xc + local_10 * 0x20) <= _DAT_005f9108) {
    thunk_FUN_0040502c(&local_14,&DAT_005f9110);
  }
  else {
    local_44 = SUB104((float10)*(float *)(*(int *)PTR_DAT_0066b128 + 0xc + local_10 * 0x20),0);
    pwStack_48 = (wchar_t *)0x5f8d2a;
    FUN_0040bdc0(&local_7c);
    FUN_004051d4(&local_14,local_7c);
  }
  FUN_004030d4(local_98,*(int *)PTR_DAT_0066b5b8 +
                        *(int *)(*(int *)PTR_DAT_0066b128 + 4 + iVar2 * 0x20) * 0x130);
  FUN_004030a4(local_98,&DAT_005f9118,0x15);
  FUN_00405194(&local_80,local_98);
  local_44 = local_58[local_2c];
  pwStack_48 = L"<IND x=\"165\">";
  iStack_4c = local_14;
  local_50 = 0x8da8;
  uStack_4e = 0x5f;
  FUN_00405330(&stack0xffffffe4,5);
  if ((int)local_64 < 0) {
    local_50 = 0x9140;
    uStack_4e = 0x5f;
    local_5c = L"</b></font><br>";
    local_60 = 0x5f8faa;
    FUN_00405330(&stack0xffffffe8,4);
  }
  else {
    if (*(float *)(*(int *)PTR_DAT_0066ae14 + 0xc + (int)local_64 * 0x20) <= _DAT_005f9108) {
      local_50 = 0x8e10;
      uStack_4e = 0x5f;
      thunk_FUN_0040502c(&local_14,&DAT_005f9110);
    }
    else {
      fVar7 = (float10)*(float *)(*(int *)PTR_DAT_0066ae14 + 0xc + (int)local_64 * 0x20);
      local_58[0] = SUB104(fVar7,0);
      local_58[1] = (undefined4)((unkuint10)fVar7 >> 0x20);
      local_50 = (undefined2)((unkuint10)fVar7 >> 0x40);
      local_5c = 
      L"開ｨ\xffff䖍\xe8f0쏓￠෫䖍뫰鄐_䃨\xe0c2棿酀_痿￬쑵\x2068徑＀\xf075灨徑贀\xec45ں"
      ;
      FUN_0040bdc0(&local_9c);
      local_50 = 0x8e01;
      uStack_4e = 0x5f;
      FUN_004051d4(&local_14,local_9c);
    }
    local_50 = 0x9140;
    uStack_4e = 0x5f;
    local_5c = L"<IND x=\"165\">";
    local_60 = local_14;
    local_64 = L"</b><font><br>";
    local_68 = 0x8e35;
    uStack_66 = 0x5f;
    local_58[1] = unaff_EBX;
    FUN_00405330(&stack0xffffffe8,6);
    if (-1 < local_60) {
      if (*(float *)(*(int *)PTR_DAT_0066ae14 + 0xc + local_60 * 0x20) <= _DAT_005f9108) {
        local_68 = 0x8e9d;
        uStack_66 = 0x5f;
        thunk_FUN_0040502c(&local_14,&DAT_005f9110);
      }
      else {
        fVar7 = (float10)*(float *)(*(int *)PTR_DAT_0066ae14 + 0xc + local_60 * 0x20);
        local_70 = SUB104(fVar7,0);
        local_6c = (undefined4)((unkuint10)fVar7 >> 0x20);
        local_68 = (undefined2)((unkuint10)fVar7 >> 0x40);
        local_74 = (undefined *)0x5f8e80;
        FUN_0040bdc0(&local_a0);
        local_68 = 0x8e8e;
        uStack_66 = 0x5f;
        FUN_004051d4(&local_14,local_a0);
      }
      local_68 = 0x9194;
      uStack_66 = 0x5f;
      local_70 = L"<IMG src=\"i_sub\">";
      local_78 = L" ";
      local_7c = local_58[1];
      local_80 = L"<IND x=\"165\">";
      iStack_84 = local_14;
      pwStack_88 = L"</b><font><br>";
      uStack_8c = 0x5f8ecf;
      FUN_00405330(&stack0xffffffe8,9);
    }
    if (-1 < (int)local_5c) {
      if (*(float *)(*(int *)PTR_DAT_0066ae14 + 0xc + (int)local_5c * 0x20) <= _DAT_005f9108) {
        local_68 = 0x8f37;
        uStack_66 = 0x5f;
        thunk_FUN_0040502c(&local_14,&DAT_005f9110);
      }
      else {
        fVar7 = (float10)*(float *)(*(int *)PTR_DAT_0066ae14 + 0xc + (int)local_5c * 0x20);
        local_70 = SUB104(fVar7,0);
        local_6c = (undefined4)((unkuint10)fVar7 >> 0x20);
        local_68 = (undefined2)((unkuint10)fVar7 >> 0x40);
        local_74 = (undefined *)0x5f8f1a;
        FUN_0040bdc0(&local_a4);
        local_68 = 0x8f28;
        uStack_66 = 0x5f;
        FUN_004051d4(&local_14,local_a4);
      }
      local_68 = 0x9194;
      uStack_66 = 0x5f;
      local_70 = L"<IMG src=\"i_sub\">";
      local_74 = &DAT_005f90ac;
      local_78 = L" ";
      local_7c = CONCAT22(uStack_4e,local_50);
      local_80 = L"<IND x=\"165\">";
      iStack_84 = local_14;
      pwStack_88 = L"</b><font><br>";
      uStack_8c = 0x5f8f69;
      FUN_00405330(&stack0xffffffe8,9);
    }
    local_68 = 0x9194;
    uStack_66 = 0x5f;
    local_70 = L"<IMG src=\"i_sub\">";
    local_78 = L"<font><br>";
    local_7c = 0x5f8f8b;
    FUN_00405330(&stack0xffffffe8,5);
  }
  if (local_c == 1) {
    iVar6 = *(int *)(local_8 + 0x3e0);
    local_7c = 0x5f8fcd;
    FUN_004052cc(&local_a8,*(undefined4 *)(iVar6 + 0x198),unaff_EBX);
    local_7c = 0x5f8fda;
    FUN_00545088(iVar6,local_a8);
  }
  else {
    iVar6 = *(int *)(local_8 + 0x3e4);
    local_7c = 0x5f8ff9;
    FUN_004052cc(&local_ac,*(undefined4 *)(iVar6 + 0x198),unaff_EBX);
    local_7c = 0x5f9006;
    FUN_00545088(iVar6,local_ac);
  }
  pwVar1 = local_70;
  *in_FS_OFFSET = (int)local_78;
  local_70 = L"幟譛工Ã\x18";
  local_74 = (undefined *)0x5f9023;
  FUN_00405008(&local_ac,2,pwVar1);
  local_74 = (undefined *)0x5f9033;
  FUN_004048f8(&local_a4,3);
  local_74 = (undefined *)0x5f903b;
  FUN_00404ff0(&local_80);
  local_74 = (undefined *)0x5f9043;
  FUN_004048d4(&local_7c);
  local_74 = (undefined *)0x5f904b;
  FUN_00404ff0(&local_78);
  local_74 = (undefined *)0x5f9058;
  FUN_004048f8(&local_74,4);
  local_74 = (undefined *)0x5f906b;
  FUN_00405744(local_58,PTR_DAT_004010e8,10);
  local_74 = (undefined *)0x5f9078;
  FUN_00405008(&local_28,6);
  return;
}

