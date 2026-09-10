// Address: 0062e1f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm93_ck_verjligClick(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x318) + 200))();
  PTR_DAT_0066ac78[0x176] = cVar1;
  if (cVar1 != '\0') {
    FUN_0064a178("opcoes","ver42",&DAT_0062e250);
    return;
  }
  FUN_0064a178("opcoes","ver42",&DAT_0062e27c);
  return;
}

