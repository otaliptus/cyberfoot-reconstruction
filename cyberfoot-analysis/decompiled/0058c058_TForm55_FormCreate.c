// Address: 0058c058
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x0058c302) */

void TForm55_FormCreate(int param_1)

{
  wchar_t *pwVar1;
  undefined1 *puVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined4 local_c4;
  undefined *local_c0;
  undefined4 local_bc;
  undefined *local_b8;
  wchar_t *local_b4;
  undefined4 local_b0;
  undefined *local_ac;
  undefined4 local_a8;
  undefined *local_a4;
  undefined4 local_a0;
  undefined *local_9c;
  wchar_t *local_98;
  undefined1 local_94 [4];
  undefined1 local_90 [8];
  undefined4 local_88;
  undefined *local_84;
  wchar_t *local_80;
  undefined4 local_7c;
  undefined *local_78;
  wchar_t *local_74;
  undefined4 local_70;
  undefined *local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined *local_40;
  wchar_t *local_3c;
  int local_38;
  wchar_t *local_34;
  int local_30;
  wchar_t *local_2c;
  undefined4 uStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  iVar3 = 0x19;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_24 = &LAB_0058c6b2;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_2c = L"<p align=\"center\"><shad>";
  local_30 = 0x58c090;
  FUN_00642c50(0x21a,&local_38);
  local_30 = local_38;
  local_34 = L"</shad></p>";
  local_38 = 0x58c0a5;
  FUN_00405330(&local_34,3);
  local_38 = 0x58c0b3;
  FUN_00545088(*(undefined4 *)(param_1 + 0x34c),local_34);
  local_38 = 0x58c0c0;
  FUN_00642c50(0x206,&local_3c);
  local_38 = 0x58c0ce;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_3c);
  local_38 = 0x58c0db;
  FUN_00642c50(0x196,&local_40);
  local_38 = 0x58c0ec;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x310) + 0x60),local_40);
  local_38 = 0x58c0f9;
  FUN_00642c50(0x21b,&local_44);
  local_38 = 0x58c10a;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x314) + 0x60),local_44);
  local_38 = 0x58c117;
  FUN_00642c50(0x21c,&local_48);
  local_38 = 0x58c128;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x318) + 0x60),local_48);
  local_38 = 0x58c135;
  FUN_00642c50(0x54,&local_4c);
  local_38 = 0x58c146;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x31c) + 0x60),local_4c);
  local_38 = 0x58c153;
  FUN_00642c50(0x4f,&local_50);
  local_38 = 0x58c164;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 800) + 0x60),local_50);
  local_38 = 0x58c171;
  FUN_00642c50(0x51,&local_54);
  local_38 = 0x58c182;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x60),local_54);
  local_38 = 0x58c18f;
  FUN_00642c50(0x50,&local_58);
  local_38 = 0x58c1a0;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x60),local_58);
  local_38 = 0x58c1ad;
  FUN_00642c50(0x52,&local_5c);
  local_38 = 0x58c1be;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x60),local_5c);
  local_38 = 0x58c1cb;
  FUN_00642c50(0x53,&local_60);
  local_38 = 0x58c1dc;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x330) + 0x60),local_60);
  local_38 = 0x58c1e9;
  FUN_00642c50(0x21d,&local_64);
  local_38 = 0x58c1fa;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x334) + 0x60),local_64);
  if (-1 < *(int *)PTR_DAT_0066b194) {
    local_38 = 0x58c20f;
    FUN_0058a828(&local_30);
    local_38 = 0x58c216;
    FUN_0058bdd4(param_1);
    local_38 = 0x58c21e;
    FUN_00404ff0(&local_8);
    iVar3 = local_30;
    if (0 < local_30) {
      local_38 = 0x58c231;
      FUN_00642c50(0x155,&local_68);
      local_38 = local_68;
      local_3c = L":";
      local_40 = (undefined *)0x58c243;
      FUN_00409dd8(iVar3,&local_70);
      local_40 = (undefined *)0x58c24e;
      FUN_004051d4(&local_6c,local_70);
      local_40 = local_6c;
      local_44 = &DAT_0058c724;
      local_48 = (undefined *)0x58c263;
      FUN_00405330(&local_8,4);
    }
    if (0 < unaff_ESI) {
      local_38 = local_8;
      local_3c = (wchar_t *)0x58c27a;
      FUN_00642c50(0x24,&local_74);
      local_3c = local_74;
      local_40 = &DAT_0058c71c;
      local_44 = (undefined *)0x58c28c;
      FUN_00409dd8(unaff_ESI,&local_7c);
      local_44 = (undefined *)0x58c297;
      FUN_004051d4(&local_78,local_7c);
      local_44 = local_78;
      local_48 = &DAT_0058c724;
      local_4c = 0x58c2ac;
      FUN_00405330(&local_8,5);
    }
    if (0 < unaff_EBX) {
      local_38 = local_8;
      local_3c = 
      L"痿梄윜X閍ｼ\xffff욋è\xe7db诿粕\xffff跿聅\xeee8\xe78e\xffff聵⑨壇贀ﱅֺ";
      FUN_00642c50(0x25,&local_80);
      local_3c = local_80;
      local_40 = &DAT_0058c71c;
      local_44 = (undefined *)0x58c2d8;
      FUN_00409dd8(unaff_EBX,&local_88);
      local_44 = (undefined *)0x58c2e6;
      FUN_004051d4(&local_84,local_88);
      local_44 = local_84;
      local_48 = &DAT_0058c724;
      local_4c = 0x58c2fb;
      FUN_00405330(&local_8,5);
    }
    pwVar1 = local_2c;
    if (0 < (int)local_2c) {
      local_38 = local_8;
      local_3c = (wchar_t *)0x58c370;
      FUN_00642c50(0x156,&local_98);
      local_3c = local_98;
      local_40 = &DAT_0058c71c;
      local_44 = (undefined *)0x58c388;
      FUN_00409dd8(pwVar1,&local_a0);
      local_44 = (undefined *)0x58c399;
      FUN_004051d4(&local_9c,local_a0);
      local_44 = local_9c;
      local_48 = &DAT_0058c724;
      local_4c = 0x58c3b1;
      FUN_00405330(&local_8,5);
    }
    if (0 < (int)local_24) {
      local_38 = local_8;
      local_3c = DAT_006d2200;
      local_40 = &DAT_0058c71c;
      local_44 = (undefined *)0x58c3d3;
      FUN_00409dd8(local_24,&local_a8);
      local_44 = (undefined *)0x58c3e4;
      FUN_004051d4(&local_a4,local_a8);
      local_44 = local_a4;
      local_48 = &DAT_0058c724;
      local_4c = 0x58c3fc;
      FUN_00405330(&local_8,5);
    }
    if (0 < unaff_EDI) {
      local_38 = local_8;
      local_3c = DAT_006d2204;
      local_40 = &DAT_0058c71c;
      local_44 = (undefined *)0x58c41e;
      FUN_00409dd8(unaff_EDI,&local_b0);
      local_44 = (undefined *)0x58c42f;
      FUN_004051d4(&local_ac,local_b0);
      local_44 = local_ac;
      local_48 = &DAT_0058c724;
      local_4c = 0x58c447;
      FUN_00405330(&local_8,5);
    }
    puVar2 = local_20;
    if (0 < (int)local_20) {
      local_38 = local_8;
      local_3c = (wchar_t *)0x58c461;
      FUN_00642c50(0xe0,&local_b4);
      local_3c = local_b4;
      local_40 = &DAT_0058c71c;
      local_44 = (undefined *)0x58c479;
      FUN_00409dd8(puVar2,&local_bc);
      local_44 = (undefined *)0x58c48a;
      FUN_004051d4(&local_b8,local_bc);
      local_44 = local_b8;
      local_48 = &DAT_0058c724;
      local_4c = 0x58c4a2;
      FUN_00405330(&local_8,5);
    }
    if (0 < local_c) {
      local_38 = local_8;
      local_3c = DAT_006d2208;
      local_40 = &DAT_0058c71c;
      local_44 = (undefined *)0x58c4c3;
      FUN_00409dd8(puVar2,&local_c4);
      local_44 = (undefined *)0x58c4d4;
      FUN_004051d4(&local_c0,local_c4);
      local_44 = local_c0;
      local_48 = &DAT_0058c724;
      local_4c = 0x58c4ec;
      FUN_00405330(&local_8,5);
    }
    iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x23c + *(int *)PTR_DAT_0066b194 * 0x2f8);
    if (0 < iVar3) {
      local_38 = local_8;
      local_3c = L"Regional:";
      local_40 = (undefined *)0x58c526;
      FUN_00409dd8(iVar3,&local_cc);
      local_40 = (undefined *)0x58c537;
      FUN_004051d4(&local_c8,local_cc);
      local_40 = local_c8;
      local_44 = &DAT_0058c724;
      local_48 = (undefined *)0x58c54f;
      FUN_00405330(&local_8,4);
    }
    bVar4 = true;
    local_38 = 0x58c559;
    FUN_00405378(local_8);
    if (bVar4) {
      local_38 = 0x58c568;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),0);
    }
    else {
      local_38 = 0x58c57a;
      FUN_00642c50(0x206,&local_d0);
      local_38 = 0x58c58b;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_d0);
    }
    local_38 = 0x58c598;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x300),0);
    local_38 = 0x58c5a6;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_8);
  }
  pwVar1 = local_2c;
  *in_FS_OFFSET = local_34;
  local_2c = L"幟譛工Ã0";
  local_30 = 0x58c5be;
  FUN_00404ff0(&local_d0,local_34,pwVar1);
  local_30 = 0x58c5c9;
  FUN_004048d4(&local_cc);
  local_30 = 0x58c5d4;
  FUN_00404ff0(&local_c8);
  local_30 = 0x58c5df;
  FUN_004048d4(&local_c4);
  local_30 = 0x58c5ea;
  FUN_00404ff0(&local_c0);
  local_30 = 0x58c5f5;
  FUN_004048d4(&local_bc);
  local_30 = 0x58c605;
  FUN_00405008(&local_b8,2);
  local_30 = 0x58c610;
  FUN_004048d4(&local_b0);
  local_30 = 0x58c61b;
  FUN_00404ff0(&local_ac);
  local_30 = 0x58c626;
  FUN_004048d4(&local_a8);
  local_30 = 0x58c631;
  FUN_00404ff0(&local_a4);
  local_30 = 0x58c63c;
  FUN_004048d4(&local_a0);
  local_30 = 0x58c64c;
  FUN_00405008(&local_9c,2);
  local_30 = 0x58c657;
  FUN_004048d4(local_94);
  local_30 = 0x58c667;
  FUN_00405008(local_90,2);
  local_30 = 0x58c672;
  FUN_004048d4(&local_88);
  local_30 = 0x58c67f;
  FUN_00405008(&local_84,2);
  local_30 = 0x58c687;
  FUN_004048d4(&local_7c);
  local_30 = 0x58c694;
  FUN_00405008(&local_78,2);
  local_30 = 0x58c69c;
  FUN_004048d4(&local_70);
  local_30 = 0x58c6a9;
  FUN_00405008(&local_6c,0xf);
  local_30 = 0x58c6b1;
  FUN_00404ff0(&local_8);
  return;
}

