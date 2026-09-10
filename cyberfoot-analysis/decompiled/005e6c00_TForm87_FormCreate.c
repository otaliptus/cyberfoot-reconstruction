// Address: 005e6c00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm87_FormCreate(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  HCURSOR pHVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *in_FS_OFFSET;
  undefined4 local_130;
  int local_12c;
  undefined4 local_128;
  int local_124;
  undefined4 local_120;
  int local_11c;
  undefined4 local_118;
  int local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc [24];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
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
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 in_stack_ffffffd0;
  int iVar10;
  int local_28;
  undefined1 *puStack_24;
  undefined1 *local_20;
  
  iVar6 = 0x25;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puStack_24 = &LAB_005e8058;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  iVar6 = 0;
  local_20 = (undefined1 *)0x0;
  DAT_006d35d0 = FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_004ab2b0(DAT_006d35d0,DAT_0066c668,"camisa0");
  DAT_006d35d4 = (int *)FUN_004aa034(PTR_LAB_004a5420,1);
  iVar10 = 0x5e6c78;
  FUN_006462ac(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&stack0xffffffd4);
  if (iVar10 == 0) {
    FUN_004ab2b0(DAT_006d35d4,DAT_0066c668,"camisa1");
  }
  else {
    FUN_006462ac(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&stack0xffffffd0);
    (**(code **)(*DAT_006d35d4 + 0x4c))(DAT_006d35d4,in_stack_ffffffd0);
  }
  DAT_006d35d8 = FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_004ab2b0(DAT_006d35d8,DAT_0066c668,"camisa2");
  DAT_006d35dc = FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_004ab2b0(DAT_006d35dc,DAT_0066c668,"camisa3");
  DAT_006d35e0 = FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_004ab2b0(DAT_006d35e0,DAT_0066c668,"campoalpha");
  piVar7 = *(int **)(*(int *)(param_1 + 0x350) + 0x168);
  (**(code **)(*piVar7 + 8))(piVar7,DAT_006d35e0);
  local_34 = 0x5e6d5a;
  uVar2 = FUN_00421234(PTR_PTR_0041c10c,1,DAT_0066c668);
  DAT_006d35e4 = (int *)FUN_0048aca8(PTR_PTR_0048a9f4,1);
  (**(code **)(*DAT_006d35e4 + 0x54))(DAT_006d35e4,uVar2);
  piVar7 = *(int **)(*(int *)(param_1 + 0x300) + 0x168);
  (**(code **)(*piVar7 + 8))(piVar7,DAT_006d35e4);
  local_34 = 0x5e6da3;
  pHVar3 = LoadCursorA(DAT_0066c668,"cursor0");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,4,pHVar3);
  local_34 = 0x5e6dc6;
  pHVar3 = LoadCursorA(DAT_0066c668,"cursor1");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,1,pHVar3);
  local_34 = 0x5e6de9;
  pHVar3 = LoadCursorA(DAT_0066c668,"cursor2");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,2,pHVar3);
  local_34 = 0x5e6e0c;
  pHVar3 = LoadCursorA(DAT_0066c668,"cursor3");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,3,pHVar3);
  FUN_00642c50(0x43,&local_34);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x358),local_34);
  FUN_00642c50(0x3ee,&local_38);
  FUN_0040526c(&local_38,&DAT_005e8100);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x38c),local_38);
  iVar10 = 0x12;
  puVar4 = &DAT_006d3678;
  do {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4 = puVar4 + 4;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  FUN_00642c50(0x119,&local_3c);
  FUN_004e177c(*(undefined4 *)(param_1 + 0x35c),local_3c);
  FUN_00642c50(0x119,&local_40);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x3e4),local_40);
  FUN_00642c50(0x3e6,&local_48);
  FUN_00404b6c(&local_44,local_48);
  FUN_00466238(*(undefined4 *)(param_1 + 0x3b8),local_44);
  FUN_00642c50(0x80,&local_4c);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x310) + 0x60),local_4c);
  FUN_00642c50(0x81,&local_50);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x318) + 0x60),local_50);
  FUN_00642c50(0x82,&local_58);
  FUN_004053fc(local_58,1,1);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x60),local_54);
  FUN_00642c50(0x83,&local_5c);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 800) + 0x60),local_5c);
  FUN_00642c50(0x84,&local_60);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x60),local_60);
  FUN_00642c50(0x87,&local_64);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x330) + 0x60),local_64);
  FUN_00642c50(0x88,&local_68);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x334) + 0x60),local_68);
  FUN_00642c50(0x89,&local_6c);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x338) + 0x60),local_6c);
  FUN_00642c50(0x11a,&local_70);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x354),local_70);
  FUN_00642c50(0x11b,&local_74);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x360),local_74);
  FUN_00642c50(0x11c,&local_78);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x368),local_78);
  FUN_00642c50(0x11d,&local_7c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x364),local_7c);
  FUN_00642c50(0x11e,&local_80);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_80);
  FUN_00642c50(0x11f,&local_84);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x370),local_84);
  FUN_00642c50(0x122,&local_88);
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c8),local_88);
  FUN_00642c50(0x123,&local_8c);
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c8),local_8c);
  FUN_00642c50(0x124,&local_90);
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c8),local_90);
  FUN_00642c50(0x125,&local_94);
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c4),local_94);
  FUN_00642c50(0x126,&local_98);
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c4),local_98);
  FUN_00642c50(0x127,&local_9c);
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c4),local_9c);
  FUN_00642c50(0x128,&local_a0);
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3cc),local_a0);
  FUN_00642c50(0x129,&local_a4);
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3cc),local_a4);
  if (*PTR_DAT_0066b458 != '\0') {
    FUN_0050a850(*(undefined4 *)(param_1 + 0x310),0x46);
    FUN_0050a804(*(undefined4 *)(param_1 + 0x330),0);
    FUN_0050a850(*(undefined4 *)(param_1 + 0x328),0x23);
  }
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c0),L"5-4-1");
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c0),L"5-3-2");
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c0),L"4-5-1");
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c0),L"4-4-2");
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c0),L"4-4-2 (1)");
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c0),L"4-4-2 (2)");
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c0),L"4-3-3 (1)");
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c0),L"4-3-3 (2)");
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c0),L"3-5-2");
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3c0),L"3-4-3");
  FUN_00642c50(0x12a,&local_a8);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x3dc),local_a8);
  FUN_00642c50(299,&local_ac);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x3e0),local_ac);
  FUN_005e547c(param_1);
  iVar10 = *(int *)(param_1 + 0x300);
  local_b0 = *(int *)(iVar10 + 0x40) + *(int *)(iVar10 + 0x48);
  uVar2 = FUN_00402c38();
  iVar8 = *(int *)(iVar10 + 0x44);
  iVar10 = *(int *)(iVar10 + 0x4c);
  iVar9 = 1;
  piVar7 = &DAT_006d35e8;
  do {
    piVar5 = (int *)FUN_0043a67c(PTR_PTR_004386b8,1,*(undefined4 *)(param_1 + 0x2f8));
    *piVar7 = (int)piVar5;
    FUN_00409dd8(iVar9,&local_b8);
    FUN_00404bf0(&local_b4,"camisa",local_b8);
    (**(code **)(*piVar5 + 0x18))(piVar5,local_b4);
    (**(code **)(*piVar5 + 0x68))(piVar5,*(undefined4 *)(param_1 + 0x2f8));
    (**(code **)(*piVar5 + 0x5c))(piVar5,0);
    FUN_0043aa78(piVar5,0);
    FUN_004659c4(piVar5,0x37);
    FUN_004659e8(piVar5,0x37);
    FUN_0043aa50(piVar5,1);
    FUN_00465978(piVar5,uVar2);
    FUN_0046599c(piVar5,iVar8 + iVar10 + -0xfa);
    piVar5[3] = iVar9;
    (**(code **)(**(int **)(*piVar7 + 0x168) + 8))(*(int **)(*piVar7 + 0x168),DAT_006d35d0);
    piVar5[0x35] = param_1;
    piVar5[0x34] = (int)TForm87_ImagecamisaMouseDown;
    piVar5[0x3d] = param_1;
    piVar5[0x3c] = 0x5eb4b4;
    piVar5[0x45] = param_1;
    piVar5[0x44] = (int)TForm87_ImagecamisaStartDrag;
    piVar5[0x47] = param_1;
    piVar5[0x46] = (int)TForm87_ImagecamisaEndDrag;
    piVar5[0x3b] = param_1;
    piVar5[0x3a] = (int)TForm87_ImagecamisaDragDrop;
    FUN_00466468(piVar5);
    iVar9 = iVar9 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar9 != 0x13);
  iVar10 = 1;
  puVar4 = &DAT_006d34f8;
  do {
    piVar7 = (int *)FUN_00544f08(PTR_PTR_0053f6b0,1,*(undefined4 *)(param_1 + 0x2f8));
    *puVar4 = piVar7;
    FUN_00409dd8(iVar10,&local_c0);
    FUN_00404bf0(&local_bc,"labescal",local_c0);
    (**(code **)(*piVar7 + 0x18))(piVar7,local_bc);
    (**(code **)(*piVar7 + 0x68))(piVar7,*(undefined4 *)(param_1 + 0x2f8));
    FUN_004663cc(piVar7,0);
    piVar7[3] = iVar10;
    if (iVar10 < 0xc) {
      FUN_004659c4(piVar7,0x5a);
    }
    else {
      FUN_004659c4(piVar7,0x5a);
    }
    if (iVar10 == 1) {
      FUN_004659c4(piVar7,0x78);
    }
    FUN_00545040(piVar7,1);
    FUN_0042a5c8(piVar7[0x1a],"Arial");
    FUN_0042a66c(piVar7[0x1a],DAT_005e81fc);
    FUN_0042a640(piVar7[0x1a],8);
    FUN_00466238(piVar7,&DAT_005e8208);
    FUN_00465978(piVar7,10);
    FUN_0046599c(piVar7,10);
    FUN_004663a8(piVar7,0xff8000);
    FUN_0042a3a0(piVar7[0x1a],0xffffff);
    FUN_00466468(piVar7);
    FUN_00545854(piVar7,0);
    FUN_00545868(piVar7,1);
    FUN_00466358(piVar7,1);
    FUN_0045bbe4(piVar7,1);
    iVar10 = iVar10 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar10 != 0x13);
  iVar10 = 1;
  puVar4 = &DAT_006d3540;
  do {
    piVar7 = (int *)FUN_0045b76c(PTR_PTR_004df4e4,1,*(undefined4 *)(param_1 + 0x2f8));
    *puVar4 = piVar7;
    FUN_00409dd8(iVar10,&local_c8);
    FUN_00404bf0(&local_c4,"labposic",local_c8);
    (**(code **)(*piVar7 + 0x18))(piVar7,local_c4);
    (**(code **)(*piVar7 + 0x68))(piVar7,*(undefined4 *)(param_1 + 0x2f8));
    FUN_004663cc(piVar7,0);
    FUN_004659c4(piVar7,10);
    FUN_004659e8(piVar7,0x10);
    (**(code **)(*piVar7 + 0x5c))(piVar7,0);
    FUN_0042a5c8(piVar7[0x1a],"Arial");
    FUN_0042a640(piVar7[0x1a],7);
    FUN_004e1414(piVar7,0);
    FUN_00465978(piVar7,10);
    FUN_0046599c(piVar7,10);
    FUN_004663a8(piVar7,0xff8000);
    FUN_0042a3a0(piVar7[0x1a],0xffffff);
    FUN_0045bb70(piVar7,2);
    FUN_00466468(piVar7);
    FUN_0045bc28(piVar7,1);
    FUN_0045bbe4(piVar7,1);
    iVar10 = iVar10 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar10 != 0x13);
  iVar10 = 1;
  puVar4 = &DAT_006d3630;
  do {
    piVar7 = (int *)FUN_0045b76c(PTR_PTR_004df4e4,1,*(undefined4 *)(param_1 + 0x2f8));
    *puVar4 = piVar7;
    piVar7[3] = iVar10;
    FUN_00409dd8(iVar10,&local_d0);
    FUN_00404bf0(&local_cc,"labener",local_d0);
    (**(code **)(*piVar7 + 0x18))(piVar7,local_cc);
    (**(code **)(*piVar7 + 0x68))(piVar7,*(undefined4 *)(param_1 + 0x2f8));
    FUN_004663cc(piVar7,0);
    FUN_004659c4(piVar7,0x19);
    FUN_004659e8(piVar7,0xc);
    (**(code **)(*piVar7 + 0x5c))(piVar7,0);
    FUN_0042a5c8(piVar7[0x1a],"Arial");
    FUN_0042a640(piVar7[0x1a],7);
    FUN_004e1414(piVar7,0);
    FUN_00465978(piVar7,10);
    FUN_0046599c(piVar7,10);
    FUN_004663a8(piVar7,0xff8000);
    FUN_0042a3a0(piVar7[0x1a],0);
    FUN_0045bb70(piVar7,2);
    FUN_00466468(piVar7);
    FUN_0045bc28(piVar7,1);
    FUN_0045bbe4(piVar7,1);
    FUN_00466358(piVar7,1);
    piVar7[0x35] = param_1;
    piVar7[0x34] = (int)TForm87_labnumeroMouseDown;
    piVar7[0x3d] = param_1;
    piVar7[0x3c] = 0x5eb4b4;
    piVar7[0x45] = param_1;
    piVar7[0x44] = (int)TForm87_ImagecamisaStartDrag;
    piVar7[0x47] = param_1;
    piVar7[0x46] = (int)TForm87_ImagecamisaEndDrag;
    piVar7[0x3b] = param_1;
    piVar7[0x3a] = (int)TForm87_ImagecamisaDragDrop;
    FUN_00466128(piVar7,0);
    iVar10 = iVar10 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar10 != 0x13);
  iVar10 = 1;
  puVar4 = &DAT_006d3588;
  do {
    piVar7 = (int *)FUN_0045b76c(PTR_PTR_004df4e4,1,*(undefined4 *)(param_1 + 0x2f8));
    *puVar4 = piVar7;
    piVar7[3] = iVar10;
    FUN_00409dd8(iVar10,&local_d8);
    FUN_00404bf0(&local_d4,"labnumer",local_d8);
    (**(code **)(*piVar7 + 0x18))(piVar7,local_d4);
    (**(code **)(*piVar7 + 0x68))(piVar7,*(undefined4 *)(param_1 + 0x2f8));
    FUN_004663cc(piVar7,0);
    FUN_004659c4(piVar7,10);
    FUN_004659e8(piVar7,0xc);
    (**(code **)(*piVar7 + 0x5c))(piVar7,0);
    FUN_0042a5c8(piVar7[0x1a],"Arial");
    FUN_0042a640(piVar7[0x1a],8);
    FUN_004e1414(piVar7,0);
    FUN_00465978(piVar7,10);
    FUN_0046599c(piVar7,10);
    FUN_004663a8(piVar7,0xff8000);
    FUN_0042a3a0(piVar7[0x1a],0xffffff);
    FUN_0045bb70(piVar7,2);
    FUN_00466468(piVar7);
    FUN_0045bc28(piVar7,1);
    FUN_0045bbe4(piVar7,1);
    piVar7[0x35] = param_1;
    piVar7[0x34] = (int)TForm87_labnumeroMouseDown;
    piVar7[0x3d] = param_1;
    piVar7[0x3c] = 0x5eb4b4;
    piVar7[0x45] = param_1;
    piVar7[0x44] = (int)TForm87_ImagecamisaStartDrag;
    piVar7[0x47] = param_1;
    piVar7[0x46] = (int)TForm87_ImagecamisaEndDrag;
    piVar7[0x3b] = param_1;
    piVar7[0x3a] = (int)TForm87_ImagecamisaDragDrop;
    FUN_00466128(piVar7,0);
    iVar10 = iVar10 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar10 != 0x13);
  FUN_005e5264(param_1,4);
  if (PTR_DAT_0066ac78[0xde] == '\0') {
    (**(code **)(**(int **)(param_1 + 0x35c) + 0xcc))(*(int **)(param_1 + 0x35c),0);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x35c) + 0xcc))(*(int **)(param_1 + 0x35c),1);
  }
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_34;
  local_38 = 0x5e7a65;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x3cc),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0x228 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  local_38 = 0x5e7a8b;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x3c8),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0x220 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  local_38 = 0x5e7ab1;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x3c4),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0x224 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  *in_FS_OFFSET = local_34;
  iVar8 = 0;
  FUN_004060a8(&DAT_006d379c,PTR_LAB_005e51b0,1);
  iVar10 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
  if (-1 < iVar10 + -1) {
    iVar9 = 0;
    local_28 = iVar10;
    do {
      (**(code **)(**(int **)(param_1 + 0x304) + 0x100))(*(int **)(param_1 + 0x304),0,iVar9);
      FUN_00404b6c(&local_dc,local_e0);
      iVar10 = FUN_00409ff8(local_dc);
      FUN_004030d4(local_fc,*(int *)PTR_DAT_0066b5b8 + iVar10 * 0x130);
      FUN_004030a4(local_fc,&DAT_005e8244,0x17);
      FUN_00405194(&local_e4,local_fc);
      FUN_0040526c(&local_e4,
                   *(undefined4 *)
                    (PTR_DAT_0066b660 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar10 * 0x130) * 4));
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x3d4),local_e4);
      FUN_004030d4(local_fc,*(int *)PTR_DAT_0066b5b8 + iVar10 * 0x130);
      FUN_004030a4(local_fc,&DAT_005e8244,0x17);
      FUN_00405194(&local_100,local_fc);
      FUN_0040526c(&local_100,
                   *(undefined4 *)
                    (PTR_DAT_0066b660 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar10 * 0x130) * 4));
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x3d0),local_100);
      iVar8 = iVar8 + 1;
      FUN_004060a8(&DAT_006d379c,PTR_LAB_005e51b0,1);
      *(int *)(DAT_006d379c + -4 + iVar8 * 4) = iVar10;
      if (iVar10 == *(int *)(*(int *)PTR_DAT_0066af70 + 0xa8 +
                            *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)) {
        iVar6 = iVar9;
      }
      if (iVar10 == *(int *)(*(int *)PTR_DAT_0066af70 + 0xa4 +
                            *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)) {
        local_20 = (undefined1 *)iVar9;
      }
      iVar9 = iVar9 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x3d0),iVar6);
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x3d4),local_20);
  if (PTR_DAT_0066ac78[0xde] != '\0') {
    FUN_005e8c30(param_1);
  }
  if (*PTR_DAT_0066ae3c == '\0') {
    if (-1 < *(int *)PTR_DAT_0066b118) {
      FUN_00405194(&local_104,*(int *)PTR_DAT_0066af70 + *(int *)PTR_DAT_0066b118 * 0x2f8);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x3a4),local_104);
      FUN_006462ac(*(undefined4 *)PTR_DAT_0066b118,&local_108);
      if (local_108 == 0) {
        FUN_0043aa68(*(undefined4 *)(param_1 + 0x398),0);
      }
      else {
        FUN_006462ac(*(undefined4 *)PTR_DAT_0066b118,&local_10c);
        FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x398) + 0x168),local_10c);
      }
    }
  }
  else {
    FUN_00405194(&local_110,*(int *)PTR_DAT_0066af70 + *(int *)PTR_DAT_0066b5b0 * 0x2f8);
    FUN_004e1414(*(undefined4 *)(param_1 + 0x3a4),local_110);
    FUN_006462ac(*(undefined4 *)PTR_DAT_0066b5b0,&local_114);
    if (local_114 == 0) {
      FUN_0043aa68(*(undefined4 *)(param_1 + 0x398),0);
    }
    else {
      FUN_006462ac(*(undefined4 *)PTR_DAT_0066b5b0,&local_118);
      FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x398) + 0x168),local_118);
    }
  }
  FUN_006462ac(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&local_11c);
  if (local_11c == 0) {
    piVar7 = *(int **)(*(int *)(param_1 + 0x39c) + 0x168);
    (**(code **)(*piVar7 + 8))(piVar7,DAT_006d35d4);
  }
  else {
    FUN_006462ac(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&local_120);
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x39c) + 0x168),local_120);
    FUN_00466128(*(undefined4 *)(param_1 + 0x3a8),1);
  }
  FUN_006464c4(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&local_124);
  if (local_124 == 0) {
    FUN_0043aa68(*(undefined4 *)(param_1 + 0x3a0),0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x3ac),0);
  }
  else {
    FUN_006464c4(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&local_128);
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x3a0) + 0x168),local_128);
    FUN_00466128(*(undefined4 *)(param_1 + 0x3ac),1);
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x2e8 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) == 2) {
      FUN_0053edb0(*(undefined4 *)(param_1 + 0x3ac),
                   CONCAT31((int3)((uint)*(int *)PTR_DAT_0066af70 >> 8),1));
    }
  }
  FUN_006466dc(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&local_12c);
  if (local_12c == 0) {
    FUN_0043aa68(*(undefined4 *)(param_1 + 0x3b4),0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x3b0),0);
  }
  else {
    FUN_006466dc(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&local_130);
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x3b4) + 0x168),local_130);
    FUN_00466128(*(undefined4 *)(param_1 + 0x3b0),1);
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x2e8 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) == 3) {
      FUN_0053edb0(*(undefined4 *)(param_1 + 0x3b0),
                   CONCAT31((int3)((uint)*(int *)PTR_DAT_0066af70 >> 8),1));
    }
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005e8062;
  puStack_24 = (undefined1 *)0x5e7fda;
  FUN_004048f8(&local_130,8,puVar1);
  puStack_24 = (undefined1 *)0x5e7fe5;
  FUN_00404ff0(&local_110);
  puStack_24 = (undefined1 *)0x5e7ff5;
  FUN_004048f8(&local_10c,2);
  puStack_24 = (undefined1 *)0x5e8005;
  FUN_00405008(&local_104,2);
  puStack_24 = (undefined1 *)0x5e8015;
  FUN_00405008(&local_e4,2);
  puStack_24 = (undefined1 *)0x5e8025;
  FUN_004048f8(&local_dc,0xb);
  puStack_24 = (undefined1 *)0x5e8035;
  FUN_00405008(&local_ac,0x1a);
  puStack_24 = (undefined1 *)0x5e803d;
  FUN_004048d4(&local_44);
  puStack_24 = (undefined1 *)0x5e804a;
  FUN_00405008(&local_40,4);
  puStack_24 = (undefined1 *)0x5e8057;
  FUN_004048f8(&stack0xffffffd0,2);
  return;
}

