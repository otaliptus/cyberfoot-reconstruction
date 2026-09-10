// Address: 005aa33c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm32_chdestaqueClick(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x380) + 200))();
  PTR_DAT_0066ac78[0x10c] = cVar1;
  if (cVar1 == '\0') {
    FUN_0064a178("opcoes","opdes",&DAT_005aa39c);
    return;
  }
  FUN_0064a178("opcoes","opdes",&DAT_005aa3c8);
  return;
}

