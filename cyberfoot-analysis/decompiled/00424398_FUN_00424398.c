// Address: 00424398
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00424398(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_004208d4(*(undefined4 *)(param_1 + 4));
  if ((iVar1 <= param_2) && (param_2 <= *(int *)(param_1 + 0x10) + iVar1)) {
    *(int *)(param_1 + 0x10) = param_2 - iVar1;
    return;
  }
  FUN_004244c0(param_1);
  FUN_004208f4(*(undefined4 *)(param_1 + 4),param_2 >> 0x1f,extraout_ECX,param_2,param_2 >> 0x1f);
  return;
}

