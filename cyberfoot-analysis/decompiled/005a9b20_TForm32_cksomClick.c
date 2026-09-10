// Address: 005a9b20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm32_cksomClick(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 800) + 200))();
  PTR_DAT_0066ac78[0xdc] = uVar1;
  cVar2 = (**(code **)(**(int **)(param_1 + 800) + 200))();
  if (cVar2 == '\0') {
    FUN_0064a178("opcoes","opsom",&DAT_005a9b84);
    return;
  }
  FUN_0064a178("opcoes","opsom",&DAT_005a9bb0);
  return;
}

