// Address: 0063d928
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_gridview1CellColoring
               (int param_1,undefined4 param_2,undefined4 param_3,byte param_4,undefined4 param_5,
               undefined4 *param_6,uint param_7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_0063da89;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (PTR_DAT_0066ac78[0xdb] == '\0') {
    puStack_18 = &stack0xfffffffc;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
    if (((int)param_7 < iVar2) && ((param_4 & 8) == 0)) {
      if ((param_7 & 1) == 0) {
        *param_6 = 0xffffff;
      }
      else {
        *param_6 = 0xecffff;
      }
    }
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
    if (((int)param_7 < iVar2) && ((param_4 & 8) == 0)) {
      (**(code **)(**(int **)(DAT_006d52c4 + 0x334) + 0x100))
                (*(int **)(DAT_006d52c4 + 0x334),0,param_7,&local_c);
      FUN_00404b6c(&local_8,local_c);
      iVar2 = FUN_00409ff8(local_8);
      switch(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar2 * 0x130)) {
      case 0:
        *param_6 = *(undefined4 *)(PTR_DAT_0066ac78 + 0xe4);
        break;
      case 1:
        *param_6 = *(undefined4 *)(PTR_DAT_0066ac78 + 0xe8);
        break;
      case 2:
        *param_6 = *(undefined4 *)(PTR_DAT_0066ac78 + 0xec);
        break;
      case 3:
        *param_6 = *(undefined4 *)(PTR_DAT_0066ac78 + 0xf0);
        break;
      case 4:
        *param_6 = *(undefined4 *)(PTR_DAT_0066ac78 + 0xf4);
      }
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0063da90;
  puStack_1c = (undefined1 *)0x63da80;
  FUN_00404ff0(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x63da88;
  FUN_004048d4(&local_8);
  return;
}

