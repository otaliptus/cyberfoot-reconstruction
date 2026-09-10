// Address: 0062e310
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm93_ck_verjasiClick(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 800) + 200))();
  PTR_DAT_0066ac78[0x178] = cVar1;
  if (cVar1 != '\0') {
    FUN_0064a178("opcoes","ver44",&DAT_0062e370);
    return;
  }
  FUN_0064a178("opcoes","ver44",&DAT_0062e39c);
  return;
}

