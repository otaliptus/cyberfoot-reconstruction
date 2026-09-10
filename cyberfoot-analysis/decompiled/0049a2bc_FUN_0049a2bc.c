// Address: 0049a2bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049a2bc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x154);
  if (*(int *)(param_1 + 0xf0) < 2) {
    if (*(uint *)(iVar1 + 8) < *(int *)(param_1 + 0xec) - 1U) {
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0xf4) + 0xc);
    }
    else {
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0xf4) + 0x48);
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x14) = 1;
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return;
}

