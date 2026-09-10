// Address: 004521fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004521fc(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = FUN_0046cde4(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x295) == '\0')) {
    iVar2 = FUN_0041edb0(*(undefined4 *)(param_1 + 0x23c));
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        FUN_0045223c(param_1,iVar3);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

