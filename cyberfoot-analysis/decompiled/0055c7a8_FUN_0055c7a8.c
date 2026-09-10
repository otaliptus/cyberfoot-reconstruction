// Address: 0055c7a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055c7a8(int param_1)

{
  int iVar1;
  
  FUN_00482e44(param_1);
  iVar1 = *(int *)(param_1 + 0x308);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xb8) == 0)) {
    *(int *)(iVar1 + 0xb8) = param_1;
  }
  return;
}

