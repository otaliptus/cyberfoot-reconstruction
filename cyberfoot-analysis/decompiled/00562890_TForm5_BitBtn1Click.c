// Address: 00562890
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm5_BitBtn1Click(int param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  bool bVar11;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [256];
  int local_8;
  
  puStack_130 = &stack0xfffffffc;
  local_120 = 0;
  local_11c = 0;
  local_114 = 0;
  local_118 = 0;
  local_110 = 0;
  local_10c = 0;
  local_8 = 0;
  puStack_134 = &LAB_005631a4;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  if (*PTR_DAT_0066ac94 == '\0') {
    uVar7 = 1;
    uVar9 = 0x19;
  }
  else {
    uVar7 = 0x1a;
    uVar9 = 0x28;
  }
  DAT_0067b490 = 0;
  FUN_00466208(*(undefined4 *)(param_1 + 0x2fc),&local_8);
  if (local_8 == 0) {
    FUN_00437ef0("Enter player name",1,DAT_005631bc,0);
  }
  else if (*PTR_DAT_0066ad3c == '\0') {
    uVar3 = DAT_0067b490;
    if (uVar7 <= uVar9) {
      iVar10 = (uVar9 - uVar7) + 1;
      do {
        pbVar1 = (byte *)(*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + -0x24 +
                         uVar7 * 0x24);
        bVar11 = *pbVar1 == 0xffffffff;
        FUN_00403180(pbVar1,&DAT_005631b4);
        uVar3 = uVar7;
        if (bVar11) break;
        uVar7 = uVar7 + 1;
        iVar10 = iVar10 + -1;
        uVar3 = DAT_0067b490;
      } while (iVar10 != 0);
    }
    DAT_0067b490 = uVar3;
    if (DAT_0067b490 == 0) {
      FUN_00483bc4(DAT_0067b48c);
    }
    else {
      iVar10 = FUN_004032c8(100);
      uVar7 = iVar10 + 1;
      if ((int)uVar7 < 0x50) {
        if ((int)uVar7 < 0x33) {
          if (uVar7 < 0x1f) {
            *(undefined1 *)
             (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x6df + DAT_0067b490) =
                 6;
          }
          else if (iVar10 - 0x1eU < 0x14) {
            *(undefined1 *)
             (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x6df + DAT_0067b490) =
                 5;
          }
        }
        else if (iVar10 - 0x32U < 0x14) {
          *(undefined1 *)
           (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x6df + DAT_0067b490) = 7;
        }
        else if (iVar10 - 0x46U < 5) {
          *(undefined1 *)
           (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x6df + DAT_0067b490) = 8;
        }
        else if (iVar10 - 0x4bU < 4) {
          *(undefined1 *)
           (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x6df + DAT_0067b490) = 9;
        }
      }
      else if ((int)uVar7 < 0x58) {
        if (iVar10 - 0x4fU < 2) {
          *(undefined1 *)
           (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x6df + DAT_0067b490) = 10
          ;
        }
        else if (iVar10 - 0x51U < 6) {
          *(undefined1 *)
           (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x6df + DAT_0067b490) = 4;
        }
      }
      else if (iVar10 - 0x57U < 6) {
        *(undefined1 *)
         (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x6df + DAT_0067b490) = 3;
      }
      else if (iVar10 - 0x5dU < 4) {
        *(undefined1 *)
         (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x6df + DAT_0067b490) = 2;
      }
      else if (iVar10 - 0x61U < 4) {
        *(undefined1 *)
         (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x6df + DAT_0067b490) = 1;
      }
      *(undefined1 *)
       (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x63f + DAT_0067b490) = 0;
      FUN_00466208(*(undefined4 *)(param_1 + 0x2fc),&local_10c);
      FUN_00404b80(local_108,local_10c,0xff);
      FUN_004030e0(*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + -0x24 +
                   DAT_0067b490 * 0x24,local_108,CONCAT31((int3)(DAT_0067b490 * 9 >> 8),0x23));
      uVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
      *(undefined1 *)
       (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x617 + DAT_0067b490) = uVar4;
      uVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x33c));
      *(undefined1 *)
       (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x6b7 + DAT_0067b490) = uVar4;
      if (*(char *)(*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x617 +
                   DAT_0067b490) == '\0') {
        uVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x338));
        *(undefined1 *)
         (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x667 + DAT_0067b490) =
             uVar4;
        uVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x340));
        *(undefined1 *)
         (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x68f + DAT_0067b490) =
             uVar4;
      }
      else {
        cVar5 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x338));
        *(char *)(*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x667 + DAT_0067b490
                 ) = cVar5 + '\x04';
        cVar5 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x340));
        *(char *)(*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x68f + DAT_0067b490
                 ) = cVar5 + '\x04';
      }
      FUN_00466208(*(undefined4 *)(param_1 + 0x2f8),&local_110);
      uVar4 = FUN_00409ff8(local_110);
      *(undefined1 *)
       (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x5ef + DAT_0067b490) = uVar4;
      iVar10 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
      *(undefined *)
       (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x5c7 + DAT_0067b490) =
           PTR_DAT_0066b2bc[iVar10 * 8 + 4];
      uVar6 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
      *(undefined4 *)PTR_DAT_0066b52c = uVar6;
      uVar6 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
      FUN_00409dd8(uVar6,&local_118);
      FUN_004051d4(&local_114,local_118);
      FUN_004e1414(*(undefined4 *)(*(int *)PTR_DAT_0066b300 + 0x330),local_114);
      uVar4 = (**(code **)(**(int **)(param_1 + 0x300) + 200))();
      *(undefined1 *)
       (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x59f + DAT_0067b490) = uVar4;
      TForm3_listtime(*(undefined4 *)PTR_DAT_0066b300,*(undefined4 *)PTR_DAT_0066ac90);
      TForm3_timesalvar(*(undefined4 *)PTR_DAT_0066b300,*(undefined4 *)PTR_DAT_0066ac90);
      FUN_00483bc4(DAT_0067b48c);
    }
  }
  else {
    *(int *)(PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x58) =
         *(int *)(PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x58) + 1;
    DAT_0067b490 = 0;
    uVar7 = 1;
    puVar8 = PTR_DAT_0066b640;
    do {
      bVar11 = (byte)puVar8[*(int *)PTR_DAT_0066b63c * 0x6d4 + 0x5c] == 0xffffffff;
      FUN_00403180(puVar8 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x5c,&DAT_005631b4);
      uVar9 = uVar7;
      if ((bVar11) || (puVar8[*(int *)PTR_DAT_0066b63c * 0x6d4 + 0x5c] == '\0')) break;
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 0x24;
      uVar9 = DAT_0067b490;
    } while (uVar7 != 0x1d);
    DAT_0067b490 = uVar9;
    *(undefined4 *)(PTR_DAT_0066b640 + DAT_0067b490 * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x528)
         = 0;
    FUN_00466208(*(undefined4 *)(param_1 + 0x2fc),&local_11c);
    FUN_00404b80(local_108,local_11c,0xff);
    FUN_004030e0(PTR_DAT_0066b640 + DAT_0067b490 * 0x24 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x38,
                 local_108,CONCAT31((int3)(DAT_0067b490 * 9 >> 8),0x23));
    uVar6 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
    *(undefined4 *)(PTR_DAT_0066b640 + DAT_0067b490 * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x4b8)
         = uVar6;
    uVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x33c));
    iVar10 = *(int *)PTR_DAT_0066b63c;
    PTR_DAT_0066b640[DAT_0067b490 + iVar10 * 0x6d4 + 0x698] = uVar4;
    if (*(int *)(PTR_DAT_0066b640 + DAT_0067b490 * 4 + iVar10 * 0x6d4 + 0x4b8) == 0) {
      uVar6 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x338));
      *(undefined4 *)
       (PTR_DAT_0066b640 + DAT_0067b490 * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x598) = uVar6;
      uVar6 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x340));
      *(undefined4 *)
       (PTR_DAT_0066b640 + DAT_0067b490 * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x608) = uVar6;
    }
    else {
      iVar10 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x338));
      *(int *)(PTR_DAT_0066b640 + DAT_0067b490 * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x598) =
           iVar10 + 4;
      iVar10 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x340));
      *(int *)(PTR_DAT_0066b640 + DAT_0067b490 * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x608) =
           iVar10 + 4;
    }
    FUN_00466208(*(undefined4 *)(param_1 + 0x2f8),&local_120);
    uVar6 = FUN_00409ff8(local_120);
    *(undefined4 *)(PTR_DAT_0066b640 + DAT_0067b490 * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x448)
         = uVar6;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x300) + 200))();
    PTR_DAT_0066b640[DAT_0067b490 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x67b] = uVar4;
    TForm3_selecaosalvar(*(undefined4 *)PTR_DAT_0066b300,*(undefined4 *)PTR_DAT_0066b63c);
    TForm3_listjogselecao(*(undefined4 *)PTR_DAT_0066b300,*(undefined4 *)PTR_DAT_0066b63c);
    FUN_00483bc4(DAT_0067b48c);
  }
  puVar2 = puStack_130;
  *in_FS_OFFSET = uStack_138;
  puStack_130 = &LAB_005631ab;
  puStack_134 = (undefined1 *)0x563175;
  FUN_004048f8(&local_120,2,puVar2);
  puStack_134 = (undefined1 *)0x563180;
  FUN_004048d4(&local_118);
  puStack_134 = (undefined1 *)0x56318b;
  FUN_00404ff0(&local_114);
  puStack_134 = (undefined1 *)0x56319b;
  FUN_004048f8(&local_110,2);
  puStack_134 = (undefined1 *)0x5631a3;
  FUN_004048d4(&local_8);
  return;
}

