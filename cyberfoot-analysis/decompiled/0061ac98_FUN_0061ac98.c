// Address: 0061ac98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0061ac98(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
               *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) * 0x2f8) == 2) &&
     (0x50 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_2 * 0x130))) {
    return 0;
  }
  if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
               *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) * 0x2f8) == 3) &&
     (0x3c < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_2 * 0x130))) {
    uVar1 = 0;
  }
  else if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) * 0x2f8) == 4) &&
          (0x28 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_2 * 0x130))) {
    uVar1 = 0;
  }
  else if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) * 0x2f8) == 5) &&
          (0x1e < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_2 * 0x130))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT31((int3)((uint)(param_2 * 0x26) >> 8),1);
  }
  return uVar1;
}

