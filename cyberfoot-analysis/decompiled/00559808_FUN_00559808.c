// Address: 00559808
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_00559808(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0041edb0(*(undefined4 *)(param_1 + 0xbc));
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar3);
      if (*(int *)(iVar2 + 0x34) == 2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

