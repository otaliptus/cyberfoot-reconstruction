// Address: 004352c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004352c8(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_00434c3c(PTR_PTR_00434b4c,1,param_1);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return *(undefined4 *)(param_1 + 4);
}

