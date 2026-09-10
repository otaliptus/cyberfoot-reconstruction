// Address: 0062da70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm92_Button3Click(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1dc))();
  iVar1 = 0x1b;
  puVar2 = (undefined4 *)PTR_DAT_0066b674;
  puVar3 = (undefined4 *)PTR_DAT_0066b1bc;
  do {
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x1b;
  puVar2 = (undefined4 *)PTR_DAT_0066b41c;
  piVar4 = (int *)PTR_DAT_0066b674;
  do {
    *puVar2 = *(undefined4 *)(PTR_DAT_0066b50c + *piVar4 * 0x30 + -8);
    puVar2 = puVar2 + 1;
    piVar4 = piVar4 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_0062cf40(param_1);
  return;
}

