// Address: 0062e4b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm93_ck_greClick(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x338) + 200))();
  *PTR_DAT_0066b598 = uVar1;
  if (*PTR_DAT_0066b598 != '\0') {
    FUN_0064a178("opcoes",&DAT_0062e514,&DAT_0062e508);
    return;
  }
  FUN_0064a178("opcoes",&DAT_0062e514,&DAT_0062e530);
  return;
}

