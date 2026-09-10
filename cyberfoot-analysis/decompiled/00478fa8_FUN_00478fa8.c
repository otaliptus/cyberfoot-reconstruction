// Address: 00478fa8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00478fa8(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar1 = FUN_0042fcb8(PTR_PTR_00429378,1);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
  }
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x3c))(*(int **)(param_1 + 0x4c),1);
  return *(undefined4 *)(param_1 + 0x4c);
}

