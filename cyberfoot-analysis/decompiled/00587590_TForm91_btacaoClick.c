// Address: 00587590
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm91_btacaoClick(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 local_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  iVar5 = 0x10;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puStack_1c = &LAB_00587968;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  if ((DAT_006d21dc == '\0') ||
     (*(int *)(*(int *)PTR_DAT_0066af70 + 100 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) <
      *(int *)PTR_DAT_0066b610)) {
    if (DAT_006d21dc == '\0') {
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x2ec + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) < 0x12
         ) {
        puStack_24 = (undefined4 *)0x5877b3;
        iVar5 = (**(code **)(**(int **)(param_1 + 0x300) + 0x134))();
        if (0 < iVar5) {
          puStack_24 = &local_50;
          piVar1 = *(int **)(DAT_006d21cc + 0x300);
          puStack_28 = (undefined4 *)0x5877d4;
          uVar4 = (**(code **)(*piVar1 + 0x138))();
          puStack_28 = (undefined4 *)0x5877e0;
          FUN_00416244(local_60,uVar4,0xfc);
          puStack_28 = (undefined4 *)local_60;
          puStack_2c = (undefined *)0x5877f1;
          FUN_00416478(local_70,&DAT_00587980);
          puVar2 = puStack_28;
          puStack_28 = (undefined4 *)0x5877fc;
          FUN_0050e448(piVar1,local_70,puVar2);
          puStack_28 = (undefined4 *)0x587807;
          FUN_00404b6c(&local_4c,local_50);
          puStack_28 = (undefined4 *)0x58780f;
          DAT_006d21d4 = FUN_00409ff8(local_4c);
          puStack_28 = (undefined4 *)0x587821;
          FUN_00642c50(0x176,&local_78);
          puStack_28 = (undefined4 *)local_78;
          puStack_2c = &LAB_00587998;
          local_30 = 0x587843;
          FUN_00405194(&local_7c,*(int *)PTR_DAT_0066b5b8 + DAT_006d21d4 * 0x130);
          local_30 = local_7c;
          local_34 = (undefined *)0x587853;
          FUN_00405330(&local_74,3);
          local_34 = (undefined *)0x587861;
          FUN_004e1414(*(undefined4 *)(param_1 + 0x354),local_74);
          local_34 = (undefined *)0x58786e;
          FUN_00466128(*(undefined4 *)(param_1 + 0x350),1);
          local_34 = (undefined *)0x58787b;
          FUN_00466128(*(undefined4 *)(param_1 + 0x354),1);
          local_34 = (undefined *)0x587888;
          FUN_00466128(*(undefined4 *)(param_1 + 0x378),1);
          local_34 = (undefined *)0x587895;
          (**(code **)(**(int **)(param_1 + 0x378) + 100))(*(int **)(param_1 + 0x378),0);
          puStack_24 = (undefined4 *)0x5878a2;
          FUN_00466128(*(undefined4 *)(param_1 + 0x37c),1);
          puStack_24 = (undefined4 *)0x5878af;
          FUN_00642c50(0x413,&local_80);
          puStack_24 = (undefined4 *)0x5878bd;
          FUN_004e161c(*(undefined4 *)(param_1 + 0x378),local_80);
          puStack_24 = (undefined4 *)0x5878ca;
          FUN_00642c50(0x414,&local_84);
          puStack_24 = (undefined4 *)0x5878d8;
          FUN_004e161c(*(undefined4 *)(param_1 + 0x37c),local_84);
          puStack_24 = (undefined4 *)0x5878e5;
          FUN_00466238(*(undefined4 *)(param_1 + 0x358),0);
          puStack_24 = (undefined4 *)0x5878f2;
          FUN_00466128(*(undefined4 *)(param_1 + 0x358),1);
        }
      }
      else {
        puStack_24 = (undefined4 *)0x587778;
        puStack_18 = &stack0xfffffffc;
        FUN_00466128(*(undefined4 *)(param_1 + 0x354),
                     CONCAT31((int3)((uint)*(int *)PTR_DAT_0066af70 >> 8),1));
        puStack_24 = (undefined4 *)0x587785;
        FUN_00642c50(0x412,&local_48);
        puStack_24 = (undefined4 *)0x587793;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x354),local_48);
        puStack_24 = (undefined4 *)0x5877a0;
        FUN_00466128(*(undefined4 *)(param_1 + 0x350),1);
      }
    }
    else {
      puStack_24 = (undefined4 *)0x58762e;
      puStack_18 = &stack0xfffffffc;
      iVar5 = (**(code **)(**(int **)(param_1 + 0x300) + 0x134))();
      if (0 < iVar5) {
        puStack_24 = (undefined4 *)&stack0xfffffff0;
        piVar1 = *(int **)(DAT_006d21cc + 0x300);
        puStack_28 = (undefined4 *)0x58764f;
        uVar4 = (**(code **)(*piVar1 + 0x138))();
        puStack_28 = (undefined4 *)0x58765b;
        FUN_00416244(&local_20,uVar4,0xfc);
        puStack_28 = &local_20;
        puStack_2c = (undefined *)0x58766c;
        FUN_00416478(&local_30,&DAT_00587980);
        puVar2 = puStack_28;
        puStack_28 = (undefined4 *)0x587677;
        FUN_0050e448(piVar1,&local_30,puVar2);
        puStack_28 = (undefined4 *)0x587682;
        FUN_00404b6c(&local_c,unaff_EBX);
        puStack_28 = (undefined4 *)0x58768a;
        DAT_006d21d4 = FUN_00409ff8(local_c);
        puStack_28 = (undefined4 *)0x58769c;
        FUN_00466128(*(undefined4 *)(param_1 + 0x350),1);
        puStack_28 = (undefined4 *)0x5876a9;
        FUN_00466128(*(undefined4 *)(param_1 + 0x354),1);
        puStack_28 = (undefined4 *)0x5876b6;
        FUN_00466128(*(undefined4 *)(param_1 + 0x378),1);
        puStack_28 = (undefined4 *)0x5876c3;
        FUN_00466128(*(undefined4 *)(param_1 + 0x37c),1);
        puStack_28 = (undefined4 *)0x5876d0;
        FUN_00642c50(0x1c2,&local_34);
        puStack_28 = (undefined4 *)0x5876de;
        FUN_004e161c(*(undefined4 *)(param_1 + 0x378),local_34);
        puStack_28 = (undefined4 *)0x5876eb;
        FUN_00642c50(0x1c1,&local_38);
        puStack_28 = (undefined4 *)0x5876f9;
        FUN_004e161c(*(undefined4 *)(param_1 + 0x37c),local_38);
        puStack_28 = (undefined4 *)0x587706;
        FUN_00642c50(0x411,&local_40);
        puStack_28 = (undefined4 *)local_40;
        puStack_2c = &DAT_00587988;
        local_30 = 0x587728;
        FUN_00405194(&local_44,*(int *)PTR_DAT_0066b5b8 + DAT_006d21d4 * 0x130);
        local_30 = local_44;
        local_34 = &DAT_00587990;
        local_38 = 0x58773d;
        FUN_00405330(&local_3c,4);
        puStack_24 = (undefined4 *)0x58774b;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x354),local_3c);
      }
    }
  }
  else {
    puStack_24 = (undefined4 *)0x5875e6;
    puStack_18 = &stack0xfffffffc;
    FUN_00466128(*(undefined4 *)(param_1 + 0x354),CONCAT31((int3)((uint)PTR_DAT_0066b610 >> 8),1));
    puStack_24 = (undefined4 *)0x5875f3;
    FUN_00642c50(0x410,&local_8);
    puStack_24 = (undefined4 *)0x587601;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x354),local_8);
    puStack_24 = (undefined4 *)0x58760e;
    FUN_00466128(*(undefined4 *)(param_1 + 0x350),1);
  }
  puVar3 = puStack_18;
  *in_FS_OFFSET = local_20;
  puStack_18 = &LAB_0058796f;
  puStack_1c = (undefined1 *)0x58790c;
  FUN_00405008(&local_84,5,puVar3);
  puStack_1c = (undefined1 *)0x58791f;
  FUN_00405744(local_70,PTR_DAT_004010f8,2);
  puStack_1c = (undefined1 *)0x587927;
  FUN_00404ff0(&local_50);
  puStack_1c = (undefined1 *)0x58792f;
  FUN_004048d4(&local_4c);
  puStack_1c = (undefined1 *)0x58793c;
  FUN_00405008(&local_48,6);
  puStack_1c = (undefined1 *)0x58794f;
  FUN_00405744(&local_30,PTR_DAT_004010f8,2);
  puStack_1c = (undefined1 *)0x587957;
  FUN_00404ff0(&stack0xfffffff0);
  puStack_1c = (undefined1 *)0x58795f;
  FUN_004048d4(&local_c);
  puStack_1c = (undefined1 *)0x587967;
  FUN_00404ff0(&local_8);
  return;
}

