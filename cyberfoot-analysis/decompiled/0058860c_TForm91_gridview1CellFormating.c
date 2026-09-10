// Address: 0058860c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm91_gridview1CellFormating
               (int param_1,undefined4 param_2,undefined4 param_3,byte param_4,undefined4 param_5,
               undefined4 *param_6,int param_7)

{
  undefined1 **ppuVar1;
  int iVar2;
  int *in_FS_OFFSET;
  undefined1 **local_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined4 local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  local_8 = 4;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_20 = &LAB_005886da;
  puStack_24 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_24;
  if ((param_4 & 8) == 0) {
    iVar2 = **(int **)(param_1 + 0x300);
    uStack_28 = 0x588645;
    iVar2 = (**(code **)(iVar2 + 0x11c))(*(int **)(param_1 + 0x300),iVar2,0);
    if (param_7 < iVar2) {
      puStack_24 = &local_c;
      local_2c = (undefined1 **)0x58865b;
      FUN_00416244(&local_1c,param_7,0xfc);
      local_2c = &local_1c;
      FUN_00416478(&local_2c,&DAT_005886f0);
      ppuVar1 = local_2c;
      local_2c = (undefined1 **)0x58867b;
      FUN_0050e448(*(undefined4 *)(param_1 + 0x300),&local_2c,ppuVar1);
      local_2c = (undefined1 **)0x588686;
      FUN_00404b6c(&local_8,local_c);
      local_2c = (undefined1 **)0x58868e;
      iVar2 = FUN_00409ff8(local_8);
      if (0x14 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar2 * 0x130)) {
        *param_6 = 0xff;
      }
    }
  }
  *in_FS_OFFSET = (int)puStack_24;
  local_1c = &LAB_005886e1;
  puStack_20 = (undefined1 *)0x5886c9;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x5886d1;
  FUN_00404ff0(&local_c);
  puStack_20 = (undefined1 *)0x5886d9;
  FUN_004048d4(&local_8);
  return;
}

