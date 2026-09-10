// Address: 004317bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004317bc(int param_1)

{
  undefined4 uVar1;
  
  FUN_0043052c(param_1);
  FUN_0042ff0c(param_1,param_1);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10) = 0;
  return uVar1;
}

