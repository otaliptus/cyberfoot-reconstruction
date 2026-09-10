// Address: 005a5cd4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm29_FormCreate(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined1 *unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  char *local_34;
  wchar_t *local_30;
  undefined1 *local_2c;
  wchar_t *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar3 = 6;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_20 = &LAB_005a609a;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = L"<P align=\"center\"><shad>";
  local_2c = (undefined1 *)0x5a5d12;
  FUN_00642c50(0x186,&stack0xffffffec);
  local_30 = L"</shad></p>";
  local_34 = (char *)0x5a5d27;
  local_2c = unaff_ESI;
  FUN_00405330(&stack0xfffffff0,3);
  local_34 = (char *)0x5a5d35;
  FUN_00545088(*(undefined4 *)(param_1 + 0x310),unaff_EBX);
  local_34 = (char *)0x5a5d42;
  FUN_00642c50(0x196,&stack0xffffffe8);
  local_34 = (char *)0x5a5d50;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x324),unaff_EDI);
  local_34 = (char *)0x5a5d5d;
  FUN_00642c50(0x197,&local_1c);
  local_34 = (char *)0x5a5d6b;
  FUN_004e1414(*(undefined4 *)(param_1 + 800),local_1c);
  local_34 = (char *)0x5a5d78;
  FUN_00642c50(0x198,&local_20);
  local_34 = (char *)0x5a5d86;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),local_20);
  local_34 = (char *)0x5a5d93;
  FUN_00642c50(0x199,&local_24);
  local_34 = (char *)0x5a5da1;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_24);
  local_34 = (char *)0x5a5dae;
  FUN_00642c50(0x19a,&local_28);
  local_34 = (char *)0x5a5dbc;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_28);
  DAT_006d2590 = 0;
  local_34 = (char *)0x5a5dd5;
  DAT_006d25a0 = (int *)FUN_0054b6ac(PTR_PTR_00545e44,1,DAT_006d2518);
  local_34 = (char *)0x5a5de3;
  (**(code **)(*DAT_006d25a0 + 0x18))(DAT_006d25a0,"combopais");
  local_34 = (char *)0x5a5def;
  (**(code **)(*DAT_006d25a0 + 0x118))(DAT_006d25a0,3);
  local_34 = (char *)0x5a5dfc;
  (**(code **)(*DAT_006d25a0 + 0x68))(DAT_006d25a0,DAT_006d2518);
  local_34 = (char *)0x5a5e08;
  FUN_0046599c(DAT_006d25a0,0x40);
  local_34 = (char *)0x5a5e14;
  FUN_00465978(DAT_006d25a0,0x1f8);
  local_34 = (char *)0x5a5e20;
  FUN_004659c4(DAT_006d25a0,0x91);
  local_34 = (char *)0x5a5e34;
  FUN_0054b94c(DAT_006d25a0,*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc));
  piVar1 = DAT_006d25a0;
  DAT_006d25a0[0x87] = param_1;
  piVar1[0x86] = (int)TForm29_combopaisSelect;
  local_34 = (char *)0x5a5e4f;
  FUN_00466128(DAT_006d25a0,0);
  local_34 = (char *)0x5a5e58;
  FUN_0054c724(DAT_006d25a0,0);
  local_34 = (char *)0x5a5e61;
  FUN_0054c748(DAT_006d25a0,0);
  *(undefined1 *)(DAT_006d25a0 + 0xaa) = 0;
  local_34 = (char *)0x5a5e76;
  FUN_004663a8(DAT_006d25a0,0xffffff);
  local_34 = (char *)0x5a5e82;
  FUN_0054b8dc(DAT_006d25a0,0x91);
  DAT_006d25a0[0xaf] = 0x32;
  local_34 = (char *)0x5a5ea0;
  DAT_006d259c = (int *)FUN_004556ac(PTR_PTR_00448e94,1,DAT_006d2518);
  local_34 = (char *)0x5a5eae;
  (**(code **)(*DAT_006d259c + 0x18))(DAT_006d259c,"comboee2");
  local_34 = (char *)0x5a5eb7;
  FUN_00455a4c(DAT_006d259c,2);
  local_34 = (char *)0x5a5ec4;
  (**(code **)(*DAT_006d259c + 0x68))(DAT_006d259c,DAT_006d2518);
  local_34 = (char *)0x5a5ed0;
  FUN_0046599c(DAT_006d259c,0x40);
  local_34 = (char *)0x5a5edc;
  FUN_00465978(DAT_006d259c,0x1f8);
  local_34 = (char *)0x5a5ee8;
  FUN_004659c4(DAT_006d259c,0x91);
  local_34 = (char *)0x5a5efc;
  FUN_00455914(DAT_006d259c,*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2f8));
  piVar1 = DAT_006d259c;
  DAT_006d259c[0x87] = param_1;
  piVar1[0x86] = (int)TForm29_combo2Select;
  local_34 = (char *)0x5a5f1d;
  (**(code **)(*DAT_006d259c + 0x108))(DAT_006d259c,0x1a);
  local_34 = (char *)0x5a5f26;
  FUN_00466128(DAT_006d259c,0);
  local_34 = (char *)0x5a5f32;
  local_c = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (local_c < 2) {
    local_34 = (char *)0x5a6039;
    FUN_00466128(DAT_006d25a0,0);
    local_34 = (char *)0x5a6042;
    FUN_0054c10c(DAT_006d25a0,0);
  }
  else {
    if (*(int *)(PTR_DAT_0066ac78 + 8) < 0) {
      local_34 = (char *)0x5a5f72;
      local_8 = FUN_0065208c(0x1d);
    }
    else {
      local_34 = (char *)0x5a5f63;
      local_8 = FUN_0065208c(*(undefined4 *)
                              (*(int *)PTR_DAT_0066af70 + 0x3c +
                              *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
    }
    if (-1 < local_c + -1) {
      iVar3 = 0;
      do {
        local_34 = "<img src=\"idx:";
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar3 * 0x294),&local_34);
        FUN_00404c64(&local_30,3);
        local_34 = (char *)0x5a5fc2;
        FUN_004051d4(&local_2c,local_30);
        local_34 = (char *)0x5a5fe8;
        FUN_0040526c(&local_2c,
                     *(undefined4 *)
                      (PTR_DAT_0066b294 +
                      *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar3 * 0x294) * 4));
        local_34 = (char *)0x5a5ff2;
        FUN_0054cd98(DAT_006d25a0,local_2c);
        iVar3 = iVar3 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    if (local_8 < 0) {
      local_34 = (char *)0x5a601b;
      FUN_0054c10c(DAT_006d25a0,0);
      DAT_006d2590 = 0;
    }
    else {
      local_34 = (char *)0x5a6008;
      FUN_0054c10c(DAT_006d25a0,local_8);
      DAT_006d2590 = local_8;
    }
    local_34 = (char *)0x5a6029;
    DAT_006d2590 = FUN_0054c0f0(DAT_006d25a0);
  }
  local_34 = (char *)0x5a604e;
  DAT_006d258c = FUN_0042fcb8(PTR_PTR_00429378,1);
  _DAT_006d2588 = 0;
  local_34 = (char *)0x5a6061;
  TForm29_updatecontrole(param_1);
  local_34 = (char *)0x1;
  FUN_005a6660(param_1,1,0xffffffff);
  puVar2 = local_2c;
  *in_FS_OFFSET = local_34;
  local_2c = &LAB_005a60a1;
  local_30 = L"䖍뫘\b";
  FUN_004048f8(&local_34,2,puVar2);
  local_30 = (wchar_t *)0x5a6099;
  FUN_00405008(&local_2c,8);
  return;
}

