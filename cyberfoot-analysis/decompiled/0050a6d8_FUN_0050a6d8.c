// Address: 0050a6d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050a6d8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x8c) = param_2;
  if (param_2 < *(int *)(param_1 + 0xbc)) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0xbc);
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  iVar2 = *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0xb0) = iVar1;
  if ((*(int *)(param_1 + 0x38) != 0) && ((*(byte *)(param_1 + 0x1c) & 2) == 0)) {
    FUN_0050b1b0(*(int *)(param_1 + 0x38),0);
  }
  FUN_0050abec(param_1,9,iVar1 - iVar2);
  return;
}

