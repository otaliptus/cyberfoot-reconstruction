// Address: 0056c80c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_xbt2Click(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00466128(*(undefined4 *)(param_1 + 0x428),0);
  FUN_00466128(*(undefined4 *)(param_1 + 0x420),0);
  FUN_00466128(*(undefined4 *)(param_1 + 0x424),0);
  uVar1 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x33c),"status");
  FUN_0050a804(uVar1,1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x368),1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x36c),1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x434),0);
  FUN_00466128(*(undefined4 *)(param_1 + 0x438),0);
  FUN_00466128(*(undefined4 *)(param_1 + 0x400),0);
  FUN_00466128(*(undefined4 *)(param_1 + 0x2f8),0);
  FUN_00466128(*(undefined4 *)(param_1 + 0x370),1);
  if (DAT_0067b4c9 == '\0') {
    FUN_00466128(*(undefined4 *)(param_1 + 0x330),0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x318),0);
    FUN_00466128(*(undefined4 *)(param_1 + 800),0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x314),0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x32c),0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x324),0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x41c),0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x3b8),0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x368),1);
    FUN_00466128(*(undefined4 *)(param_1 + 0x36c),1);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x370) + 0x11c))();
    if (0 < iVar2) {
      (**(code **)(**(int **)(param_1 + 0x370) + 0x20c))
                (*(int **)(param_1 + 0x370),0,0,0,1,DAT_0056c980);
    }
  }
  DAT_0067b4c9 = 1;
  return;
}

