// Address: 004ef580
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ef580(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x251) != '\0') {
    *param_2 = *param_2 + *param_2 + 0x19;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x238) + 0x1c))();
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x238) + 0x2c))();
    *param_2 = *param_2 + iVar2 + 4;
  }
  return;
}

