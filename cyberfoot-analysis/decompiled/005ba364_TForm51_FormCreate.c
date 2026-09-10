// Address: 005ba364
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm51_FormCreate(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_005ba44b;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_00642c50(0x216,&local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_8);
  FUN_00642c50(0x41d,&local_c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_c);
  iVar3 = 0xca;
  puVar2 = (undefined4 *)(PTR_DAT_0066b2bc + 4);
  do {
    FUN_00409dd8(*puVar2,&local_18);
    FUN_00404c64(&local_14,3);
    FUN_004051d4(&local_10,local_14);
    FUN_0040526c(&local_10,puVar2[-1]);
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x308),local_10);
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x308),3);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005ba452;
  puStack_2c = (undefined1 *)0x5ba43d;
  FUN_004048f8(&local_18,2,puVar1);
  puStack_2c = (undefined1 *)0x5ba44a;
  FUN_00405008(&local_10,3);
  return;
}

