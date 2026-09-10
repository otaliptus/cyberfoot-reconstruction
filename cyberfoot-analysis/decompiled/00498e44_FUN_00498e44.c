// Address: 00498e44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00498e44(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x158);
  FUN_004988fc(param_1,0xd8);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_00498ca4(param_1);
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_00498d58(param_1);
  }
  return;
}

