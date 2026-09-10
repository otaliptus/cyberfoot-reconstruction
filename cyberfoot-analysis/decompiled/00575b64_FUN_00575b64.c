// Address: 00575b64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00575b64(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 extraout_var;
  int *piVar7;
  int iVar8;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined *puStack_38;
  undefined1 *puStack_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined *local_20;
  undefined4 uVar9;
  int local_10;
  uint local_8;
  
  local_20 = &stack0xfffffffc;
  iVar5 = 0xc;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_24 = &LAB_00575e4d;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 7) {
    local_8 = 0xf;
    uVar6 = 0x10;
    local_10 = 0;
    uVar9 = 7;
  }
  else {
    local_8 = 7;
    uVar6 = 8;
    local_10 = 8;
    uVar9 = 6;
  }
  if (local_8 <= uVar6) {
    iVar5 = (uVar6 - local_8) + 1;
    piVar7 = (int *)(PTR_DAT_0066ad60 + local_8 * 0x30 + -0x30);
    local_20 = &stack0xfffffffc;
    do {
      iVar8 = 1;
      do {
        puStack_2c = &DAT_00575e64;
        puStack_30 = (undefined *)0x575bfc;
        FUN_00409dd8(local_8 + local_10,&local_20);
        puStack_30 = local_20;
        puStack_34 = (undefined1 *)0x575c09;
        FUN_00409dd8(iVar8,&local_24);
        puStack_34 = local_24;
        puStack_38 = (undefined *)0x575c19;
        FUN_00404c64(&stack0xffffffe4,3);
        puStack_38 = (undefined *)0x575c26;
        uVar2 = FUN_00427360(DAT_006d2070,unaff_EDI);
        if (iVar8 == 1) {
          puStack_38 = (undefined *)0x575c43;
          FUN_004030d4(&local_44,*(int *)PTR_DAT_0066af70 + *piVar7 * 0x2f8);
          puStack_38 = (undefined *)0x575c52;
          FUN_004030a4(&local_44,&DAT_00575e68,0x1a);
          puStack_38 = (undefined *)0x575c5d;
          FUN_00404b48(&local_28,&local_44);
          puStack_38 = (undefined *)0x575c67;
          FUN_00466238(uVar2,local_28);
        }
        else {
          puStack_38 = (undefined *)0x575c76;
          FUN_004030d4(&local_44,&DAT_00575e68);
          puStack_38 = (undefined *)0x575c8f;
          FUN_004030a4(&local_44,*(int *)PTR_DAT_0066af70 + piVar7[1] * 0x2f8,0x1a);
          puStack_38 = (undefined *)0x575c9a;
          FUN_00404b48(&local_48,&local_44);
          puStack_38 = (undefined *)0x575ca4;
          FUN_00466238(uVar2,local_48);
        }
        puStack_38 = &DAT_00575e74;
        uStack_3c = 0x575cb7;
        FUN_00409dd8(local_8 + local_10,&local_50);
        uStack_3c = local_50;
        uStack_40 = 0x575cc4;
        FUN_00409dd8(iVar8,&local_54);
        uStack_40 = local_54;
        local_44 = 0x575cd4;
        FUN_00404c64(&local_4c,3);
        puStack_2c = (undefined *)0x575ce1;
        iVar3 = FUN_00427360(DAT_006d2070,local_4c);
        if (iVar8 == 1) {
          puStack_2c = (undefined *)0x575cf3;
          uVar2 = FUN_0042d5c8(*(undefined4 *)(iVar3 + 0x168));
          puStack_2c = (undefined *)0x575d16;
          FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
                       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar7 * 0x2f8),uVar2);
          puStack_2c = (undefined *)0x575d5e;
          FUN_00409dd8(local_8 + local_10,&local_5c);
          puStack_2c = (undefined *)0x575d6e;
          FUN_00404bf0(&local_58,&DAT_00575e80,local_5c);
          puStack_2c = (undefined *)0x575d7b;
          iVar3 = FUN_00427360(DAT_006d2070,local_58);
          puStack_2c = (undefined *)0x575d92;
          iVar4 = FUN_0064a924(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),uVar9,*piVar7);
          if (-1 < iVar4) {
            puStack_2c = (undefined *)0x575db3;
            FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 8 + iVar4 * 600),&local_64);
            puStack_2c = (undefined *)local_64;
            puStack_30 = &DAT_00575e8c;
            puStack_34 = (undefined1 *)0x575dd3;
            FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0xc + iVar4 * 600),&local_68);
            puStack_34 = local_68;
            puStack_38 = (undefined *)0x575de3;
            FUN_00404c64(&local_60,3);
            puStack_2c = (undefined *)0x575ded;
            FUN_00466238(iVar3,local_60);
            *(int *)(iVar3 + 0xc) = iVar4;
            puStack_2c = (undefined *)0x575e01;
            FUN_0042a66c(*(undefined4 *)(iVar3 + 0x68),DAT_00575e90);
            puStack_2c = (undefined *)0x575e0c;
            FUN_00466414(iVar3,CONCAT22(extraout_var,0xffeb));
          }
        }
        else {
          puStack_2c = (undefined *)0x575d23;
          uVar2 = FUN_0042d5c8(*(undefined4 *)(iVar3 + 0x168));
          puStack_2c = (undefined *)0x575d47;
          FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
                       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + piVar7[1] * 0x2f8),uVar2);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 3);
      local_8 = local_8 + 1;
      piVar7 = piVar7 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_00575e54;
  local_24 = (undefined1 *)0x575e3f;
  FUN_004048f8(&local_68,9,puVar1);
  local_24 = (undefined1 *)0x575e4c;
  FUN_004048f8(&local_28,4);
  return;
}

