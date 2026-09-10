// Address: 00468564
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00468564(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0x78))(piVar1,*(int *)(param_2 + 8) + 0x38);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_2 + 0xc) = 1;
    }
  }
  return;
}

