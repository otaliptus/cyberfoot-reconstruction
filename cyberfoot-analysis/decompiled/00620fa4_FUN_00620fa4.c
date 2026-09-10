// Address: 00620fa4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00620fa4(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_EBX;
  int iVar8;
  int *piVar9;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_170;
  undefined4 local_16c;
  undefined *local_168;
  undefined1 local_164 [4];
  undefined4 local_160;
  undefined4 local_15c;
  undefined *local_158;
  undefined1 local_154 [24];
  undefined1 local_13c [20];
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined *local_120;
  undefined1 local_11c [4];
  undefined4 local_118;
  undefined1 local_114 [216];
  undefined4 uStackY_3c;
  undefined4 uStackY_38;
  undefined *puStackY_34;
  undefined *puStackY_30;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = &stack0xfffffffc;
  iVar7 = 0x2d;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puStack_24 = &LAB_006216da;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_0043b234(DAT_006d4918,0);
  FUN_00642c50(0x1fc,&stack0xffffffec);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),unaff_EBX);
  uVar1 = *(uint *)(PTR_DAT_0066ac78 + 0x62c);
  if (uVar1 < 4) {
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) {
      *(undefined4 *)PTR_DAT_0066aea4 = 6;
    }
    else {
      *(undefined4 *)PTR_DAT_0066aea4 = 8;
    }
  }
  else if (uVar1 == 4) {
    *(undefined4 *)PTR_DAT_0066aea4 = 4;
  }
  else if (uVar1 == 5) {
    *(undefined4 *)PTR_DAT_0066aea4 = 2;
  }
  else if (uVar1 == 6) {
    *(undefined4 *)PTR_DAT_0066aea4 = 2;
  }
  if (uVar1 == 4) {
    unaff_EDI = 0;
  }
  else if (uVar1 == 5) {
    unaff_EDI = 4;
  }
  else if (uVar1 == 6) {
    unaff_EDI = 6;
  }
  DAT_006d4798 = 0;
  if ((3 < (int)uVar1) && (iVar7 = *(int *)PTR_DAT_0066aea4, 0 < iVar7)) {
    iVar8 = 1;
    do {
      *(undefined4 *)(PTR_DAT_0066ad60 + (unaff_EDI + iVar8) * 0x30 + -0x28) =
           *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + iVar8 * 0x1bc);
      *(undefined4 *)(PTR_DAT_0066ad60 + (unaff_EDI + iVar8) * 0x30 + -0x24) =
           *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + iVar8 * 0x1bc);
      FUN_00409dd8(*(undefined4 *)(PTR_DAT_0066ad60 + (unaff_EDI + iVar8) * 0x30 + -0x28),local_11c)
      ;
      puStackY_30 = &DAT_006216f0;
      puStackY_34 = (undefined *)0x62113a;
      FUN_00409dd8(*(undefined4 *)(PTR_DAT_0066ad60 + (unaff_EDI + iVar8) * 0x30 + -0x24),&local_120
                  );
      puStackY_34 = local_120;
      uStackY_38 = 0x621150;
      FUN_00404c64(&local_118,3);
      FUN_00404b80(local_114,local_118,0xff);
      FUN_004030e0(PTR_DAT_0066ad60 + (unaff_EDI + iVar8) * 0x30 + -0x14,local_114,0x11);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(int *)(PTR_DAT_0066ac78 + 0x62c) = *(int *)(PTR_DAT_0066ac78 + 0x62c) + 1;
  DAT_006d4798 = 0;
  if (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 5) {
    FUN_0060ee88(param_1);
  }
  else {
    iVar7 = *(int *)PTR_DAT_0066aea4;
    if (0 < iVar7) {
      iVar8 = 1;
      do {
        iVar3 = (unaff_EDI + iVar8) * 0x30;
        if (*(int *)(PTR_DAT_0066ad60 + iVar3 + -0x24) < *(int *)(PTR_DAT_0066ad60 + iVar3 + -0x28))
        {
          FUN_006207c4(param_1,unaff_EDI + iVar8,1);
        }
        else if (*(int *)(PTR_DAT_0066ad60 + iVar3 + -0x28) <
                 *(int *)(PTR_DAT_0066ad60 + iVar3 + -0x24)) {
          FUN_006207c4(param_1,unaff_EDI + iVar8,2);
        }
        else {
          FUN_00622e48(param_1,unaff_EDI + iVar8);
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (DAT_006d4798 == 0) {
      FUN_00621c90(param_1);
    }
    else {
      if (0 < DAT_006d4798) {
        piVar9 = &DAT_006d44bc;
        iVar7 = DAT_006d4798;
        do {
          iVar8 = *piVar9;
          if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                        *(int *)(PTR_DAT_0066ad60 + iVar8 * 0x30 + -0x30) * 0x2f8) == '\0') &&
             (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                       *(int *)(PTR_DAT_0066ad60 + iVar8 * 0x30 + -0x2c) * 0x2f8) == '\0')) {
            if (PTR_DAT_0066ac78[0xda] == '\0') {
              iVar8 = FUN_004032c8(7);
              iVar3 = iVar8 + 3;
              iVar4 = FUN_004032c8(7);
              iVar5 = iVar4 + 3;
              iVar6 = FUN_006233cc(param_1,*(undefined4 *)
                                            (PTR_DAT_0066ad60 + *piVar9 * 0x30 + -0x30),
                                   *(undefined4 *)(PTR_DAT_0066ad60 + *piVar9 * 0x30 + -0x2c));
              *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x170 + iVar6 * 0x1bc) = 1;
              if (iVar3 < iVar5) {
                FUN_004030d4(local_13c,PTR_DAT_0066ad60 + *piVar9 * 0x30 + -0x14);
                FUN_004030a4(local_13c,&DAT_006216f4,0x12);
                FUN_004030d4(local_154,local_13c);
                FUN_004030a4(local_154,&DAT_006216f8,0x14);
                FUN_00404b48(local_128,local_154);
                puStackY_30 = (undefined *)0x621456;
                FUN_00409dd8(iVar4 + 2,&local_158);
                puStackY_30 = local_158;
                puStackY_34 = &DAT_006216f0;
                uStackY_38 = 0x62146f;
                FUN_00409dd8(iVar5,&local_15c);
                uStackY_38 = local_15c;
                uStackY_3c = 0x621485;
                FUN_00404c64(&local_124,4);
                FUN_00404b80(local_114,local_124,0xff);
                FUN_004030e0(PTR_DAT_0066ad60 + *piVar9 * 0x30 + -0x14,local_114,0x11);
                *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x174 + iVar6 * 0x1bc) = iVar4 + 2;
                *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x178 + iVar6 * 0x1bc) = iVar5;
                FUN_006207c4(param_1,*piVar9,2);
              }
              else {
                FUN_004030d4(local_13c,PTR_DAT_0066ad60 + *piVar9 * 0x30 + -0x14);
                FUN_004030a4(local_13c,&DAT_006216f4,0x12);
                FUN_004030d4(local_154,local_13c);
                FUN_004030a4(local_154,&DAT_006216f8,0x14);
                FUN_00404b48(local_164,local_154);
                puStackY_30 = (undefined *)0x62156e;
                FUN_00409dd8(iVar3,&local_168);
                puStackY_30 = local_168;
                puStackY_34 = &DAT_006216f0;
                uStackY_38 = 0x621588;
                FUN_00409dd8(iVar8 + 2,&local_16c);
                uStackY_38 = local_16c;
                uStackY_3c = 0x62159e;
                FUN_00404c64(&local_160,4);
                FUN_00404b80(local_114,local_160,0xff);
                FUN_004030e0(PTR_DAT_0066ad60 + *piVar9 * 0x30 + -0x14,local_114,0x11);
                *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x174 + iVar6 * 0x1bc) = iVar3;
                *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x178 + iVar6 * 0x1bc) = iVar8 + 2;
                FUN_006207c4(param_1,*piVar9,1);
              }
            }
            else {
              *(int *)PTR_DAT_0066ad84 = iVar8;
              *(int *)PTR_DAT_0066b648 = *piVar9;
              *(undefined4 *)PTR_DAT_0066adb0 =
                   *(undefined4 *)(PTR_DAT_0066ad60 + *piVar9 * 0x30 + -0x30);
              *(undefined4 *)PTR_DAT_0066ae1c =
                   *(undefined4 *)(PTR_DAT_0066ad60 + *piVar9 * 0x30 + -0x2c);
              FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005fb2c4,PTR_DAT_0066b470);
              (**(code **)(**(int **)PTR_DAT_0066b470 + 0xec))();
            }
          }
          else {
            *(int *)PTR_DAT_0066ad84 = iVar8;
            *(int *)PTR_DAT_0066b648 = *piVar9;
            *(undefined4 *)PTR_DAT_0066b134 = 1;
            *(undefined4 *)PTR_DAT_0066adb0 =
                 *(undefined4 *)(PTR_DAT_0066ad60 + *piVar9 * 0x30 + -0x30);
            *(undefined4 *)PTR_DAT_0066ae1c =
                 *(undefined4 *)(PTR_DAT_0066ad60 + *piVar9 * 0x30 + -0x2c);
            FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005fc348,PTR_DAT_0066b3f4);
            (**(code **)(**(int **)PTR_DAT_0066b3f4 + 0xec))();
          }
          piVar9 = piVar9 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      FUN_00621c90(param_1);
      FUN_00642c50(0x1df,&local_170);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_170);
      FUN_0043b234(DAT_006d4918,0);
      FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
      puStackY_30 = (undefined *)0x621664;
      Sleep(3000);
    }
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 8) {
      FUN_006218d8(param_1);
    }
    else if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 9) {
      FUN_00621ab4(param_1,PTR_DAT_0066ac78);
    }
    FUN_0060ee88(param_1);
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006216e1;
  puStack_24 = (undefined1 *)0x6216b1;
  FUN_00404ff0(&local_170,uStack_28,puVar2);
  puStack_24 = (undefined1 *)0x6216c1;
  FUN_004048f8(&local_16c,6);
  puStack_24 = (undefined1 *)0x6216d1;
  FUN_004048f8(local_128,5);
  puStack_24 = (undefined1 *)0x6216d9;
  FUN_00404ff0(&stack0xffffffec);
  return;
}

