// Address: 004a9d74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004a9d74(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 4) {
    FUN_004a6414(param_1,4);
    return 1;
  }
  uVar1 = FUN_004a5d08(**(undefined4 **)(param_1 + 4));
  return uVar1;
}

