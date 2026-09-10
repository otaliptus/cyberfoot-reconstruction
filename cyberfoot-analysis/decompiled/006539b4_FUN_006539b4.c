// Address: 006539b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_006539b4(uint param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(PTR_DAT_0066b574 + 0x2248);
  iVar3 = 0x16e;
  do {
    iVar4 = iVar3;
    if ((-1 < *piVar1) || (*piVar1 == -2)) break;
    iVar3 = iVar4 + -1;
    piVar1 = piVar1 + -6;
    iVar4 = 5;
  } while (iVar3 != 4);
  if (iVar4 < 0x16f) {
    piVar1 = (int *)(PTR_DAT_0066b574 + iVar4 * 0x18 + -8);
    do {
      if ((*piVar1 == -1) && (uVar2 = FUN_0040c3a8(), (uVar2 & 0xffff) == param_1)) {
        *piVar1 = param_2;
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 6;
    } while (iVar4 != 0x16f);
  }
  return -1;
}

