// Address: 005c7588
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c7588(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x37c));
  iVar2 = iVar1 + 1;
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    if (0x13 < iVar2) {
      FUN_005c5d38(param_1,1,iVar1 + -0x12,2);
      return;
    }
    FUN_005c5d38(param_1,1,iVar2,1);
  }
  else if (iVar2 < 10) {
    FUN_005c5d38(param_1,1,iVar2,1);
  }
  else {
    FUN_005c5d38(param_1,1,iVar1 + -8,2);
  }
  return;
}

