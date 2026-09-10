// Address: 0056db4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_btdupClick(int param_1)

{
  byte *pbVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 unaff_EBX;
  int iVar5;
  undefined4 unaff_ESI;
  int iVar6;
  int *in_FS_OFFSET;
  bool bVar7;
  undefined1 local_98 [64];
  undefined1 local_58 [28];
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined4 uStack_34;
  undefined1 **ppuStack_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  int local_c;
  
  puStack_20 = &stack0xfffffffc;
  iVar4 = 0x12;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puStack_24 = &LAB_0056dd7d;
  local_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  uStack_2c = 0x56db80;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x40c),0);
  uStack_2c = 0x56db91;
  local_10 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
  if (-1 < local_10 + -1) {
    local_c = 0;
    do {
      local_28 = &stack0xffffffe8;
      ppuStack_30 = (undefined1 **)0x56dbb6;
      FUN_00416244(&local_28,local_c,0xfc);
      ppuStack_30 = &local_28;
      uStack_34 = 0x56dbc7;
      FUN_00416478(local_38,&DAT_0056dd94);
      ppuVar2 = ppuStack_30;
      ppuStack_30 = (undefined1 **)0x56dbd9;
      FUN_0050e448(*(undefined4 *)(param_1 + 0x2f8),local_38,ppuVar2);
      ppuStack_30 = (undefined1 **)0x56dbe4;
      FUN_00404b6c(&stack0xffffffec,unaff_ESI);
      ppuStack_30 = (undefined1 **)0x56dbec;
      iVar4 = FUN_00409ff8(unaff_EBX);
      iVar5 = 1;
      do {
        pbVar1 = (byte *)(DAT_0067b4bc + iVar4 * 0x708 + -0x24 + iVar5 * 0x24);
        bVar7 = *pbVar1 == 0xffffffff;
        uStack_2c = 0x56dc18;
        FUN_00403180(pbVar1,&DAT_0056dd98);
        if ((!bVar7) && (*(char *)(DAT_0067b4bc + iVar4 * 0x708 + -0x24 + iVar5 * 0x24) != '\0')) {
          iVar6 = 1;
          do {
            pbVar1 = (byte *)(DAT_0067b4bc + iVar4 * 0x708 + -0x24 + iVar5 * 0x24);
            bVar7 = *pbVar1 == 0xffffffff;
            uStack_2c = 0x56dc78;
            FUN_00403180(pbVar1,DAT_0067b4bc + iVar4 * 0x708 + -0x24 + iVar6 * 0x24);
            if ((bVar7) && (iVar5 < iVar6)) {
              uStack_2c = 0x56dc9e;
              FUN_004030d4(local_58,DAT_0067b4b8 + 4 + iVar4 * 200);
              uStack_2c = 0x56dcad;
              FUN_004030a4(local_58,&DAT_0056dda0,0x1a);
              uStack_2c = 0x56dcbb;
              FUN_004030d4(local_98,local_58);
              uStack_2c = 0x56dcde;
              FUN_004030a4(local_98,DAT_0067b4bc + iVar4 * 0x708 + -0x24 + iVar5 * 0x24,0x3d);
              uStack_2c = 0x56dcec;
              FUN_00405194(&local_3c,local_98);
              uStack_2c = 0x56dcfd;
              FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_3c);
              uStack_2c = 0x56dd11;
              (**(code **)(**(int **)(param_1 + 0x2f8) + 0x1b0))(*(int **)(param_1 + 0x2f8),local_c)
              ;
              uStack_2c = 0x56dd22;
              (**(code **)(**(int **)(param_1 + 0x2f8) + 0xc4))();
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 != 0x1a);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x1a);
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  puVar3 = puStack_20;
  *in_FS_OFFSET = (int)local_28;
  puStack_20 = &LAB_0056dd84;
  puStack_24 = (undefined1 *)0x56dd59;
  FUN_00404ff0(&local_3c,local_28,puVar3);
  puStack_24 = (undefined1 *)0x56dd6c;
  FUN_00405744(local_38,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x56dd74;
  FUN_00404ff0(&stack0xffffffe8);
  puStack_24 = (undefined1 *)0x56dd7c;
  FUN_004048d4(&stack0xffffffec);
  return;
}

