// Address: 004696f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004696f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x198);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 8);
  }
  if (param_2 < iVar2) {
    FUN_0041e01c(iVar1,param_2);
  }
  else {
    FUN_0041e01c(*(undefined4 *)(param_1 + 0x19c),param_2 - iVar2);
  }
  return;
}

