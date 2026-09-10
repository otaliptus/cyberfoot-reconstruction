// Address: 0059b910
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm14_bt4Click(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 ***pppuVar4;
  undefined1 **ppuVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc [24];
  undefined1 local_b4 [16];
  undefined1 local_a4 [16];
  undefined4 *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 *puStack_34;
  undefined1 auStack_30 [8];
  undefined4 ***local_28;
  undefined1 **ppuStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  
  local_18 = &stack0xfffffffc;
  iVar8 = 0x1a;
  do {
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puStack_1c = &LAB_0059bcf8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  ppuStack_24 = (undefined1 **)0x59b936;
  cVar6 = FUN_00651f8c();
  if (cVar6 == '\0') {
    ppuStack_24 = (undefined1 **)0x59b947;
    FUN_00642c50(0x310,&stack0xfffffff0);
    ppuStack_24 = (undefined1 **)0x59b955;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),unaff_EBX);
    ppuStack_24 = (undefined1 **)0x59b962;
    FUN_00466128(*(undefined4 *)(param_1 + 0x36c),1);
  }
  else {
    ppuStack_24 = (undefined1 **)0x59b974;
    iVar8 = FUN_00650130(*(undefined4 *)(PTR_DAT_0066ac78 + 8));
    if (iVar8 < 3) {
      ppuStack_24 = &local_18;
      piVar1 = *(int **)(param_1 + 0x318);
      local_28 = (undefined4 ***)0x59b991;
      uVar7 = (**(code **)(*piVar1 + 0x138))();
      local_28 = (undefined4 ***)0x59b99d;
      FUN_00416244(&local_28,uVar7,0xfc);
      local_28 = &local_28;
      auStack_30._4_4_ = 0x59b9ae;
      FUN_00416478(&local_38,&DAT_0059bd10);
      pppuVar4 = local_28;
      local_28 = (undefined4 ***)0x59b9b9;
      FUN_0050e448(piVar1,&local_38,pppuVar4);
      local_28 = (undefined4 ***)0x59b9c4;
      FUN_00404b6c(&stack0xffffffec,local_18);
      local_28 = (undefined4 ***)0x59b9cc;
      uVar7 = FUN_00409ff8(unaff_ESI);
      local_28 = (undefined4 ***)0x59b9d5;
      cVar6 = FUN_0059bd18(param_1,uVar7);
      if (cVar6 == '\0') {
        local_28 = (undefined4 ***)0x59bb28;
        FUN_00466128(*(undefined4 *)(param_1 + 0x36c),1);
        local_28 = (undefined4 ***)&local_94;
        piVar1 = *(int **)(param_1 + 0x318);
        auStack_30._4_4_ = 0x59bb3f;
        uVar7 = (**(code **)(*piVar1 + 0x138))();
        ppuStack_24 = (undefined1 **)0x59bb4e;
        FUN_00416244(local_a4,uVar7,0xfc);
        ppuStack_24 = (undefined1 **)local_a4;
        local_28 = (undefined4 ***)0x59bb65;
        FUN_00416478(local_b4,&DAT_0059bd10);
        ppuVar5 = ppuStack_24;
        ppuStack_24 = (undefined1 **)0x59bb73;
        FUN_0050e448(piVar1,local_b4,ppuVar5);
        ppuStack_24 = (undefined1 **)0x59bb84;
        FUN_00404b6c(&local_90,local_94);
        ppuStack_24 = (undefined1 **)0x59bb8f;
        iVar8 = FUN_00409ff8(local_90);
        ppuStack_24 = (undefined1 **)0x59bba8;
        FUN_004030d4(local_cc,*(int *)PTR_DAT_0066b5b8 + iVar8 * 0x130);
        ppuStack_24 = (undefined1 **)0x59bbba;
        FUN_004030a4(local_cc,&DAT_0059bd14,0x15);
        ppuStack_24 = (undefined1 **)0x59bbcb;
        FUN_00405194(&local_8c,local_cc);
        ppuStack_24 = (undefined1 **)&local_8c;
        local_28 = (undefined4 ***)0x59bbe2;
        FUN_00642c50(0x135,&local_d0);
        ppuVar5 = ppuStack_24;
        ppuStack_24 = (undefined1 **)0x59bbee;
        FUN_0040526c(ppuVar5,local_d0);
        ppuStack_24 = (undefined1 **)0x59bbff;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_8c);
      }
      else {
        local_28 = *(undefined4 ****)
                    ((int)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10) + 4
                    );
        auStack_30._4_4_ =
             *(undefined4 *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
        auStack_30._0_4_ = 0x59ba05;
        FUN_004bc5a0(0xb4);
        auStack_30._0_4_ = &local_40;
        piVar1 = *(int **)(param_1 + 0x318);
        puStack_34 = (undefined4 *)0x59ba23;
        unique0x100003a3 = (double)in_ST0;
        uVar7 = (**(code **)(*piVar1 + 0x138))();
        puStack_34 = (undefined4 *)0x59ba2f;
        FUN_00416244(local_50,uVar7,0xfc);
        puStack_34 = (undefined4 *)local_50;
        local_38 = (undefined1 *)0x59ba40;
        FUN_00416478(local_60,&DAT_0059bd10);
        puVar3 = puStack_34;
        puStack_34 = (undefined4 *)0x59ba4b;
        FUN_0050e448(piVar1,local_60,puVar3);
        puStack_34 = (undefined4 *)0x59ba56;
        FUN_00404b6c(&local_3c,local_40);
        puStack_34 = (undefined4 *)0x59ba5e;
        uVar7 = FUN_00409ff8(local_3c);
        puStack_34 = (undefined4 *)0x59ba6b;
        FUN_0064fd84(uVar7,*(undefined4 *)PTR_DAT_0066b2b4);
        puStack_34 = &local_68;
        piVar1 = *(int **)(param_1 + 0x318);
        local_38 = (undefined1 *)0x59ba85;
        auStack_30 = (undefined1  [8])(double)in_ST0;
        uVar7 = (**(code **)(*piVar1 + 0x138))();
        local_38 = (undefined1 *)0x59ba91;
        FUN_00416244(local_78,uVar7,0xfc);
        local_38 = local_78;
        local_3c = 0x59baa5;
        FUN_00416478(local_88,&DAT_0059bd10);
        puVar2 = local_38;
        local_38 = (undefined1 *)0x59bab3;
        FUN_0050e448(piVar1,local_88,puVar2);
        local_38 = (undefined1 *)0x59babe;
        FUN_00404b6c(&local_64,local_68);
        local_38 = (undefined1 *)0x59bac6;
        uVar7 = FUN_00409ff8(local_64);
        local_38 = (undefined1 *)0x59bad4;
        FUN_00650218(uVar7,*(undefined4 *)(PTR_DAT_0066ac78 + 8));
        piVar1 = *(int **)(param_1 + 0x318);
        auStack_30._0_4_ = 0x59bae4;
        uVar7 = (**(code **)(*piVar1 + 0x138))();
        auStack_30._0_4_ = 0x59baf0;
        (**(code **)(*piVar1 + 0x1e4))(piVar1,uVar7);
        auStack_30._0_4_ = 0x59bafc;
        FUN_006380e8(*(undefined4 *)PTR_DAT_0066b054);
        auStack_30._0_4_ = 0x59bb09;
        (**(code **)(**(int **)(param_1 + 0x3cc) + 100))(*(int **)(param_1 + 0x3cc),0);
        auStack_30._0_4_ = 0x59bb16;
        (**(code **)(**(int **)(param_1 + 0x3c8) + 100))(*(int **)(param_1 + 0x3c8),0);
      }
    }
    else {
      ppuStack_24 = (undefined1 **)0x59bc11;
      FUN_00642c50(0x13c,&local_d4);
      ppuStack_24 = (undefined1 **)0x59bc22;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_d4);
      ppuStack_24 = (undefined1 **)0x59bc2f;
      FUN_00466128(*(undefined4 *)(param_1 + 0x36c),1);
    }
  }
  puVar2 = local_18;
  *in_FS_OFFSET = uStack_20;
  local_18 = &LAB_0059bd02;
  puStack_1c = (undefined1 *)0x59bc4c;
  FUN_00405008(&local_d4,2,puVar2);
  puStack_1c = (undefined1 *)0x59bc62;
  FUN_00405744(local_b4,PTR_DAT_004010f8,2);
  puStack_1c = (undefined1 *)0x59bc6d;
  FUN_00404ff0(&local_94);
  puStack_1c = (undefined1 *)0x59bc78;
  FUN_004048d4(&local_90);
  puStack_1c = (undefined1 *)0x59bc83;
  FUN_00404ff0(&local_8c);
  puStack_1c = (undefined1 *)0x59bc99;
  FUN_00405744(local_88,PTR_DAT_004010f8,2);
  puStack_1c = (undefined1 *)0x59bca1;
  FUN_00404ff0(&local_68);
  puStack_1c = (undefined1 *)0x59bca9;
  FUN_004048d4(&local_64);
  puStack_1c = (undefined1 *)0x59bcbc;
  FUN_00405744(local_60,PTR_DAT_004010f8,2);
  puStack_1c = (undefined1 *)0x59bcc4;
  FUN_00404ff0(&local_40);
  puStack_1c = (undefined1 *)0x59bccc;
  FUN_004048d4(&local_3c);
  puStack_1c = (undefined1 *)0x59bcdf;
  FUN_00405744(&local_38,PTR_DAT_004010f8,2);
  puStack_1c = (undefined1 *)0x59bce7;
  FUN_00404ff0(&local_18);
  puStack_1c = (undefined1 *)0x59bcef;
  FUN_004048d4(&stack0xffffffec);
  puStack_1c = (undefined1 *)0x59bcf7;
  FUN_00404ff0(&stack0xfffffff0);
  return;
}

