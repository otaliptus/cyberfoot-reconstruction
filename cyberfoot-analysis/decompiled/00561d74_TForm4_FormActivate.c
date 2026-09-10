// Address: 00561d74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm4_FormActivate(int param_1)

{
  if (*(char *)(*(int *)PTR_DAT_0066b010 + *(int *)PTR_DAT_0066ac90 * 200) == '\x1d') {
    FUN_00466128(*(undefined4 *)(param_1 + 0x31c),
                 CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b010 >> 8),1));
    (**(code **)(**(int **)(param_1 + 0x31c) + 0xd0))
              (*(int **)(param_1 + 0x31c),
               *(undefined1 *)(*(int *)PTR_DAT_0066b010 + 0xb0 + *(int *)PTR_DAT_0066ac90 * 200));
    return;
  }
  FUN_00466128(*(undefined4 *)(param_1 + 0x31c),0);
  return;
}

