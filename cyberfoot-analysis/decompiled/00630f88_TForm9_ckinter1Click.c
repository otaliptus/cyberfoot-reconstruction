// Address: 00630f88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm9_ckinter1Click(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0053d2e0(*(undefined4 *)(param_1 + 0x328));
  if (cVar1 == '\0') {
    FUN_0053d2ec(*(undefined4 *)(param_1 + 0x324),0);
  }
  cVar1 = FUN_0053d2e0(*(undefined4 *)(param_1 + 0x328));
  if (cVar1 != '\0') {
    FUN_0064a178("opcoes","inter1",&DAT_00630fec);
    return;
  }
  FUN_0064a178("opcoes","inter1",&DAT_00631018);
  return;
}

