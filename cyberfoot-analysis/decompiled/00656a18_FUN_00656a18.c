// Address: 00656a18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00656a18(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(PTR_DAT_0066ac78 + 0x16c) + 1;
  if (iVar3 < 0x16f) {
    piVar4 = (int *)(PTR_DAT_0066b574 + iVar3 * 0x18 + -8);
    do {
      iVar1 = *piVar4;
      if (iVar1 < 0) {
        if (iVar3 == 0x16e) {
          *(undefined4 *)(PTR_DAT_0066ac78 + 0x16c) = 0x16e;
        }
      }
      else {
        if (0 < iVar1) {
          *(int *)(PTR_DAT_0066ac78 + 0x16c) = iVar3;
          return;
        }
        if (iVar1 == 0) {
          cVar2 = FUN_00656830(iVar3);
          if (cVar2 != '\0') {
            *(int *)(PTR_DAT_0066ac78 + 0x16c) = iVar3;
            return;
          }
        }
        else if (iVar1 == 3) {
          cVar2 = FUN_0065688c(iVar3);
          if (cVar2 != '\0') {
            *(int *)(PTR_DAT_0066ac78 + 0x16c) = iVar3;
            return;
          }
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 6;
    } while (iVar3 != 0x16f);
  }
  return;
}

