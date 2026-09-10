// Address: 0062e3a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm93_ck_dt1Click(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x300) + 200))();
  PTR_DAT_0066ac78[0x75d] = cVar1;
  if (cVar1 != '\0') {
    FUN_0064a178("opcoes",&DAT_0062e40c,&DAT_0062e400);
    return;
  }
  FUN_0064a178("opcoes",&DAT_0062e40c,&DAT_0062e428);
  return;
}

