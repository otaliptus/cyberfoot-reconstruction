// Address: 0042058c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042058c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[6];
  if (iVar1 < 0x41) {
    if (iVar1 < 9) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0x10;
    }
  }
  else {
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = iVar1 + 3;
    }
    iVar2 = iVar2 >> 2;
  }
  (**(code **)(*param_1 + 0x28))(param_1,iVar2 + iVar1);
  return;
}

