// Address: 005c89a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm68_FormCreate(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 0x11;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_005c9123;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_2c = 0x5c89d1;
  local_8 = param_1;
  FUN_00642c50(0x296,&local_10);
  local_2c = 0x5c89dc;
  FUN_00404b6c(&local_c,local_10);
  local_2c = 0x5c89ed;
  FUN_00466238(*(undefined4 *)(local_8 + 0x304),local_c);
  local_2c = 0x5c89fa;
  FUN_00642c50(0x297,&stack0xffffffec);
  local_2c = 0x5c8a0b;
  FUN_004e1414(*(undefined4 *)(local_8 + 0x33c),unaff_EBX);
  local_2c = 0x5c8a18;
  FUN_00642c50(0x298,&stack0xffffffe8);
  local_2c = 0x5c8a29;
  FUN_004e1414(*(undefined4 *)(local_8 + 0x338),unaff_ESI);
  local_2c = 0x5c8a36;
  FUN_00642c50(0x299,&stack0xffffffe4);
  local_2c = 0x5c8a47;
  FUN_004e1414(*(undefined4 *)(local_8 + 0x340),unaff_EDI);
  local_2c = 0x5c8a54;
  FUN_00642c50(0x1c2,&local_20);
  local_2c = 0x5c8a65;
  FUN_0054dcb8(*(undefined4 *)(local_8 + 0x330),local_20);
  local_2c = 0x5c8a72;
  FUN_00642c50(0x1c1,&local_24);
  local_2c = 0x5c8a83;
  FUN_0054dcb8(*(undefined4 *)(local_8 + 0x334),local_24);
  _DAT_006d2c38 = 0;
  local_2c = 0x5c8a9b;
  uVar3 = FUN_004032c8(100);
  if ((int)uVar3 < 0x47) {
    if (uVar3 < 0x29) {
      local_2c = 0x5c8af7;
      uVar4 = FUN_00402c38();
      _DAT_006d2c38 =
           (longlong)
           ROUND((float)*(longlong *)
                         (*(int *)PTR_DAT_0066b5b8 + 0x40 + *(int *)PTR_DAT_0066afb0 * 0x130) +
                 (float)CONCAT44(extraout_EDX,uVar4) * _DAT_005c9138);
      uStack_28 = extraout_EDX;
      goto LAB_005c8ca4;
    }
    if (uVar3 - 0x29 < 0x1e) {
      local_2c = 0x5c8b4f;
      uVar4 = FUN_00402c38();
      _DAT_006d2c38 =
           (longlong)
           ROUND((float)*(longlong *)
                         (*(int *)PTR_DAT_0066b5b8 + 0x40 + *(int *)PTR_DAT_0066afb0 * 0x130) +
                 (float)CONCAT44(extraout_EDX_00,uVar4) * _DAT_005c9138);
      uStack_28 = extraout_EDX_00;
      goto LAB_005c8ca4;
    }
  }
  else {
    if (uVar3 - 0x47 < 0xf) {
      local_2c = 0x5c8ba7;
      uVar4 = FUN_00402c38();
      _DAT_006d2c38 =
           (longlong)
           ROUND((float)*(longlong *)
                         (*(int *)PTR_DAT_0066b5b8 + 0x40 + *(int *)PTR_DAT_0066afb0 * 0x130) +
                 (float)CONCAT44(extraout_EDX_01,uVar4) * _DAT_005c9138);
      uStack_28 = extraout_EDX_01;
      goto LAB_005c8ca4;
    }
    if (uVar3 - 0x56 < 10) {
      local_2c = 0x5c8bfd;
      uVar4 = FUN_00402c38();
      _DAT_006d2c38 =
           (longlong)
           ROUND((float)*(longlong *)
                         (*(int *)PTR_DAT_0066b5b8 + 0x40 + *(int *)PTR_DAT_0066afb0 * 0x130) +
                 (float)CONCAT44(extraout_EDX_02,uVar4) * _DAT_005c9138);
      uStack_28 = extraout_EDX_02;
      goto LAB_005c8ca4;
    }
    if (uVar3 - 0x60 < 4) {
      local_2c = 0x5c8c52;
      uVar4 = FUN_00402c38();
      _DAT_006d2c38 =
           (longlong)
           ROUND((float)*(longlong *)
                         (*(int *)PTR_DAT_0066b5b8 + 0x40 + *(int *)PTR_DAT_0066afb0 * 0x130) +
                 (float)CONCAT44(extraout_EDX_03,uVar4) * _DAT_005c9138);
      uStack_28 = extraout_EDX_03;
      goto LAB_005c8ca4;
    }
  }
  _DAT_006d2c38 =
       CONCAT44(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x44 + *(int *)PTR_DAT_0066afb0 * 0x130),
                *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + *(int *)PTR_DAT_0066afb0 * 0x130))
  ;
