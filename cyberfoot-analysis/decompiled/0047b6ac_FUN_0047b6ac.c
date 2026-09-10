// Address: 0047b6ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047b6ac(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_004048d4(param_2);
  iVar3 = 1;
  iVar1 = FUN_00404ba4(param_1);
  if (0 < iVar1) {
    do {
      uVar2 = (uint)*(byte *)(param_1 + -1 + iVar3);
      if (((byte)PTR_DAT_0066b77c[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) == 0) {
        if (((*(char *)(param_1 + -1 + iVar3) == '&') && (0 < iVar1 - iVar3)) &&
           (iVar3 = iVar3 + 1, *(char *)(param_1 + -1 + iVar3) != '&')) {
          FUN_00404abc(param_2,*(undefined1 *)(param_1 + -1 + iVar3));
        }
      }
      else {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar1);
  }
  return;
}

