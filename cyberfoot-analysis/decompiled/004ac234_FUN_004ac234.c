// Address: 004ac234
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004ac234(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_004a6414(param_1,9);
  uVar1 = FUN_004a5d08(*(undefined4 *)(param_1 + 0x14));
  **(undefined4 **)(param_1 + 4) = uVar1;
  uVar1 = FUN_004a5d08(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 4) + 8) = *(undefined1 *)(param_1 + 0x1c);
  uVar1 = FUN_004a66a0(param_1,param_2);
  return uVar1;
}

