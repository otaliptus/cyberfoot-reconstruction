// Address: 005eba2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm87_ckescalacaoClick(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x35c) + 200))();
  PTR_DAT_0066ac78[0xde] = uVar1;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x35c) + 200))();
  if (cVar2 == '\0') {
    FUN_0064a178("opcoes","opescalacao",&DAT_005eba90);
    return;
  }
  FUN_0064a178("opcoes","opescalacao",&DAT_005ebac0);
  return;
}

