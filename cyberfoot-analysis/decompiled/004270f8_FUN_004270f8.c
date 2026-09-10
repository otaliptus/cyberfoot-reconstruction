// Address: 004270f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004270f8(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x1c) & 8) == 0) {
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 8;
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 8), -1 < iVar1 + -1)) {
      iVar2 = 0;
      do {
        FUN_0041e01c(*(undefined4 *)(param_1 + 0x10),iVar2);
        FUN_004270f8();
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

