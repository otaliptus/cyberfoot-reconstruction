// Address: 005aa2a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm32_ckcontratoClick(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x368) + 200))();
  PTR_DAT_0066ac78[0x10d] = uVar1;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x368) + 200))();
  if (cVar2 == '\0') {
    FUN_0064a178("opcoes","opcontrato",&DAT_005aa308);
    return;
  }
  FUN_0064a178("opcoes","opcontrato",&DAT_005aa338);
  return;
}

