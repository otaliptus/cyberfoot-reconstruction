// Address: 0057d2e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm10_FormCreate(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_90;
  undefined *local_8c;
  undefined *local_88;
  undefined *local_84;
  undefined *local_80;
  wchar_t *local_7c;
  undefined *local_78;
  undefined *local_74;
  undefined *local_70;
  undefined *local_6c;
  undefined *local_68;
  undefined *local_64;
  wchar_t *local_60;
  wchar_t *local_5c;
  undefined *local_58;
  wchar_t *local_54;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_48;
  wchar_t *local_44;
  wchar_t *local_40;
  undefined4 local_3c;
  undefined *local_38;
  wchar_t *local_34;
  undefined4 local_30;
  wchar_t *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = PTR_DAT_0066ac78;
  local_20 = &stack0xfffffffc;
  local_10 = 0x11;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0057d89c;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = L"<p align=\"center\"><shad>";
  local_30 = 0x57d31f;
  FUN_00642c50(0x2d6,&local_c);
  local_30 = local_c;
  local_34 = L"</shad></p>";
  local_38 = (undefined *)0x57d334;
  FUN_00405330(&local_8,3);
  local_38 = (undefined *)0x57d342;
  FUN_00545088(*(undefined4 *)(param_1 + 0x32c),local_8);
  local_38 = (undefined *)0x57d34f;
  FUN_00642c50(0x2d9,&local_10);
  local_38 = (undefined *)0x57d35d;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x334),local_10);
  local_38 = (undefined *)0x57d36a;
  FUN_00642c50(0x2da,&stack0xffffffec);
  local_38 = (undefined *)0x57d378;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x324),unaff_EBX);
  local_38 = (undefined *)0x57d385;
  FUN_00642c50(0x2db,&stack0xffffffe8);
  local_38 = (undefined *)0x57d393;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x328),unaff_ESI);
  local_38 = (undefined *)0x57d3a0;
  FUN_00642c50(0x2cf,&stack0xffffffe4);
  local_38 = (undefined *)0x57d3ae;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x338),unaff_EDI);
  local_38 = (undefined *)0x57d3bb;
  FUN_00642c50(0x2d0,&local_20);
  local_38 = (undefined *)0x57d3c9;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x33c),local_20);
  local_38 = (undefined *)0x57d3d6;
  FUN_00642c50(0x2d1,&local_24);
  local_38 = (undefined *)0x57d3e4;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x340),local_24);
  local_38 = (undefined *)0x57d3f1;
  FUN_00642c50(0x2d2,&local_28);
  local_38 = (undefined *)0x57d3ff;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x344),local_28);
  iVar3 = *(int *)(puVar1 + 0xc0);
  if (iVar3 < 2) {
    DAT_006d2190 = 18000;
    DAT_006d2194 = 80000;
    DAT_006d2198 = 9000;
    DAT_006d219c = 700;
  }
  else if (iVar3 < 6) {
    DAT_006d2190 = 20000;
    DAT_006d2194 = 100000;
    DAT_006d2198 = 10000;
    DAT_006d219c = 700;
  }
  else if (iVar3 < 10) {
    DAT_006d2190 = 22000;
    DAT_006d2194 = 110000;
    DAT_006d2198 = 10000;
    DAT_006d219c = 800;
  }
  else if (iVar3 < 0x14) {
    DAT_006d2190 = 25000;
    DAT_006d2194 = 120000;
    DAT_006d2198 = 10000;
    DAT_006d219c = 900;
  }
  else {
    DAT_006d2190 = 30000;
    DAT_006d2194 = 0x1e848;
    DAT_006d2198 = 10000;
    DAT_006d219c = 800;
  }
  iVar3 = 1;
  piVar2 = &DAT_006d2190;
  do {
    if (*piVar2 < *(int *)(*(int *)PTR_DAT_0066af70 + *(int *)(puVar1 + 8) * 0x2f8 + 0x200 +
                          iVar3 * 4)) {
      *piVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + *(int *)(puVar1 + 8) * 0x2f8 + 0x200 + iVar3 * 4
                        );
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 != 5);
  local_38 = &DAT_0057d904;
  local_3c = 0x57d56e;
  FUN_00642c50(0x2ce,&local_30);
  local_3c = local_30;
  local_40 = L":</b> ";
  local_44 = (wchar_t *)0x57d583;
  FUN_00642c50(0x2cf,&local_34);
  local_44 = local_34;
  local_48 = &DAT_0057d924;
  local_4c = (undefined *)0x57d5a6;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x204 + *(int *)(puVar1 + 8) * 0x2f8),
               &local_3c);
  local_4c = (undefined *)0x57d5b1;
  FUN_004051d4(&local_38,local_3c);
  local_4c = local_38;
  local_50 = &DAT_0057d924;
  local_54 = (wchar_t *)0x57d5c6;
  FUN_00642c50(0x2d0,&local_40);
  local_54 = local_40;
  local_58 = &DAT_0057d924;
  local_5c = (wchar_t *)0x57d5e9;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x208 + *(int *)(puVar1 + 8) * 0x2f8),
               &local_48);
  local_5c = (wchar_t *)0x57d5f4;
  FUN_004051d4(&local_44,local_48);
  local_5c = local_44;
  local_60 = L"<br>";
  local_64 = (undefined *)0x57d609;
  FUN_00642c50(0x2d1,&local_4c);
  local_64 = local_4c;
  local_68 = &DAT_0057d924;
  local_6c = (undefined *)0x57d62c;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x20c + *(int *)(puVar1 + 8) * 0x2f8),
               &local_54);
  local_6c = (undefined *)0x57d637;
  FUN_004051d4(&local_50,local_54);
  local_6c = local_50;
  local_70 = &DAT_0057d924;
  local_74 = (undefined *)0x57d64c;
  FUN_00642c50(0x2d2,&local_58);
  local_74 = local_58;
  local_78 = &DAT_0057d924;
  local_7c = L"喋趤ꡅ嫨\xe87b\xffff꡵䖍뫘\x12";
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x210 + *(int *)(puVar1 + 8) * 0x2f8),
               &local_60);
  local_7c = (wchar_t *)0x57d67a;
  FUN_004051d4(&local_5c,local_60);
  local_7c = local_5c;
  local_80 = (undefined *)0x57d68a;
  FUN_00405330(&local_2c,0x12);
  local_80 = (undefined *)0x57d698;
  FUN_00545088(*(undefined4 *)(param_1 + 0x330),local_2c);
  local_80 = &DAT_0057d93c;
  local_84 = (undefined *)0x57d6aa;
  FUN_00642c50(0x2d8,&local_68);
  local_84 = local_68;
  local_88 = &DAT_0057d924;
  local_8c = (undefined *)0x57d6d5;
  FUN_00651ebc(DAT_006d2190 -
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x204 + *(int *)(puVar1 + 8) * 0x2f8),&local_6c);
  local_8c = local_6c;
  local_90 = &DAT_0057d944;
  FUN_00405330(&local_64,5);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_64);
  FUN_00642c50(0x2d8,&local_74);
  FUN_00651ebc(DAT_006d2194 -
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x208 + *(int *)(puVar1 + 8) * 0x2f8),&local_78);
  FUN_00405330(&local_70,5);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),local_70);
  FUN_00642c50(0x2d8,&local_80);
  FUN_00651ebc(DAT_006d2198 -
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x20c + *(int *)(puVar1 + 8) * 0x2f8),&local_84);
  FUN_00405330(&local_7c,5);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_7c);
  puVar6 = &DAT_0057d93c;
  FUN_00642c50(0x2d8,&local_8c);
  puVar4 = &DAT_0057d924;
  puVar5 = local_8c;
  FUN_00651ebc(DAT_006d219c -
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x210 + *(int *)(puVar1 + 8) * 0x2f8),&local_90);
  FUN_00405330(&local_88,5);
  FUN_004e1414(*(undefined4 *)(param_1 + 800),local_88);
  *in_FS_OFFSET = &DAT_0057d944;
  FUN_00405008(&local_90,0xc,puVar4,&LAB_0057d8a3,puVar5,puVar6);
  FUN_004048d4(&local_60);
  FUN_00405008(&local_5c,2);
  FUN_004048d4(&local_54);
  FUN_00405008(&local_50,2);
  FUN_004048d4(&local_48);
  FUN_00405008(&local_44,2);
  FUN_004048d4(&local_3c);
  FUN_00405008(&local_38,0xd);
  return;
}

