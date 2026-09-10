// Address: 0056bf48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_Grid1KeyDown(int param_1)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  bool bVar7;
  undefined1 local_c0 [16];
  int local_b0 [4];
  int *local_a0;
  undefined1 local_9c [16];
  int local_8c [4];
  int *local_7c;
  undefined1 local_78 [16];
  int local_68 [4];
  undefined4 local_58;
  int *local_54;
  undefined1 local_50 [16];
  int local_40 [4];
  int local_30;
  int *local_2c;
  undefined4 local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0x17;
  do {
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_24 = &LAB_0056c2c4;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  puVar4 = &stack0xfffffffc;
  if (sRam00000000 == 0x2e) {
    local_2c = (int *)0x56bf83;
    TForm3_Image12Click(param_1,*(undefined4 *)(param_1 + 0x3e4));
    puVar4 = puStack_20;
  }
  puStack_20 = puVar4;
  if (DAT_0067b4c9 == '\0') {
    local_2c = &local_8;
    piVar2 = *(int **)(DAT_0067b4b4 + 0x33c);
    local_30 = 0x56bfa9;
    uVar5 = (**(code **)(*piVar2 + 0x138))();
    local_2c = (int *)0x56bfb5;
    FUN_00416244(&stack0xffffffe8,uVar5,0xfc);
    local_2c = (int *)&stack0xffffffe8;
    local_30 = 0x56bfc6;
    FUN_00416478(&local_28,"idjog");
    piVar3 = local_2c;
    local_2c = (int *)0x56bfd1;
    FUN_0050e448(piVar2,&local_28,piVar3);
    bVar7 = true;
    local_2c = (int *)0x56bfdb;
    FUN_00405378(local_8);
    if (!bVar7) {
      local_2c = &local_30;
      piVar2 = *(int **)(DAT_0067b4b4 + 0x33c);
      local_30 = 0x56bffa;
      uVar5 = (**(code **)(*piVar2 + 0x138))();
      local_2c = (int *)0x56c006;
      FUN_00416244(local_40,uVar5,0xfc);
      local_2c = local_40;
      local_30 = 0x56c017;
      FUN_00416478(local_50,"idjog");
      piVar3 = local_2c;
      local_2c = (int *)0x56c022;
      FUN_0050e448(piVar2,local_50,piVar3);
      local_2c = (int *)0x56c02d;
      FUN_00404b6c(&local_2c,local_30);
      piVar2 = local_2c;
      local_2c = (int *)0x56c035;
      iVar6 = FUN_00409ff8(piVar2);
      if (sRam00000000 == 0x74) {
        if (*(byte *)(DAT_0067b4bc + DAT_0067b4c0 * 0x708 + 0x5ef + iVar6) < 0x2a) {
          pcVar1 = (char *)(DAT_0067b4bc + DAT_0067b4c0 * 0x708 + 0x5ef + iVar6);
          *pcVar1 = *pcVar1 + '\x01';
        }
        local_2c = (int *)0x56c091;
        FUN_00409dd8(*(undefined1 *)(DAT_0067b4bc + DAT_0067b4c0 * 0x708 + 0x5ef + iVar6),&local_58)
        ;
        local_2c = (int *)0x56c09c;
        FUN_004051d4(&local_54,local_58);
        local_2c = local_54;
        local_30 = 0x56c0b3;
        uVar5 = (**(code **)(**(int **)(DAT_0067b4b4 + 0x33c) + 0x138))();
        local_2c = (int *)0x56c0bf;
        FUN_00416244(local_68,uVar5,0xfc);
        local_2c = local_68;
        local_30 = 0x56c0d0;
        FUN_00416478(local_78,"idade");
        piVar2 = local_2c;
        local_2c = (int *)0x56c0e4;
        FUN_0050e9b8(*(undefined4 *)(DAT_0067b4b4 + 0x33c),local_78,piVar2);
        local_2c = (int *)0x56c0f1;
        TForm3_timesalvar(param_1,DAT_0067b4c0);
      }
      if (sRam00000000 == 0x77) {
        *(undefined1 *)(DAT_0067b4bc + DAT_0067b4c0 * 0x708 + 0x6b7 + iVar6) = 1;
        local_2c = (int *)0x56c123;
        FUN_00642c50(0x9b,&local_7c);
        local_2c = local_7c;
        local_30 = 0x56c13a;
        uVar5 = (**(code **)(**(int **)(DAT_0067b4b4 + 0x33c) + 0x138))();
        local_2c = (int *)0x56c149;
        FUN_00416244(local_8c,uVar5,0xfc);
        local_2c = local_8c;
        local_30 = 0x56c160;
        FUN_00416478(local_9c,"nxlado");
        piVar2 = local_2c;
        local_2c = (int *)0x56c177;
        FUN_0050e9b8(*(undefined4 *)(DAT_0067b4b4 + 0x33c),local_9c,piVar2);
        local_2c = (int *)0x56c184;
        TForm3_timesalvar(param_1,DAT_0067b4c0);
      }
      if (sRam00000000 == 0x78) {
        *(undefined1 *)(DAT_0067b4bc + DAT_0067b4c0 * 0x708 + 0x6b7 + iVar6) = 0;
        local_2c = (int *)0x56c1b9;
        FUN_00642c50(0x99,&local_a0);
        local_2c = local_a0;
        piVar2 = *(int **)(DAT_0067b4b4 + 0x33c);
        local_30 = 0x56c1d5;
        uVar5 = (**(code **)(*piVar2 + 0x138))();
        local_2c = (int *)0x56c1e4;
        FUN_00416244(local_b0,uVar5,0xfc);
        local_2c = local_b0;
        local_30 = 0x56c1fb;
        FUN_00416478(local_c0,"nxlado");
        piVar3 = local_2c;
        local_2c = (int *)0x56c209;
        FUN_0050e9b8(piVar2,local_c0,piVar3);
        local_2c = (int *)0x56c216;
        TForm3_timesalvar(param_1,DAT_0067b4c0);
      }
    }
  }
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_0056c2ce;
  puStack_24 = (undefined1 *)0x56c239;
  FUN_00405744(local_c0,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x56c244;
  FUN_00404ff0(&local_a0);
  puStack_24 = (undefined1 *)0x56c25a;
  FUN_00405744(local_9c,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x56c262;
  FUN_00404ff0(&local_7c);
  puStack_24 = (undefined1 *)0x56c275;
  FUN_00405744(local_78,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x56c27d;
  FUN_004048d4(&local_58);
  puStack_24 = (undefined1 *)0x56c285;
  FUN_00404ff0(&local_54);
  puStack_24 = (undefined1 *)0x56c298;
  FUN_00405744(local_50,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x56c2a0;
  FUN_00404ff0(&local_30);
  puStack_24 = (undefined1 *)0x56c2a8;
  FUN_004048d4(&local_2c);
  puStack_24 = (undefined1 *)0x56c2bb;
  FUN_00405744(&local_28,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x56c2c3;
  FUN_00404ff0(&local_8);
  return;
}

