// Address: 00620858
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00620858(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_EBX;
  int iVar7;
  int *piVar8;
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
  iVar6 = 0x2d;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puStack_24 = &LAB_00620f81;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_0043b234(DAT_006d4918,0);
  FUN_00642c50(0x1fc,&stack0xffffffec);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),unaff_EBX);
  iVar6 = *(int *)(PTR_DAT_0066ac78 + 0x62c);
  switch(iVar6) {
  case 0:
  case 1:
  case 2:
  case 3:
    *(undefined4 *)PTR_DAT_0066aea4 = 0x10;
    break;
  case 4:
    *(undefined4 *)PTR_DAT_0066aea4 = 8;
    break;
  case 5:
    *(undefined4 *)PTR_DAT_0066aea4 = 4;
    break;
  case 6:
    *(undefined4 *)PTR_DAT_0066aea4 = 2;
    break;
  case 7:
    *(undefined4 *)PTR_DAT_0066aea4 = 2;
  }
  if (iVar6 == 4) {
    unaff_EDI = 0;
  }
  else if (iVar6 == 5) {
    unaff_EDI = 8;
  }
  else if (iVar6 == 6) {
    unaff_EDI = 0xc;
  }
  else if (iVar6 == 7) {
    unaff_EDI = 0xe;
  }
  DAT_006d4798 = 0;
  if ((3 < iVar6) && (iVar6 = *(int *)PTR_DAT_0066aea4, 0 < iVar6)) {
    iVar7 = 1;
    do {
      *(undefined4 *)(PTR_DAT_0066ad60 + (unaff_EDI + iVar7) * 0x30 + -0x28) =
           *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + iVar7 * 0x1bc);
      *(undefined4 *)(PTR_DAT_0066ad60 + (unaff_EDI + iVar7) * 0x30 + -0x24) =
           *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + iVar7 * 0x1bc);
      FUN_00409dd8(*(undefined4 *)(PTR_DAT_0066ad60 + (unaff_EDI + iVar7) * 0x30 + -0x28),local_11c)
      ;
      puStackY_30 = &DAT_00620f98;
      puStackY_34 = (undefined *)0x620a06;
      FUN_00409dd8(*(undefined4 *)(PTR_DAT_0066ad60 + (unaff_EDI + iVar7) * 0x30 + -0x24),&local_120
                  );
      puStackY_34 = local_120;
      uStackY_38 = 0x620a1c;
      FUN_00404c64(&local_118,3);
      FUN_00404b80(local_114,local_118,0xff);
      FUN_004030e0(PTR_DAT_0066ad60 + (unaff_EDI + iVar7) * 0x30 + -0x14,local_114,0x11);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(int *)(PTR_DAT_0066ac78 + 0x62c) = *(int *)(PTR_DAT_0066ac78 + 0x62c) + 1;
  DAT_006d4798 = 0;
  if (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 5) {
    FUN_0060ee88(param_1);
  }
  else {
    iVar6 = *(int *)PTR_DAT_0066aea4;
    if (0 < iVar6) {
      iVar7 = 1;
      do {
        iVar2 = (unaff_EDI + iVar7) * 0x30;
        if (*(int *)(PTR_DAT_0066ad60 + iVar2 + -0x24) < *(int *)(PTR_DAT_0066ad60 + iVar2 + -0x28))
        {
          FUN_00620730(param_1,unaff_EDI + iVar7,1);
        }
        else if (*(int *)(PTR_DAT_0066ad60 + iVar2 + -0x28) <
                 *(int *)(PTR_DAT_0066ad60 + iVar2 + -0x24)) {
          FUN_00620730(param_1,unaff_EDI + iVar7,2);
        }
        else {
          FUN_00622e48(param_1,unaff_EDI + iVar7);
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (DAT_006d4798 == 0) {
      FUN_00621d38(param_1);
    }
    else {
      if (0 < DAT_006d4798) {
        piVar8 = &DAT_006d44bc;
        iVar6 = DAT_006d4798;
        do {
          iVar7 = *piVar8;
          if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                        *(int *)(PTR_DAT_0066ad60 + iVar7 * 0x30 + -0x30) * 0x2f8) == '\0') &&
             (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                       *(int *)(PTR_DAT_0066ad60 + iVar7 * 0x30 + -0x2c) * 0x2f8) == '\0')) {
            if (PTR_DAT_0066ac78[0xda] == '\0') {
              iVar7 = FUN_004032c8(7);
              iVar2 = iVar7 + 3;
              iVar3 = FUN_004032c8(7);
              iVar4 = iVar3 + 3;
              iVar5 = FUN_006233cc(param_1,*(undefined4 *)
                                            (PTR_DAT_0066ad60 + *piVar8 * 0x30 + -0x30),
                                   *(undefined4 *)(PTR_DAT_0066ad60 + *piVar8 * 0x30 + -0x2c));
              *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x170 + iVar5 * 0x1bc) = 1;
              if (iVar2 < iVar4) {
                FUN_004030d4(local_13c,PTR_DAT_0066ad60 + *piVar8 * 0x30 + -0x14);
                FUN_004030a4(local_13c,&DAT_00620f9c,0x12);
                FUN_004030d4(local_154,local_13c);
                FUN_004030a4(local_154,&DAT_00620fa0,0x14);
                FUN_00404b48(local_128,local_154);
                puStackY_30 = (undefined *)0x620d22;
                FUN_00409dd8(iVar3 + 2,&local_158);
                puStackY_30 = local_158;
                puStackY_34 = &DAT_00620f98;
                uStackY_38 = 0x620d3b;
                FUN_00409dd8(iVar4,&local_15c);
                uStackY_38 = local_15c;
                uStackY_3c = 0x620d51;
                FUN_00404c64(&local_124,4);
                FUN_00404b80(local_114,local_124,0xff);
                FUN_004030e0(PTR_DAT_0066ad60 + *piVar8 * 0x30 + -0x14,local_114,0x11);
                *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x174 + iVar5 * 0x1bc) = iVar3 + 2;
                *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x178 + iVar5 * 0x1bc) = iVar4;
                FUN_00620730(param_1,*piVar8,2);
              }
              else {
                FUN_004030d4(local_13c,PTR_DAT_0066ad60 + *piVar8 * 0x30 + -0x14);
                FUN_004030a4(local_13c,&DAT_00620f9c,0x12);
                FUN_004030d4(local_154,local_13c);
                FUN_004030a4(local_154,&DAT_00620fa0,0x14);
                FUN_00404b48(local_164,local_154);
                puStackY_30 = (undefined *)0x620e3a;
                FUN_00409dd8(iVar2,&local_168);
                puStackY_30 = local_168;
                puStackY_34 = &DAT_00620f98;
                uStackY_38 = 0x620e54;
                FUN_00409dd8(iVar7 + 2,&local_16c);
                uStackY_38 = local_16c;
                uStackY_3c = 0x620e6a;
                FUN_00404c64(&local_160,4);
                FUN_00404b80(local_114,local_160,0xff);
                FUN_004030e0(PTR_DAT_0066ad60 + *piVar8 * 0x30 + -0x14,local_114,0x11);
                *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x174 + iVar5 * 0x1bc) = iVar2;
                *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x178 + iVar5 * 0x1bc) = iVar7 + 2;
                FUN_00620730(param_1,*piVar8,1);
              }
            }
            else {
              *(int *)PTR_DAT_0066ad84 = iVar7;
              *(int *)PTR_DAT_0066b648 = *piVar8;
              *(undefined4 *)PTR_DAT_0066adb0 =
                   *(undefined4 *)(PTR_DAT_0066ad60 + *piVar8 * 0x30 + -0x30);
              *(undefined4 *)PTR_DAT_0066ae1c =
                   *(undefined4 *)(PTR_DAT_0066ad60 + *piVar8 * 0x30 + -0x2c);
              FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005fb2c4,PTR_DAT_0066b470);
              (**(code **)(**(int **)PTR_DAT_0066b470 + 0xec))();
            }
          }
          else {
            *(int *)PTR_DAT_0066ad84 = iVar7;
            *(int *)PTR_DAT_0066b648 = *piVar8;
            *(undefined4 *)PTR_DAT_0066b134 = 1;
            *(undefined4 *)PTR_DAT_0066adb0 =
                 *(undefined4 *)(PTR_DAT_0066ad60 + *piVar8 * 0x30 + -0x30);
            *(undefined4 *)PTR_DAT_0066ae1c =
                 *(undefined4 *)(PTR_DAT_0066ad60 + *piVar8 * 0x30 + -0x2c);
            FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005fc348,PTR_DAT_0066b3f4);
            (**(code **)(**(int **)PTR_DAT_0066b3f4 + 0xec))();
          }
          piVar8 = piVar8 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      FUN_00621d38(param_1);
      FUN_00642c50(0x1df,&local_170);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_170);
      FUN_0043b234(DAT_006d4918,0);
      FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
      puStackY_30 = (undefined *)0x620f30;
      Sleep(3000);
    }
    FUN_006216fc(param_1);
    FUN_0060ee88(param_1);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00620f88;
  puStack_24 = (undefined1 *)0x620f58;
  FUN_00404ff0(&local_170,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x620f68;
  FUN_004048f8(&local_16c,6);
  puStack_24 = (undefined1 *)0x620f78;
  FUN_004048f8(local_128,5);
  puStack_24 = (undefined1 *)0x620f80;
  FUN_00404ff0(&stack0xffffffec);
  return;
}

