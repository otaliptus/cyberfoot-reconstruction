// Address: 004014b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004014b0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_0066c5e8 == (int *)0x0) {
    puVar1 = LocalAlloc(0,0x644);
    if (puVar1 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    *puVar1 = DAT_0066c5e4;
    iVar3 = 0;
    DAT_0066c5e4 = puVar1;
    do {
      piVar2 = puVar1 + iVar3 * 4 + 1;
      *piVar2 = (int)DAT_0066c5e8;
      iVar3 = iVar3 + 1;
      DAT_0066c5e8 = piVar2;
    } while (iVar3 != 100);
  }
  piVar2 = DAT_0066c5e8;
  DAT_0066c5e8 = (int *)*DAT_0066c5e8;
  return piVar2;
}

