// Address: 0056bba8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_Image12Click(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  byte bVar7;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;
  
  bVar7 = 0;
  puStack_1c = &stack0xfffffffc;
  iVar5 = 0xe;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puStack_20 = &LAB_0056be99;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_28 = (undefined4 *)0x56bbd8;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x134))();
  if (0 < iVar5) {
    if (DAT_0067b4c9 == '\0') {
      puStack_28 = (undefined4 *)&stack0xffffffec;
      puStack_2c = (undefined4 *)0x56bbff;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x138))();
      puStack_2c = (undefined4 *)0x56bc0b;
      FUN_00416244(&local_24,uVar4,0xfc);
      puStack_2c = &local_24;
      uStack_30 = 0x56bc1c;
      FUN_00416478(local_34,"idjog");
      puVar1 = puStack_2c;
      puStack_2c = (undefined4 *)0x56bc30;
      FUN_0050e448(*(undefined4 *)(DAT_0067b4b4 + 0x33c),local_34,puVar1);
      puStack_2c = (undefined4 *)0x56bc3b;
      FUN_00404b6c(&stack0xfffffff0,unaff_ESI);
      puStack_2c = (undefined4 *)0x56bc43;
      iVar5 = FUN_00409ff8(unaff_EBX);
      puVar1 = (undefined4 *)(DAT_0067b4bc + DAT_0067b4c0 * 0x708 + -0x24 + iVar5 * 0x24);
      *puVar1 = DAT_0056beb8;
      *(undefined2 *)(puVar1 + (uint)bVar7 * -2 + 1) = (&DAT_0056bebc)[(uint)bVar7 * -4];
      piVar2 = *(int **)(DAT_0067b4b4 + 0x33c);
      puStack_2c = (undefined4 *)0x56bc7a;
      uVar4 = (**(code **)(*piVar2 + 0x138))();
      puStack_2c = (undefined4 *)0x56bc86;
      (**(code **)(*piVar2 + 0x1e4))(piVar2,uVar4);
      puStack_2c = (undefined4 *)0x56bc93;
      TForm3_timesalvar(param_1,DAT_0067b4c0);
      local_c = 0;
      puStack_2c = (undefined4 *)0x56bca6;
      iVar5 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
      if (-1 < iVar5 + -1) {
        uVar6 = iVar5 == 0;
        local_8 = 0;
        do {
          puStack_28 = &local_38;
          puStack_2c = (undefined4 *)0x56bccf;
          (**(code **)(**(int **)(param_1 + 0x33c) + 0x100))(*(int **)(param_1 + 0x33c),1,local_8);
          puStack_28 = (undefined4 *)0x56bcdc;
          FUN_00405378(local_38,&DAT_0056bec4);
          if ((bool)uVar6) {
            local_c = local_c + 1;
          }
          local_8 = local_8 + 1;
          iVar5 = iVar5 + -1;
          uVar6 = iVar5 == 0;
        } while (!(bool)uVar6);
      }
      puStack_28 = (undefined4 *)0x56bcf2;
      FUN_00409dd8(local_c,&local_40);
      puStack_28 = (undefined4 *)0x56bcfd;
      FUN_004051d4(&local_3c,local_40);
      puStack_28 = (undefined4 *)0x56bd0b;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_3c);
    }
    else {
      puStack_28 = &local_48;
      puStack_2c = (undefined4 *)0x56bd22;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x138))();
      puStack_2c = (undefined4 *)0x56bd2e;
      FUN_00416244(local_58,uVar4,0xfc);
      puStack_2c = (undefined4 *)local_58;
      uStack_30 = 0x56bd3f;
      FUN_00416478(local_68,"idjog");
      puVar1 = puStack_2c;
      puStack_2c = (undefined4 *)0x56bd53;
      FUN_0050e448(*(undefined4 *)(DAT_0067b4b4 + 0x33c),local_68,puVar1);
      puStack_2c = (undefined4 *)0x56bd5e;
      FUN_00404b6c(&local_44,local_48);
      puStack_2c = (undefined4 *)0x56bd66;
      iVar5 = FUN_00409ff8(local_44);
      puVar1 = (undefined4 *)(DAT_006d1ee8 * 0x6d4 + 0x67b504 + iVar5 * 0x24);
      *puVar1 = DAT_0056beb8;
      *(undefined2 *)(puVar1 + (uint)bVar7 * -2 + 1) = (&DAT_0056bebc)[(uint)bVar7 * -4];
      piVar2 = *(int **)(DAT_0067b4b4 + 0x33c);
      puStack_2c = (undefined4 *)0x56bd9b;
      uVar4 = (**(code **)(*piVar2 + 0x138))();
      puStack_2c = (undefined4 *)0x56bda7;
      (**(code **)(*piVar2 + 0x1e4))(piVar2,uVar4);
      *(int *)(&DAT_0067b524 + DAT_006d1ee8 * 0x6d4) =
           *(int *)(&DAT_0067b524 + DAT_006d1ee8 * 0x6d4) + -1;
      puStack_28 = (undefined4 *)0x56bdc5;
      TForm3_selecaosalvar(param_1,DAT_006d1ee8);
    }
  }
  puStack_28 = (undefined4 *)0x56bdd3;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
  puStack_28 = (undefined4 *)0x56bddb;
  FUN_00409dd8(uVar4,&local_70);
  puStack_28 = (undefined4 *)0x56bde8;
  FUN_00404bac(&local_70,&LAB_0056bed0);
  puStack_28 = (undefined4 *)0x56bdf3;
  FUN_004051d4(&local_6c,local_70);
  puStack_28 = &local_6c;
  puStack_2c = (undefined4 *)0x56be04;
  FUN_00642c50(0x2ef,&local_74);
  puVar1 = puStack_28;
  puStack_28 = (undefined4 *)0x56be0d;
  FUN_0040526c(puVar1,local_74);
  puStack_28 = (undefined4 *)0x56be1b;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x364),local_6c);
  puVar3 = puStack_1c;
  *in_FS_OFFSET = local_24;
  puStack_1c = &LAB_0056bea0;
  puStack_20 = (undefined1 *)0x56be30;
  FUN_00404ff0(&local_74,local_24,puVar3);
  puStack_20 = (undefined1 *)0x56be38;
  FUN_004048d4(&local_70);
  puStack_20 = (undefined1 *)0x56be40;
  FUN_00404ff0(&local_6c);
  puStack_20 = (undefined1 *)0x56be53;
  FUN_00405744(local_68,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x56be5b;
  FUN_00404ff0(&local_48);
  puStack_20 = (undefined1 *)0x56be68;
  FUN_004048f8(&local_44,2);
  puStack_20 = (undefined1 *)0x56be75;
  FUN_00405008(&local_3c,2);
  puStack_20 = (undefined1 *)0x56be88;
  FUN_00405744(local_34,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x56be90;
  FUN_00404ff0(&stack0xffffffec);
  puStack_20 = (undefined1 *)0x56be98;
  FUN_004048d4(&stack0xfffffff0);
  return;
}

