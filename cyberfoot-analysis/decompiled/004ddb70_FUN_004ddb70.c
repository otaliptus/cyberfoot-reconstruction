// Address: 004ddb70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004ddb70(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (DAT_0066971c != 0) {
    cVar1 = FUN_0046cde4(DAT_0066971c);
    if (cVar1 != '\0') {
      iVar2 = FUN_0046cae0(DAT_0066971c);
      if (param_1 == iVar2) {
        return 1;
      }
    }
  }
  return 0;
}

