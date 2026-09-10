// Address: 005751d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005751d0(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined4 unaff_EBX;
  int *piVar6;
  undefined *unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar5 = 0xb;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puStack_20 = &LAB_0057545a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = 1;
  piVar6 = (int *)PTR_DAT_0066ad60;
  do {
    iVar5 = 1;
    do {
      puStack_28 = &DAT_00575470;
      puStack_2c = (undefined *)0x575212;
      FUN_00409dd8(local_8,&stack0xffffffec);
      uStack_30 = 0x57521f;
      puStack_2c = unaff_ESI;
      FUN_00409dd8(iVar5,&stack0xffffffe8);
      puStack_34 = (undefined *)0x57522f;
      uStack_30 = unaff_EDI;
      FUN_00404c64(&stack0xfffffff0,3);
      puStack_34 = (undefined *)0x57523c;
      uVar2 = FUN_00427360(DAT_006d2070,unaff_EBX);
      if (iVar5 == 1) {
        puStack_34 = (undefined *)0x575259;
        FUN_004030d4(&local_38,*(int *)PTR_DAT_0066af70 + *piVar6 * 0x2f8);
        puStack_34 = (undefined *)0x575268;
        FUN_004030a4(&local_38,&DAT_00575474,0x1a);
        puStack_34 = (undefined *)0x575273;
        FUN_00404b48(&local_1c,&local_38);
        puStack_34 = (undefined *)0x57527d;
        FUN_00466238(uVar2,local_1c);
      }
      else {
        puStack_34 = (undefined *)0x57528c;
        FUN_004030d4(&local_38,&DAT_00575474);
        puStack_34 = (undefined *)0x5752a5;
        FUN_004030a4(&local_38,*(int *)PTR_DAT_0066af70 + piVar6[1] * 0x2f8,0x1a);
        puStack_34 = (undefined *)0x5752b0;
        FUN_00404b48(&local_3c,&local_38);
        puStack_34 = (undefined *)0x5752ba;
        FUN_00466238(uVar2,local_3c);
      }
      puStack_34 = &DAT_00575480;
      local_38 = 0x5752ca;
      FUN_00409dd8(local_8,&local_44);
      local_38 = local_44;
      local_3c = 0x5752d7;
      FUN_00409dd8(iVar5,&local_48);
      local_3c = local_48;
      local_40 = 0x5752e7;
      FUN_00404c64(&local_40,3);
      puStack_28 = (undefined *)0x5752f4;
      iVar3 = FUN_00427360(DAT_006d2070,local_40);
      if (iVar5 == 1) {
        puStack_28 = (undefined *)0x575306;
        uVar2 = FUN_0042d5c8(*(undefined4 *)(iVar3 + 0x168));
        puStack_28 = (undefined *)0x575329;
        FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
                     *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar6 * 0x2f8),uVar2);
        puStack_28 = (undefined *)0x57536e;
        FUN_00409dd8(local_8,&local_50);
        puStack_28 = (undefined *)0x57537e;
        FUN_00404bf0(&local_4c,&DAT_0057548c,local_50);
        puStack_28 = (undefined *)0x57538b;
        iVar3 = FUN_00427360(DAT_006d2070,local_4c);
        puStack_28 = (undefined *)0x57539e;
        iVar4 = FUN_0064a924(7,4,*piVar6);
        if (-1 < iVar4) {
          puStack_28 = (undefined *)0x5753bf;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 8 + iVar4 * 600),&local_58);
          puStack_28 = (undefined *)local_58;
          puStack_2c = &DAT_00575498;
          uStack_30 = 0x5753df;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0xc + iVar4 * 600),&local_5c);
          uStack_30 = local_5c;
          puStack_34 = (undefined *)0x5753ef;
          FUN_00404c64(&local_54,3);
          puStack_28 = (undefined *)0x5753f9;
          FUN_00466238(iVar3,local_54);
          *(int *)(iVar3 + 0xc) = iVar4;
          puStack_28 = (undefined *)0x57540d;
          FUN_0042a66c(*(undefined4 *)(iVar3 + 0x68),DAT_0057549c);
          puStack_28 = (undefined *)0x575418;
          FUN_00466414(iVar3,CONCAT22(extraout_var,0xffeb));
        }
      }
      else {
        puStack_28 = (undefined *)0x575336;
        uVar2 = FUN_0042d5c8(*(undefined4 *)(iVar3 + 0x168));
        puStack_28 = (undefined *)0x57535a;
        FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
                     *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + piVar6[1] * 0x2f8),uVar2);
      }
      puVar1 = local_1c;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 3);
    local_8 = local_8 + 1;
    piVar6 = piVar6 + 0xc;
  } while (local_8 != 9);
  *in_FS_OFFSET = uStack_24;
  local_1c = &LAB_00575461;
  puStack_20 = (undefined1 *)0x57544c;
  FUN_004048f8(&local_5c,9,puVar1);
  puStack_20 = (undefined1 *)0x575459;
  FUN_004048f8(&local_1c,4);
  return;
}

