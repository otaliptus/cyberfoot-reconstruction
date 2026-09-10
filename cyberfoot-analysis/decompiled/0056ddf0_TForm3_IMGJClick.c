// Address: 0056ddf0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm3_IMGJClick(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_FS_OFFSET;
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 **ppuStack_24;
  int iStack_20;
  undefined1 *local_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  iVar5 = 10;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_1c = &LAB_0056df82;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  ppuStack_24 = (undefined1 **)0x56de25;
  FUN_00465978(*(undefined4 *)(param_1 + 0x424),*(undefined4 *)(*(int *)(param_1 + 0x428) + 0x40));
  DAT_006d1f04 = 1;
  ppuStack_24 = (undefined1 **)0x56de3a;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x134))();
  if (0 < iVar5) {
    ppuStack_24 = (undefined1 **)0x56de4c;
    _DAT_0067b4c4 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x138))();
    ppuStack_24 = (undefined1 **)&local_c;
    piVar1 = *(int **)(param_1 + 0x2f8);
    puStack_28 = (undefined1 *)0x56de65;
    uVar4 = (**(code **)(*piVar1 + 0x138))();
    ppuStack_24 = (undefined1 **)0x56de71;
    FUN_00416244(&local_1c,uVar4,0xfc);
    ppuStack_24 = &local_1c;
    puStack_28 = (undefined1 *)0x56de82;
    FUN_00416478(&local_2c,&DAT_0056df98);
    ppuVar3 = ppuStack_24;
    ppuStack_24 = (undefined1 **)0x56de8d;
    FUN_0050e448(piVar1,&local_2c,ppuVar3);
    ppuStack_24 = (undefined1 **)0x56de98;
    FUN_00404b6c(&local_8,local_c);
    ppuStack_24 = (undefined1 **)0x56dea0;
    DAT_0067b4c0 = FUN_00409ff8(local_8);
  }
  ppuStack_24 = (undefined1 **)0x56deb2;
  FUN_00466128(*(undefined4 *)(param_1 + 0x368),0);
  ppuStack_24 = (undefined1 **)0x56debf;
  FUN_00466128(*(undefined4 *)(param_1 + 0x36c),0);
  ppuStack_24 = (undefined1 **)0x56decf;
  uVar4 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x33c),"status");
  ppuStack_24 = (undefined1 **)0x56ded6;
  FUN_0050a804(uVar4,0);
  ppuStack_24 = (undefined1 **)&local_34;
  piVar1 = *(int **)(param_1 + 0x2f8);
  puStack_28 = (undefined1 *)0x56deea;
  uVar4 = (**(code **)(*piVar1 + 0x138))();
  puStack_28 = (undefined1 *)0x56def6;
  FUN_00416244(local_44,uVar4,0xfc);
  puStack_28 = local_44;
  local_2c = 0x56df07;
  FUN_00416478(local_54,&DAT_0056df98);
  puVar2 = puStack_28;
  puStack_28 = (undefined1 *)0x56df12;
  FUN_0050e448(piVar1,local_54,puVar2);
  puStack_28 = (undefined1 *)0x56df1d;
  FUN_00404b6c(&local_30,local_34);
  puStack_28 = (undefined1 *)0x56df25;
  uVar4 = FUN_00409ff8(local_30);
  puStack_28 = (undefined1 *)0x56df2e;
  TForm3_listtime(param_1,uVar4);
  *in_FS_OFFSET = (int)ppuStack_24;
  local_1c = &LAB_0056df89;
  iStack_20 = 0x56df4e;
  FUN_00405744(local_54,PTR_DAT_004010f8,2);
  iStack_20 = 0x56df56;
  FUN_00404ff0(&local_34);
  iStack_20 = 0x56df5e;
  FUN_004048d4(&local_30);
  iStack_20 = 0x56df71;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  iStack_20 = 0x56df79;
  FUN_00404ff0(&local_c);
  iStack_20 = 0x56df81;
  FUN_004048d4(&local_8);
  return;
}

