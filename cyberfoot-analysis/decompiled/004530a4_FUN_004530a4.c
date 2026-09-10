// Address: 004530a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004530a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0044e8c4(*(undefined4 *)(param_1 + 0x22c));
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      uVar2 = FUN_0044e8f4(*(undefined4 *)(param_1 + 0x22c),iVar3);
      FUN_0044e450(uVar2,3,1);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

