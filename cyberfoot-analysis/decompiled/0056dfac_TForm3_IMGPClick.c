// Address: 0056dfac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm3_IMGPClick(int param_1)

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
  local_1c = &LAB_0056e13e;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  ppuStack_24 = (undefined1 **)0x56dfe1;
  FUN_00465978(*(undefined4 *)(param_1 + 0x424),*(undefined4 *)(*(int *)(param_1 + 0x420) + 0x40));
  DAT_006d1f04 = 0;
  ppuStack_24 = (undefined1 **)0x56dff6;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x134))();
  if (0 < iVar5) {
    ppuStack_24 = (undefined1 **)0x56e008;
    _DAT_0067b4c4 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x138))();
    ppuStack_24 = (undefined1 **)&local_c;
    piVar1 = *(int **)(param_1 + 0x2f8);
    puStack_28 = (undefined1 *)0x56e021;
    uVar4 = (**(code **)(*piVar1 + 0x138))();
    ppuStack_24 = (undefined1 **)0x56e02d;
    FUN_00416244(&local_1c,uVar4,0xfc);
    ppuStack_24 = &local_1c;
    puStack_28 = (undefined1 *)0x56e03e;
    FUN_00416478(&local_2c,&DAT_0056e154);
    ppuVar3 = ppuStack_24;
    ppuStack_24 = (undefined1 **)0x56e049;
    FUN_0050e448(piVar1,&local_2c,ppuVar3);
    ppuStack_24 = (undefined1 **)0x56e054;
    FUN_00404b6c(&local_8,local_c);
    ppuStack_24 = (undefined1 **)0x56e05c;
    DAT_0067b4c0 = FUN_00409ff8(local_8);
  }
  ppuStack_24 = (undefined1 **)0x56e071;
  uVar4 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x33c),"status");
  ppuStack_24 = (undefined1 **)0x56e078;
  FUN_0050a804(uVar4,1);
  ppuStack_24 = (undefined1 **)0x56e085;
  FUN_00466128(*(undefined4 *)(param_1 + 0x368),1);
  ppuStack_24 = (undefined1 **)0x56e092;
  FUN_00466128(*(undefined4 *)(param_1 + 0x36c),1);
  ppuStack_24 = (undefined1 **)&local_34;
  piVar1 = *(int **)(param_1 + 0x2f8);
  puStack_28 = (undefined1 *)0x56e0a6;
  uVar4 = (**(code **)(*piVar1 + 0x138))();
  puStack_28 = (undefined1 *)0x56e0b2;
  FUN_00416244(local_44,uVar4,0xfc);
  puStack_28 = local_44;
  local_2c = 0x56e0c3;
  FUN_00416478(local_54,&DAT_0056e154);
  puVar2 = puStack_28;
  puStack_28 = (undefined1 *)0x56e0ce;
  FUN_0050e448(piVar1,local_54,puVar2);
  puStack_28 = (undefined1 *)0x56e0d9;
  FUN_00404b6c(&local_30,local_34);
  puStack_28 = (undefined1 *)0x56e0e1;
  uVar4 = FUN_00409ff8(local_30);
  puStack_28 = (undefined1 *)0x56e0ea;
  TForm3_listtime(param_1,uVar4);
  *in_FS_OFFSET = (int)ppuStack_24;
  local_1c = &LAB_0056e145;
  iStack_20 = 0x56e10a;
  FUN_00405744(local_54,PTR_DAT_004010f8,2);
  iStack_20 = 0x56e112;
  FUN_00404ff0(&local_34);
  iStack_20 = 0x56e11a;
  FUN_004048d4(&local_30);
  iStack_20 = 0x56e12d;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  iStack_20 = 0x56e135;
  FUN_00404ff0(&local_c);
  iStack_20 = 0x56e13d;
  FUN_004048d4(&local_8);
  return;
}

