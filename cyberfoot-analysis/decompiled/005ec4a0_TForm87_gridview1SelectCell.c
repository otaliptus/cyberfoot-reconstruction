// Address: 005ec4a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm87_gridview1SelectCell
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puStack_2c = &stack0xfffffffc;
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  local_24 = 0;
  puStack_30 = &LAB_005ec520;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  FUN_00416244(&local_14,param_4,0xfc);
  FUN_00416478(&local_24,"status");
  iVar1 = FUN_004f77e4(*(undefined4 *)(param_1 + 0x304),&local_24,&local_14);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x390),*(undefined4 *)(iVar1 + 0x14));
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005ec527;
  puStack_30 = (undefined1 *)0x5ec51f;
  FUN_00405744(&local_24,PTR_DAT_004010f8,2);
  return;
}

