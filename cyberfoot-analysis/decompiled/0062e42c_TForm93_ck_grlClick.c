// Address: 0062e42c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm93_ck_grlClick(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x308) + 200))();
  *PTR_DAT_0066b244 = uVar1;
  if (*PTR_DAT_0066b244 != '\0') {
    FUN_0064a178("opcoes",&DAT_0062e490,&DAT_0062e484);
    return;
  }
  FUN_0064a178("opcoes",&DAT_0062e490,&DAT_0062e4ac);
  return;
}

