// Address: 0058845c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm91_XiButton1Click(int param_1)

{
  int *piVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  undefined1 **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined1 **local_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  iVar5 = 7;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puStack_20 = &LAB_005885e9;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined4 *)0x58848c;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x300) + 0x134))();
  if (0 < iVar5) {
    puStack_28 = &local_c;
    piVar1 = *(int **)(DAT_006d21cc + 0x300);
    local_2c = (undefined1 **)0x5884ad;
    uVar4 = (**(code **)(*piVar1 + 0x138))();
    local_2c = (undefined1 **)0x5884b9;
    FUN_00416244(&local_1c,uVar4,0xfc);
    local_2c = &local_1c;
    local_30 = (undefined *)0x5884ca;
    FUN_00416478(&local_2c,&DAT_00588600);
    ppuVar2 = local_2c;
    local_2c = (undefined1 **)0x5884d5;
    FUN_0050e448(piVar1,&local_2c,ppuVar2);
    local_2c = (undefined1 **)0x5884e0;
    FUN_00404b6c(&local_8,local_c);
    local_2c = (undefined1 **)0x5884e8;
    DAT_006d21d4 = FUN_00409ff8(local_8);
    DAT_006d21dd = 1;
    local_2c = (undefined1 **)0x588501;
    FUN_00466128(*(undefined4 *)(param_1 + 0x350),1);
    local_2c = (undefined1 **)0x58850e;
    FUN_00466128(*(undefined4 *)(param_1 + 0x354),1);
    local_2c = (undefined1 **)0x58851b;
    FUN_00466128(*(undefined4 *)(param_1 + 0x378),1);
    local_2c = (undefined1 **)0x588528;
    FUN_00466128(*(undefined4 *)(param_1 + 0x37c),1);
    local_2c = (undefined1 **)0x588535;
    FUN_00642c50(0x1c2,&local_30);
    local_2c = (undefined1 **)0x588543;
    FUN_004e161c(*(undefined4 *)(param_1 + 0x378),local_30);
    local_2c = (undefined1 **)0x588550;
    FUN_00642c50(0x1c1,&local_34);
    local_2c = (undefined1 **)0x58855e;
    FUN_004e161c(*(undefined4 *)(param_1 + 0x37c),local_34);
    local_2c = (undefined1 **)0x58856b;
    FUN_00642c50(0x417,&local_3c);
    local_2c = local_3c;
    local_30 = &DAT_00588608;
    local_34 = 0x58858d;
    FUN_00405194(&local_40,*(int *)PTR_DAT_0066b5b8 + DAT_006d21d4 * 0x130);
    local_34 = local_40;
    local_38 = 0x58859d;
    FUN_00405330(&local_38,3);
    puStack_28 = (undefined4 *)0x5885ab;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x354),local_38);
  }
  puVar3 = local_1c;
  *in_FS_OFFSET = uStack_24;
  local_1c = &LAB_005885f0;
  puStack_20 = (undefined1 *)0x5885c5;
  FUN_00405008(&local_40,5,puVar3);
  puStack_20 = (undefined1 *)0x5885d8;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x5885e0;
  FUN_00404ff0(&local_c);
  puStack_20 = (undefined1 *)0x5885e8;
  FUN_004048d4(&local_8);
  return;
}

