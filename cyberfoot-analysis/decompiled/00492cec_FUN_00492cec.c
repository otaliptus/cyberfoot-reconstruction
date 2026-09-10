// Address: 00492cec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00492cec(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1ac);
  if (*(int *)(param_1 + 0x148) < 2) {
    if (*(uint *)(param_1 + 0x94) < *(int *)(param_1 + 0x140) - 1U) {
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x14c) + 0xc);
    }
    else {
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x14c) + 0x48);
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x1c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}

