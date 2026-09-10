// Address: 006414ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_Comprarjogador1Click(int param_1)

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
  local_1c = &LAB_006415b9;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = &local_c;
  piVar1 = *(int **)(param_1 + 0x334);
  ppuStack_28 = (undefined1 **)0x6414e1;
  uVar3 = (**(code **)(*piVar1 + 0x138))();
  ppuStack_28 = (undefined1 **)0x6414ed;
  FUN_00416244(&local_1c,uVar3,0xfc);
  ppuStack_28 = &local_1c;
  local_2c = 0x6414fe;
  FUN_00416478(&local_2c,&DAT_006415d0);
  ppuVar2 = ppuStack_28;
  ppuStack_28 = (undefined1 **)0x641509;
  FUN_0050e448(piVar1,&local_2c,ppuVar2);
  ppuStack_28 = (undefined1 **)0x641514;
  FUN_00404b6c(&local_8,local_c);
  ppuStack_28 = (undefined1 **)0x64151c;
  FUN_00409ff8(local_8);
  ppuStack_28 = (undefined1 **)0x641521;
  FUN_0064ffdc();
  ppuStack_28 = (undefined1 **)0x64152b;
  FUN_006380e8(DAT_006d52c4);
  ppuStack_28 = (undefined1 **)0x6415d8;
  local_2c = 0x641550;
  uVar3 = FUN_00402c38();
  local_2c = 0x641558;
  FUN_006468f4(uVar3,&local_34);
  local_2c = local_34;
  local_30 = L"</shad>";
  local_34 = 0x64156d;
  FUN_00405330(&local_30,3);
  local_34 = 0x64157b;
  FUN_00545088(*(undefined4 *)(param_1 + 0x420),local_30);
  ppuVar2 = ppuStack_28;
  *in_FS_OFFSET = local_30;
  ppuStack_28 = (undefined1 **)&LAB_006415c0;
  local_2c = 0x641595;
  FUN_00405008(&local_34,2,ppuVar2);
  local_2c = 0x6415a8;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  local_2c = 0x6415b0;
  FUN_00404ff0(&local_c);
  local_2c = 0x6415b8;
  FUN_004048d4(&local_8);
  return;
}

