// Address: 004a9f2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a9f2c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 4) {
    FUN_004a6414(param_1,4);
  }
  uVar1 = FUN_004a5d08(param_2);
  **(undefined4 **)(param_1 + 4) = uVar1;
  return;
}

