// Address: 005fd900
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm54_Timer1Timer(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_005fd961;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_0043b234(*(undefined4 *)(param_1 + 0x2fc),0);
  FUN_00642c50(0x1ce,&local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_8);
  FUN_0043b234(*(undefined4 *)(param_1 + 0x300),1);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005fd968;
  puStack_14 = (undefined1 *)0x5fd960;
  FUN_00404ff0(&local_8,uStack_18,puVar1);
  return;
}

