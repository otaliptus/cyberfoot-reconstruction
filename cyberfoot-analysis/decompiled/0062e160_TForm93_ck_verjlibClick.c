// Address: 0062e160
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm93_ck_verjlibClick(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x314) + 200))();
  PTR_DAT_0066ac78[0x175] = cVar1;
  if (cVar1 != '\0') {
    FUN_0064a178("opcoes","ver41",&DAT_0062e1c0);
    return;
  }
  FUN_0064a178("opcoes","ver41",&DAT_0062e1ec);
  return;
}

