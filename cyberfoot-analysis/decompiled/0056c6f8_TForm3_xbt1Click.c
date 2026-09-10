// Address: 0056c6f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_xbt1Click(int param_1)

{
  int iVar1;
  
  FUN_00466128(*(undefined4 *)(param_1 + 0x400),1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x2f8),1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x370),0);
  if (DAT_0067b4c9 != '\0') {
    FUN_00466128(*(undefined4 *)(param_1 + 0x330),1);
    FUN_00466128(*(undefined4 *)(param_1 + 0x318),1);
    FUN_00466128(*(undefined4 *)(param_1 + 0x314),1);
    FUN_00466128(*(undefined4 *)(param_1 + 0x41c),1);
    FUN_00466128(*(undefined4 *)(param_1 + 0x32c),1);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
    if (0 < iVar1) {
      (**(code **)(**(int **)(param_1 + 0x2f8) + 0x20c))
                (*(int **)(param_1 + 0x2f8),0,0,0,1,DAT_0056c808);
    }
  }
  FUN_00466128(*(undefined4 *)(param_1 + 0x434),1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x438),1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x428),1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x420),1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x424),1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x3b8),1);
  DAT_0067b4c9 = 0;
  (**(code **)(**(int **)(DAT_0067b4b4 + 0x2f8) + 0xc4))();
  return;
}

