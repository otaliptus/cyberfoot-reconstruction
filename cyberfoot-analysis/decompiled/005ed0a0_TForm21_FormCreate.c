// Address: 005ed0a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm21_FormCreate(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined4 local_1a0;
  undefined1 local_19c [16];
  undefined1 local_18c [16];
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_15c [12];
  undefined4 local_150;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  iVar3 = 0x37;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puStack_1c = (undefined1 *)0x5ed0c5;
  FUN_00405628(local_15c,PTR_DAT_00408718);
  puStack_20 = &LAB_005ed339;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x5ed0e3;
  puStack_1c = &stack0xfffffffc;
  FUN_00642c50(0x159,&local_160);
  puStack_28 = (undefined1 *)0x5ed0f4;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x318),local_160);
  puStack_28 = (undefined1 *)0x5ed104;
  FUN_00642c50(0x15a,&local_164);
  puStack_28 = (undefined1 *)0x5ed115;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x314),local_164);
  puStack_28 = (undefined1 *)0x5ed125;
  FUN_00642c50(0x15b,&local_168);
  puStack_28 = (undefined1 *)0x5ed136;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x310),local_168);
  puStack_28 = (undefined1 *)0x5ed146;
  FUN_00642c50(2,&local_16c);
  puStack_28 = (undefined1 *)0x5ed157;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x330),local_16c);
  puStack_28 = (undefined1 *)0x5ed167;
  FUN_00642c50(0x15c,&local_170);
  puStack_28 = (undefined1 *)0x5ed178;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_170);
  puStack_28 = (undefined1 *)0x5ed188;
  FUN_00642c50(0x141,&local_174);
  puStack_28 = (undefined1 *)0x5ed199;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_174);
  puStack_28 = (undefined1 *)0x5ed1a9;
  FUN_00642c50(0x15d,&local_178);
  puStack_28 = (undefined1 *)0x5ed1ba;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_178);
  puStack_28 = (undefined1 *)0x5ed1cf;
  iVar3 = FUN_0040a4d4("sav\\*.s15",0x3f,local_15c);
  if (iVar3 == 0) {
    puStack_28 = (undefined1 *)0x5ed1ea;
    (**(code **)(**(int **)(param_1 + 800) + 0x1d0))(*(int **)(param_1 + 800),1);
    puStack_28 = (undefined1 *)0x5ed1fb;
    FUN_004051d4(&local_17c,local_150);
    puStack_28 = (undefined1 *)local_17c;
    piVar1 = *(int **)(param_1 + 800);
    uStack_2c = 0x5ed212;
    iVar3 = (**(code **)(*piVar1 + 0x11c))();
    puStack_28 = (undefined1 *)0x5ed222;
    FUN_00416244(local_18c,iVar3 + -1,0xfc);
    puStack_28 = local_18c;
    uStack_2c = 0x5ed239;
    FUN_00416478(local_19c,"nxarquivo");
    puVar2 = puStack_28;
    puStack_28 = (undefined1 *)0x5ed247;
    FUN_0050e9b8(piVar1,local_19c,puVar2);
  }
  while( true ) {
    puStack_28 = (undefined1 *)0x5ed2c4;
    iVar3 = FUN_0040a524(local_15c);
    if (iVar3 != 0) break;
    puStack_28 = (undefined1 *)0x5ed25c;
    (**(code **)(**(int **)(param_1 + 800) + 0x1d0))(*(int **)(param_1 + 800),1);
    puStack_28 = (undefined1 *)0x5ed26d;
    FUN_004051d4(&local_1a0,local_150);
    puStack_28 = (undefined1 *)local_1a0;
    piVar1 = *(int **)(param_1 + 800);
    uStack_2c = 0x5ed284;
    iVar3 = (**(code **)(*piVar1 + 0x11c))();
    puStack_28 = (undefined1 *)0x5ed294;
    FUN_00416244(local_1b0,iVar3 + -1,0xfc);
    puStack_28 = local_1b0;
    uStack_2c = 0x5ed2ab;
    FUN_00416478(local_1c0,"nxarquivo");
    puVar2 = puStack_28;
    puStack_28 = (undefined1 *)0x5ed2b9;
    FUN_0050e9b8(piVar1,local_1c0,puVar2);
  }
  puStack_28 = (undefined1 *)0x5ed2d3;
  FUN_0040a548(local_15c);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005ed340;
  puStack_20 = (undefined1 *)0x5ed2f6;
  FUN_00405744(local_1c0,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x5ed301;
  FUN_00404ff0(&local_1a0);
  puStack_20 = (undefined1 *)0x5ed317;
  FUN_00405744(local_19c,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x5ed327;
  FUN_00405008(&local_17c,8);
  puStack_20 = (undefined1 *)0x5ed338;
  FUN_004056f8(local_15c,PTR_DAT_00408718);
  return;
}

