// Address: 004a6824
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a6824(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  
  FUN_004a6414(param_1,7);
  uVar1 = FUN_004a5d0c(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x14)));
  **(undefined2 **)(param_1 + 4) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 4) + 2) = *(undefined1 *)(param_1 + 0x16);
  *(undefined1 *)(*(int *)(param_1 + 4) + 3) = *(undefined1 *)(param_1 + 0x17);
  *(undefined1 *)(*(int *)(param_1 + 4) + 4) = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(*(int *)(param_1 + 4) + 5) = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(*(int *)(param_1 + 4) + 6) = *(undefined1 *)(param_1 + 0x1a);
  FUN_004a66a0(param_1,param_2);
  return;
}

