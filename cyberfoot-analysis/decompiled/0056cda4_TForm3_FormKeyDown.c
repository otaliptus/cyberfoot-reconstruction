// Address: 0056cda4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_FormKeyDown(int param_1,undefined4 param_2,short *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_0056ce9c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (*param_3 == 0x71) {
    TForm3_timesalvar(param_1,DAT_0067b4c0);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  if (*param_3 == 0x70) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
    if (iVar2 < 0x19) {
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0056207c,PTR_DAT_0066b4d8);
      (**(code **)(**(int **)PTR_DAT_0066b4d8 + 0xec))();
    }
    else {
      uVar3 = 0;
      FUN_00642c50(0x2f3,&local_c);
      FUN_00404b6c(&local_8,local_c);
      FUN_00437ef0(local_8,1,CONCAT22(extraout_var,DAT_0056ceac),uVar3);
    }
  }
  if (*param_3 == 0x72) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x134))();
    if (0 < iVar2) {
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005637dc,PTR_DAT_0066b414);
      (**(code **)(**(int **)PTR_DAT_0066b414 + 0xec))();
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0056cea3;
  puStack_1c = (undefined1 *)0x56ce93;
  FUN_00404ff0(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x56ce9b;
  FUN_004048d4(&local_8);
  return;
}

