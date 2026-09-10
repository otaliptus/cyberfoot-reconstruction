// Address: 005a9bb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm32_cknegritoClick(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x324) + 200))();
  PTR_DAT_0066ac78[0xdd] = uVar1;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x324) + 200))();
  if (cVar2 == '\0') {
    FUN_0064a178("opcoes","opnegrito",&DAT_005a9c18);
    return;
  }
  FUN_0064a178("opcoes","opnegrito",&DAT_005a9c48);
  return;
}

