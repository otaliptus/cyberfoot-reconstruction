// Address: 0057ceb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm10_XiButton1Click(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined *local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 0xc;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0057d2ad;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = 0x57cee4;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),0);
  local_2c = 0x57cef1;
  FUN_00466128(*(undefined4 *)(param_1 + 0x328),0);
  DAT_006d21b0 = 0;
  _DAT_006d21b4 =
       (double)CONCAT44(*(undefined4 *)
                         (PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0xc),
                        *(undefined4 *)
                         (PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10));
  DAT_006d21a0 = 0;
  DAT_006d21a4 = 0;
  _DAT_006d21a8 = 0;
  _DAT_006d21ac = 0;
  local_2c = 0x57cf4a;
  FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_c);
  if (local_c != 0) {
    local_2c = 0x57cf5e;
    FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_10);
    local_2c = 0x57cf69;
    FUN_0040343c(local_10,&local_8);
    if (local_8 == 0) {
      local_2c = 0x57cf7d;
      FUN_00466208(*(undefined4 *)(param_1 + 0x300),&stack0xffffffec);
      local_2c = 0x57cf85;
      iVar2 = FUN_00409ff8(unaff_EBX);
      if (0 < iVar2) {
        local_2c = 0x57cf97;
        FUN_00466208(*(undefined4 *)(param_1 + 0x300),&stack0xffffffe8);
        local_2c = 0x57cf9f;
        DAT_006d21a0 = FUN_00409ff8(unaff_ESI);
      }
    }
  }
  local_2c = 0x57cfb2;
  FUN_00466208(*(undefined4 *)(param_1 + 0x304),&stack0xffffffe4);
  if (unaff_EDI != 0) {
    local_2c = 0x57cfc6;
    FUN_00466208(*(undefined4 *)(param_1 + 0x304),&local_20);
    local_2c = 0x57cfd1;
    FUN_0040343c(local_20,&local_8);
    if (local_8 == 0) {
      local_2c = 0x57cfe5;
      FUN_00466208(*(undefined4 *)(param_1 + 0x304),&local_24);
      local_2c = 0x57cfed;
      iVar2 = FUN_00409ff8(local_24);
      if (0 < iVar2) {
        local_2c = 0x57cfff;
        FUN_00466208(*(undefined4 *)(param_1 + 0x304),&local_28);
        local_2c = 0x57d007;
        DAT_006d21a4 = FUN_00409ff8(local_28);
      }
    }
  }
  local_2c = 0x57d01a;
  FUN_00466208(*(undefined4 *)(param_1 + 0x308),&local_2c);
  if (local_2c != 0) {
    local_2c = 0x57d02e;
    FUN_00466208(*(undefined4 *)(param_1 + 0x308),&local_30);
    local_2c = 0x57d039;
    FUN_0040343c(local_30,&local_8);
    if (local_8 == 0) {
      local_2c = 0x57d04d;
      FUN_00466208(*(undefined4 *)(param_1 + 0x308),&local_34);
      local_2c = 0x57d055;
      iVar2 = FUN_00409ff8(local_34);
      if (0 < iVar2) {
        local_2c = 0x57d067;
        FUN_00466208(*(undefined4 *)(param_1 + 0x308),&local_38);
        local_2c = 0x57d06f;
        _DAT_006d21a8 = FUN_00409ff8(local_38);
      }
    }
  }
  local_2c = 0x57d082;
  FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_3c);
  if (local_3c != 0) {
    local_2c = 0x57d096;
    FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_40);
    local_2c = 0x57d0a1;
    FUN_0040343c(local_40,&local_8);
    if (local_8 == 0) {
      local_2c = 0x57d0b5;
      FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_44);
      local_2c = 0x57d0bd;
      iVar2 = FUN_00409ff8(local_44);
      if (0 < iVar2) {
        local_2c = 0x57d0cf;
        FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_48);
        local_2c = 0x57d0d7;
        _DAT_006d21ac = FUN_00409ff8(local_48);
      }
    }
  }
  iVar2 = 1;
  piVar3 = &DAT_006d21a0;
  piVar5 = &DAT_006d2190;
  do {
    if (*piVar5 - *(int *)(*(int *)PTR_DAT_0066af70 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8 + 0x200
                          + iVar2 * 4) < *piVar3) {
      local_2c = 0x57d11a;
      FUN_00642c50(0x2de,&local_4c);
      local_2c = 0x57d128;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_4c);
      goto LAB_0057d275;
    }
    iVar2 = iVar2 + 1;
    piVar5 = piVar5 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 != 5);
  if (DAT_006d21a0 + DAT_006d21a4 + _DAT_006d21a8 + _DAT_006d21ac != 0) {
    iVar2 = 1;
    piVar3 = &DAT_006d21a0;
    do {
      if (0 < *piVar3) {
        local_2c = *(int *)(*(int *)PTR_DAT_0066af70 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8 +
                            0x200 + iVar2 * 4);
        local_30 = (undefined *)0x57d18e;
        iVar4 = FUN_0057cd40(param_1,iVar2,*piVar3);
        DAT_006d21b0 = DAT_006d21b0 + iVar4;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 != 5);
    _DAT_006d21b4 = _DAT_006d21b4 + (double)_DAT_0057d2bc;
    local_2c = 0x57d1cf;
    local_50 = FUN_0057cd14(param_1,DAT_006d21a0 + DAT_006d21a4 + _DAT_006d21a8 + _DAT_006d21ac);
    _DAT_006d21b4 = (double)local_50 + _DAT_006d21b4;
    DAT_006d21b0 = DAT_006d21b0 + 100000;
    local_2c = 0x57d1f9;
    FUN_00642c50(0x2dc,&local_58);
    local_2c = local_58;
    local_30 = &DAT_0057d2c4;
    local_34 = 0x57d20e;
    FUN_00651ebc(DAT_006d21b0,&local_5c);
    local_34 = local_5c;
    local_38 = &DAT_0057d2d0;
    local_3c = 0x57d223;
    FUN_00642c50(0x2dd,&local_60);
    local_3c = local_60;
    local_40 = &DAT_0057d2dc;
    local_44 = DAT_006d21b8;
    local_48 = DAT_006d21b4;
    local_4c = 0x57d23f;
    FUN_0040d11c(&local_68);
    local_44 = 0x57d24a;
    FUN_004051d4(&local_64,local_68);
    local_44 = local_64;
    local_48 = 0x57d25a;
    FUN_00405330(&local_54,7);
    local_2c = 0x57d268;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_54);
    local_2c = 0x57d275;
    FUN_00466128(*(undefined4 *)(param_1 + 0x328),1);
  }
LAB_0057d275:
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_0057d2b4;
  local_24 = (undefined1 *)0x57d28a;
  FUN_004048d4(&local_68,local_28,puVar1);
  local_24 = (undefined1 *)0x57d297;
  FUN_00405008(&local_64,5);
  local_24 = (undefined1 *)0x57d29f;
  FUN_00404ff0(&local_4c);
  local_24 = (undefined1 *)0x57d2ac;
  FUN_004048f8(&local_48,0x10);
  return;
}

