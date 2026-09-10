// Address: 0042dc94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0042dc94(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x20))();
  }
  return uVar1;
}

