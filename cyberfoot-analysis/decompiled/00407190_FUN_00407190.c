// Address: 00407190
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00407190(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1[2] - *param_1;
  iVar2 = (int)uVar1 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
  }
  *param_2 = iVar2 + *param_1;
  uVar1 = param_1[3] - param_1[1];
  iVar2 = (int)uVar1 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
  }
  param_2[1] = iVar2 + param_1[1];
  return;
}

