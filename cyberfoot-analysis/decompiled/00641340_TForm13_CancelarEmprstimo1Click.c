// Address: 00641340
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_CancelarEmprstimo1Click(int param_1)

{
  int *piVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  wchar_t *local_30;
  undefined4 local_2c;
  undefined1 **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  iVar4 = 6;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_1c = &LAB_00641461;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = &local_c;
  piVar1 = *(int **)(param_1 + 0x334);
  ppuStack_28 = (undefined1 **)0x641375;
  uVar3 = (**(code **)(*piVar1 + 0x138))();
  ppuStack_28 = (undefined1 **)0x641381;
  FUN_00416244(&local_1c,uVar3,0xfc);
  ppuStack_28 = &local_1c;
  local_2c = 0x641392;
  FUN_00416478(&local_2c,&DAT_00641478);
  ppuVar2 = ppuStack_28;
  ppuStack_28 = (undefined1 **)0x64139d;
  FUN_0050e448(piVar1,&local_2c,ppuVar2);
  ppuStack_28 = (undefined1 **)0x6413a8;
  FUN_00404b6c(&local_8,local_c);
  ppuStack_28 = (undefined1 **)0x6413b0;
  FUN_00409ff8(local_8);
  ppuStack_28 = (undefined1 **)0x6413b5;
  FUN_0064ff24();
  ppuStack_28 = (undefined1 **)0x6413bf;
  FUN_006380e8(DAT_006d52c4);
  ppuStack_28 = (undefined1 **)0x6413d3;
  (**(code **)(**(int **)(param_1 + 0x334) + 0x210))(*(int **)(param_1 + 0x334),DAT_0064147c);
  ppuStack_28 = (undefined1 **)0x641484;
  local_2c = 0x6413f8;
  uVar3 = FUN_00402c38();
  local_2c = 0x641400;
  FUN_006468f4(uVar3,&local_34);
  local_2c = local_34;
  local_30 = L"</shad>";
  local_34 = 0x641415;
  FUN_00405330(&local_30,3);
  local_34 = 0x641423;
  FUN_00545088(*(undefined4 *)(param_1 + 0x420),local_30);
  ppuVar2 = ppuStack_28;
  *in_FS_OFFSET = local_30;
  ppuStack_28 = (undefined1 **)&LAB_00641468;
  local_2c = 0x64143d;
  FUN_00405008(&local_34,2,ppuVar2);
  local_2c = 0x641450;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  local_2c = 0x641458;
  FUN_00404ff0(&local_c);
  local_2c = 0x641460;
  FUN_004048d4(&local_8);
  return;
}

