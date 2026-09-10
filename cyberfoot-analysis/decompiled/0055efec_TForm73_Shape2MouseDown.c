// Address: 0055efec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm73_Shape2MouseDown(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = FUN_0042ab64(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x16c));
  piVar1 = *(int **)(param_1 + 0x32c);
  piVar1[0x16] = iVar3;
  cVar2 = (**(code **)(*piVar1 + 0x3c))();
  if (cVar2 != '\0') {
    FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x16c),
                 *(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x58));
  }
  return;
}