LAB_005c8ca4:
  iVar1 = *(int *)PTR_DAT_0066afb0;
  if ((*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + iVar1 * 0x130) != '\0') &&
     ((float10)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x48 + iVar1 * 0x130) <=
      (float10)_DAT_006d2c38)) {
    local_2c = 0x5c8cfe;
    uVar4 = FUN_00402c38();
    _DAT_006d2c38 =
         (longlong)
         ROUND((float)*(longlong *)
                       (*(int *)PTR_DAT_0066b5b8 + 0x48 + *(int *)PTR_DAT_0066afb0 * 0x130) -
               (float)CONCAT44(extraout_EDX_04,uVar4) * _DAT_005c9138);
    uStack_28 = extraout_EDX_04;
  }
  if ((float)_DAT_006d2c38 == _DAT_005c9170) {
    _DAT_006d2c38 =
         CONCAT44(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x44 + iVar1 * 0x130),
                  *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + iVar1 * 0x130));
  }
  local_2c = 0x5c8d6a;
  FUN_00645508(*(undefined4 *)PTR_DAT_0066ad40,&local_30);
  if (local_30 != (undefined *)0x0) {
    local_2c = 0x5c8d7f;
    FUN_00645508(*(undefined4 *)PTR_DAT_0066ad40,&local_34);
    local_2c = 0x5c8d96;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(local_8 + 0x30c) + 0x168),local_34);
  }
  local_2c = 0x5c8db2;
  FUN_00404b48(&local_38,*(int *)PTR_DAT_0066af70 + *(int *)PTR_DAT_0066ad40 * 0x2f8);
  local_2c = 0x5c8dc3;
  FUN_00466238(*(undefined4 *)(local_8 + 0x300),local_38);
  local_2c = 0x5c8ddf;
  FUN_00404b48(&local_3c,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066afb0 * 0x130);
  local_2c = 0x5c8df0;
  FUN_00466238(*(undefined4 *)(local_8 + 0x308),local_3c);
  local_2c = 0x5c8e01;
  uVar4 = FUN_00402c38();
  local_2c = 0x5c8e09;
  FUN_006468f4(uVar4,&local_48);
  local_2c = 0x5c8e19;
  FUN_004052cc(&local_44,&DAT_005c9178,local_48);
  local_2c = 0x5c8e24;
  FUN_00404b6c(&local_40,local_44);
  local_2c = 0x5c8e35;
  FUN_00466238(*(undefined4 *)(local_8 + 0x2fc),local_40);
  local_2c = 0x5c8e51;
  FUN_00404b48(&local_4c,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066afb0 * 0x130);
  local_2c = 0x5c8e62;
  FUN_00466238(*(undefined4 *)(local_8 + 0x310),local_4c);
  local_2c = 0x5c8e6f;
  FUN_00642c50(0x31,&local_58);
  local_2c = local_58;
  local_30 = &DAT_005c9180;
  local_34 = 0x5c8e93;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + *(int *)PTR_DAT_0066afb0 * 0x130),
               &local_60);
  local_34 = 0x5c8e9e;
  FUN_004051d4(&local_5c,local_60);
  local_34 = local_5c;
  local_38 = 0x5c8eae;
  FUN_00405330(&local_54,3);
  local_38 = 0x5c8eb9;
  FUN_00404b6c(&local_50,local_54);
  local_38 = 0x5c8eca;
  FUN_00466238(*(undefined4 *)(local_8 + 0x318),local_50);
  local_38 = 0x5c8ed7;
  FUN_00642c50(0x32,&local_6c);
  local_38 = local_6c;
  local_3c = &DAT_005c918c;
  local_40 = 0x5c8efb;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + *(int *)PTR_DAT_0066afb0 * 0x130),
               &local_74);
  local_40 = 0x5c8f06;
  FUN_004051d4(&local_70,local_74);
  local_40 = local_70;
  local_44 = (undefined1 *)0x5c8f16;
  FUN_00405330(&local_68,3);
  local_44 = (undefined1 *)0x5c8f21;
  FUN_00404b6c(&local_64,local_68);
  local_44 = (undefined1 *)0x5c8f32;
  FUN_00466238(*(undefined4 *)(local_8 + 0x31c),local_64);
  local_48 = &LAB_005c8f81;
  local_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_4c;
  local_50 = 0x5c8f66;
  local_44 = &stack0xfffffffc;
  FUN_00404b6c(&local_78,
               *(undefined4 *)
                (PTR_DAT_0066b3a4 +
                *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + *(int *)PTR_DAT_0066afb0 * 0x130) * 4));
  local_50 = 0x5c8f77;
  FUN_00466238(*(undefined4 *)(local_8 + 800),local_78);
  *in_FS_OFFSET = local_4c;
  local_48 = &LAB_005c8fda;
  local_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_4c;
  local_50 = 0x5c8fbf;
  local_44 = &stack0xfffffffc;
  FUN_00404b6c(&local_7c,
               *(undefined4 *)
                (PTR_DAT_0066b3a4 +
                *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + *(int *)PTR_DAT_0066afb0 * 0x130) * 4));
  local_50 = 0x5c8fd0;
  FUN_00466238(*(undefined4 *)(local_8 + 0x324),local_7c);
  *in_FS_OFFSET = local_4c;
  local_44 = (undefined1 *)0x5c900a;
  FUN_00404b6c(&local_80,
               *(undefined4 *)
                (PTR_DAT_0066b084 +
                *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + *(int *)PTR_DAT_0066afb0 * 0x130) * 4));
  local_44 = (undefined1 *)0x5c901b;
  FUN_00466238(*(undefined4 *)(local_8 + 0x328),local_80);
  local_44 = (undefined1 *)0x5c902b;
  FUN_00642c50(0x33,&local_8c);
  local_44 = local_8c;
  local_48 = &DAT_005c918c;
  local_4c = 0x5c9055;
  uVar4 = FUN_00402c38();
  local_4c = 0x5c9060;
  FUN_006468f4(uVar4,&local_90);
  local_4c = local_90;
  local_50 = 0x5c9076;
  FUN_00405330(&local_88,3);
  local_50 = 0x5c9084;
  FUN_00404b6c(&local_84,local_88);
  local_50 = 0x5c9095;
  FUN_00466238(*(undefined4 *)(local_8 + 0x32c),local_84);
  puVar2 = local_44;
  *in_FS_OFFSET = local_4c;
  local_44 = &LAB_005c912d;
  local_48 = (undefined1 *)0x5c90b2;
  FUN_00405008(&local_90,3,puVar2);
  local_48 = (undefined1 *)0x5c90bf;
  FUN_004048f8(&local_84,5);
  local_48 = (undefined1 *)0x5c90cc;
  FUN_00405008(&local_70,3);
  local_48 = (undefined1 *)0x5c90d9;
  FUN_004048f8(&local_64,2);
  local_48 = (undefined1 *)0x5c90e6;
  FUN_00405008(&local_5c,3);
  local_48 = (undefined1 *)0x5c90f3;
  FUN_004048f8(&local_50,2);
  local_48 = (undefined1 *)0x5c9100;
  FUN_00405008(&local_48,2);
  local_48 = (undefined1 *)0x5c910d;
  FUN_004048f8(&local_40,5);
  local_48 = (undefined1 *)0x5c911a;
  FUN_00405008(&local_24,6);
  local_48 = (undefined1 *)0x5c9122;
  FUN_004048d4(&local_c);
  return;
}

