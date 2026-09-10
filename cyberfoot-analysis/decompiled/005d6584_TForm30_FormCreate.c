// Address: 005d6584
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm30_FormCreate(int param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined1 local_48 [12];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  wchar_t *pwStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = PTR_DAT_0066adf4;
  local_20 = &stack0xfffffffc;
  local_10 = 0xf;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_005d6b1a;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = 0x5d65ba;
  FUN_00642c50(0x19b,&local_c);
  local_2c = 0x5d65c8;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x32c),local_c);
  local_2c = 0x5d65d5;
  FUN_00642c50(0x19c,&local_10);
  local_2c = 0x5d65e3;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x340),local_10);
  local_2c = 0x5d65f0;
  FUN_00642c50(0x19d,&stack0xffffffec);
  local_2c = 0x5d65fe;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x334),unaff_EBX);
  local_2c = 0x5d660b;
  FUN_00642c50(0x19e,&stack0xffffffe8);
  local_2c = 0x5d6619;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x338),unaff_ESI);
  local_2c = 0x5d6626;
  FUN_00642c50(0x78,&stack0xffffffe4);
  local_2c = 0x5d6634;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x33c),unaff_EDI);
  local_2c = 0x5d6653;
  FUN_00405194(&local_20,*(int *)PTR_DAT_0066b718 + *(int *)(PTR_DAT_0066ac78 + 0x10) * 0x80);
  local_2c = 0x5d6661;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x330),local_20);
  local_2c = 0x5d6680;
  FUN_00405194(&local_24,*(int *)PTR_DAT_0066b718 + *(int *)(PTR_DAT_0066ac78 + 0x10) * 0x80);
  local_2c = 0x5d668e;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x330),local_24);
  if (-1 < *(int *)puVar1) {
    local_2c = 0x5d66a4;
    FUN_00466128(*(undefined4 *)(param_1 + 0x308),1);
    local_2c = 0x5d66b4;
    (**(code **)(**(int **)(param_1 + 0x308) + 0xcc))(*(int **)(param_1 + 0x308),1);
    iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)puVar1 * 0x2f8);
    if (iVar3 < 1) {
      local_2c = 0x5d66e8;
      FUN_00642c50(0x143,&local_8);
    }
    else {
      local_2c = 0x5d66d9;
      FUN_00642c50(iVar3 + 0x22,&local_8);
    }
    iVar3 = *(int *)puVar1;
    local_2c = 0x5d66fd;
    FUN_004030d4(local_48,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8);
    local_2c = 0x5d670c;
    FUN_004030a4(local_48,&DAT_005d6b28,0x1a);
    local_2c = 0x5d6717;
    FUN_00405194(&local_2c,local_48);
    uStack_30 = *(undefined4 *)
                 (PTR_DAT_0066b294 + *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8) * 4);
    pwStack_34 = L") - ";
    uStack_38 = local_8;
    uStack_3c = 0x5d6743;
    FUN_00405330(&local_28,4);
    local_2c = 0x5d6751;
    FUN_004e18c4(*(undefined4 *)(param_1 + 0x308),local_28);
    local_2c = 0x5d675b;
    FUN_00645508(*(undefined4 *)puVar1,&local_4c);
    if (local_4c != 0) {
      local_2c = 0x5d676b;
      FUN_00645508(*(undefined4 *)puVar1,&local_50);
      local_2c = 0x5d677f;
      FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x304) + 0x168),local_50);
    }
    local_2c = 0x5d678b;
    FUN_005d61ac(param_1,1);
  }
  if (-1 < *(int *)(puVar1 + 4)) {
    local_2c = 0x5d67aa;
    iVar3 = FUN_0065208c(*(undefined4 *)
                          (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(puVar1 + 4) * 0x2f8));
    if (-1 < iVar3) {
      local_2c = 0x5d67be;
      FUN_00466128(*(undefined4 *)(param_1 + 0x310),1);
      iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(puVar1 + 4) * 0x2f8);
      if (iVar3 < 1) {
        local_2c = 0x5d67f3;
        FUN_00642c50(0x143,&local_8);
      }
      else {
        local_2c = 0x5d67e4;
        FUN_00642c50(iVar3 + 0x22,&local_8);
      }
      iVar3 = *(int *)(puVar1 + 4);
      local_2c = 0x5d6809;
      FUN_004030d4(local_48,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8);
      local_2c = 0x5d6818;
      FUN_004030a4(local_48,&DAT_005d6b28,0x1a);
      local_2c = 0x5d6823;
      FUN_00405194(&local_58,local_48);
      local_2c = local_58;
      uStack_30 = *(undefined4 *)
                   (PTR_DAT_0066b294 + *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8) * 4
                   );
      pwStack_34 = L") - ";
      uStack_38 = local_8;
      uStack_3c = 0x5d684f;
      FUN_00405330(&local_54,4);
      local_2c = 0x5d685d;
      FUN_004e18c4(*(undefined4 *)(param_1 + 0x310),local_54);
      local_2c = 0x5d6868;
      FUN_00645508(*(undefined4 *)(puVar1 + 4),&local_5c);
      if (local_5c != 0) {
        local_2c = 0x5d6879;
        FUN_00645508(*(undefined4 *)(puVar1 + 4),&local_60);
        local_2c = 0x5d688d;
        FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x168),local_60);
      }
    }
  }
  if (-1 < *(int *)(puVar1 + 8)) {
    local_2c = 0x5d68ac;
    iVar3 = FUN_0065208c(*(undefined4 *)
                          (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(puVar1 + 8) * 0x2f8));
    if (-1 < iVar3) {
      local_2c = 0x5d68c0;
      FUN_00466128(*(undefined4 *)(param_1 + 0x318),1);
      iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(puVar1 + 8) * 0x2f8);
      if (iVar3 < 1) {
        local_2c = 0x5d68f5;
        FUN_00642c50(0x143,&local_8);
      }
      else {
        local_2c = 0x5d68e6;
        FUN_00642c50(iVar3 + 0x22,&local_8);
      }
      iVar3 = *(int *)(puVar1 + 8);
      local_2c = 0x5d690b;
      FUN_004030d4(local_48,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8);
      local_2c = 0x5d691a;
      FUN_004030a4(local_48,&DAT_005d6b28,0x1a);
      local_2c = 0x5d6925;
      FUN_00405194(&local_68,local_48);
      local_2c = local_68;
      uStack_30 = *(undefined4 *)
                   (PTR_DAT_0066b294 + *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8) * 4
                   );
      pwStack_34 = L") - ";
      uStack_38 = local_8;
      uStack_3c = 0x5d6951;
      FUN_00405330(&local_64,4);
      local_2c = 0x5d695f;
      FUN_004e18c4(*(undefined4 *)(param_1 + 0x318),local_64);
      local_2c = 0x5d696a;
      FUN_00645508(*(undefined4 *)(puVar1 + 8),&local_6c);
      if (local_6c != 0) {
        local_2c = 0x5d697b;
        FUN_00645508(*(undefined4 *)(puVar1 + 8),&local_70);
        local_2c = 0x5d698f;
        FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x314) + 0x168),local_70);
      }
    }
  }
  if (-1 < *(int *)(puVar1 + 0xc)) {
    local_2c = 0x5d69ae;
    iVar3 = FUN_0065208c(*(undefined4 *)
                          (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(puVar1 + 0xc) * 0x2f8));
    if (-1 < iVar3) {
      local_2c = 0x5d69c2;
      FUN_00466128(*(undefined4 *)(param_1 + 800),1);
      iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(puVar1 + 0xc) * 0x2f8);
      if (iVar3 < 1) {
        local_2c = 0x5d69f7;
        FUN_00642c50(0x143,&local_8);
      }
      else {
        local_2c = 0x5d69e8;
        FUN_00642c50(iVar3 + 0x22,&local_8);
      }
      iVar3 = *(int *)(puVar1 + 0xc);
      local_2c = 0x5d6a0d;
      FUN_004030d4(local_48,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8);
      local_2c = 0x5d6a1c;
      FUN_004030a4(local_48,&DAT_005d6b28,0x1a);
      local_2c = 0x5d6a27;
      FUN_00405194(&local_78,local_48);
      local_2c = local_78;
      uStack_30 = *(undefined4 *)
                   (PTR_DAT_0066b294 + *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8) * 4
                   );
      pwStack_34 = L") - ";
      uStack_38 = local_8;
      uStack_3c = 0x5d6a53;
      FUN_00405330(&local_74,4);
      local_2c = 0x5d6a61;
      FUN_004e18c4(*(undefined4 *)(param_1 + 800),local_74);
      local_2c = 0x5d6a6c;
      FUN_00645508(*(undefined4 *)(puVar1 + 0xc),&local_7c);
      if (local_7c != 0) {
        local_2c = 0x5d6a7d;
        FUN_00645508(*(undefined4 *)(puVar1 + 0xc),&local_80);
        local_2c = 0x5d6a91;
        FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x31c) + 0x168),local_80);
      }
    }
  }
  local_2c = 0x5d6aa4;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x68),0xffffff);
  puVar2 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005d6b21;
  local_24 = (undefined1 *)0x5d6abe;
  FUN_004048f8(&local_80,2,puVar2);
  local_24 = (undefined1 *)0x5d6acb;
  FUN_00405008(&local_78,2);
  local_24 = (undefined1 *)0x5d6ad8;
  FUN_004048f8(&local_70,2);
  local_24 = (undefined1 *)0x5d6ae5;
  FUN_00405008(&local_68,2);
  local_24 = (undefined1 *)0x5d6af2;
  FUN_004048f8(&local_60,2);
  local_24 = (undefined1 *)0x5d6aff;
  FUN_00405008(&local_58,2);
  local_24 = (undefined1 *)0x5d6b0c;
  FUN_004048f8(&local_50,2);
  local_24 = (undefined1 *)0x5d6b19;
  FUN_00405008(&local_2c,10);
  return;
}

