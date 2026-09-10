// Address: 0062b984
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm11_button1Click(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c [260];
  int local_8;
  
  puStack_140 = &stack0xfffffffc;
  local_124 = 0;
  local_128 = 0;
  local_12c = 0;
  local_130 = 0;
  local_120 = 0;
  local_114 = 0;
  local_118 = 0;
  local_11c = 0;
  local_110 = 0;
  puStack_144 = &LAB_0062bcf1;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  iVar6 = 0x28;
  puVar5 = &DAT_006d495c;
  piVar4 = &DAT_006d4a24;
  local_8 = param_1;
  do {
    cVar2 = (**(code **)(*(int *)*puVar5 + 200))();
    if (cVar2 != '\0') {
      iVar6 = FUN_00409ff8(*(undefined4 *)(*piVar4 + 0x80));
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar6 * 0x2f8) = 1;
      uVar3 = FUN_00409ff8(*(undefined4 *)(*piVar4 + 0x80));
      *(undefined4 *)(PTR_DAT_0066ac78 + DAT_006d4a10 * 4 + 0x13c) = uVar3;
      uVar3 = FUN_00409ff8(*(undefined4 *)(*piVar4 + 0x80));
      *(undefined4 *)(PTR_DAT_0066ac78 + 8) = uVar3;
      (**(code **)(*(int *)*puVar5 + 0xcc))((int *)*puVar5,0);
      (**(code **)(*(int *)*puVar5 + 100))((int *)*puVar5,0);
      FUN_0042a3a0(*(undefined4 *)(*piVar4 + 0x68),0x808080);
      FUN_004663a8(*piVar4,0x2d5b24);
      if (*(int *)(PTR_DAT_0066ac78 + 0xc4) != 0xca) {
        iVar6 = FUN_0054c0f0(*(undefined4 *)(local_8 + 0x338));
        *(undefined1 *)(*(int *)PTR_DAT_0066aca0 + 0x14c + iVar6 * 0x294) = 1;
      }
      break;
    }
    piVar4 = piVar4 + 1;
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_00466208(*(undefined4 *)(local_8 + 800),&local_110);
  FUN_00404b80(local_10c,local_110,0xff);
  FUN_004030e0(PTR_DAT_0066b4bc + DAT_006d4a10 * 0x1a + -0x1a,local_10c,0x19);
  iVar6 = FUN_0054c0f0(*(undefined4 *)(local_8 + 0x33c));
  *(undefined4 *)(PTR_DAT_0066b740 + DAT_006d4a10 * 4 + -4) =
       *(undefined4 *)(PTR_DAT_0066b2bc + iVar6 * 8 + 4);
  if (*(int *)(PTR_DAT_0066ac78 + 0x13c) == DAT_006d4a10) {
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5);
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00624d74,PTR_DAT_0066b448);
    (**(code **)(**(int **)PTR_DAT_0066b448 + 0xec))();
  }
  else {
    DAT_006d4a10 = DAT_006d4a10 + 1;
    FUN_00409dd8(DAT_006d4a10,&local_11c);
    FUN_00404bf0(&local_118,"Time ",local_11c);
    FUN_004051d4(&local_114,local_118);
    FUN_004e1414(*(undefined4 *)(local_8 + 0x2f8),local_114);
    if (*(int *)(PTR_DAT_0066ac78 + 0x13c) == DAT_006d4a10) {
      FUN_00642c50(0x29,&local_120);
      FUN_0054dcb8(*(undefined4 *)(local_8 + 0x340),local_120);
    }
    else {
      FUN_00642c50(0x27,&local_128);
      FUN_00409dd8(DAT_006d4a10 + 1,&local_130);
      FUN_004051d4(&local_12c,local_130);
      FUN_00405330(&local_124,3);
      FUN_0054dcb8(*(undefined4 *)(local_8 + 0x340),local_124);
    }
    FUN_00466238(*(undefined4 *)(local_8 + 800),0);
    (**(code **)(**(int **)(local_8 + 0x340) + 100))(*(int **)(local_8 + 0x340),0);
    DAT_006d4a0c = 0;
  }
  puVar1 = puStack_140;
  *in_FS_OFFSET = uStack_148;
  puStack_140 = &LAB_0062bcf8;
  puStack_144 = (undefined1 *)0x62bcba;
  FUN_004048d4(&local_130,uStack_148,puVar1);
  puStack_144 = (undefined1 *)0x62bcca;
  FUN_00405008(&local_12c,4);
  puStack_144 = (undefined1 *)0x62bcda;
  FUN_004048f8(&local_11c,2);
  puStack_144 = (undefined1 *)0x62bce5;
  FUN_00404ff0(&local_114);
  puStack_144 = (undefined1 *)0x62bcf0;
  FUN_004048d4(&local_110);
  return;
}

