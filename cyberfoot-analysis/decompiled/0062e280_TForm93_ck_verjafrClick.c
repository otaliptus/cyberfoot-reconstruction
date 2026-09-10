// Address: 0062e280
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm93_ck_verjafrClick(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x31c) + 200))();
  PTR_DAT_0066ac78[0x177] = cVar1;
  if (cVar1 != '\0') {
    FUN_0064a178("opcoes","ver43",&DAT_0062e2e0);
    return;
  }
  FUN_0064a178("opcoes","ver43",&DAT_0062e30c);
  return;
}

