// Address: 004270a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004270a0(int param_1)

{
  int *piVar1;
  
  while (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)FUN_0041e104(*(int *)(param_1 + 0x10));
    if (((*(byte *)((int)piVar1 + 0x1d) & 1) == 0) &&
       (DAT_004270f4 != (DAT_004270f4 & *(ushort *)(param_1 + 0x1c)))) {
      FUN_00426fe8(param_1,piVar1);
    }
    else {
      FUN_00427068(param_1,piVar1);
    }
    (**(code **)(*piVar1 + -4))(piVar1,1);
  }
  return;
}

