// Address: 0040d3d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040d3d8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_0066c748 == 0x12) {
    if (param_1 < 100) {
      uVar1 = FUN_0040c534();
      uVar2 = (int)*(uint *)(param_4 + -4) >> 0x1f;
      param_1 = param_1 + ((int)((uVar1 & 0xffff) + ((*(uint *)(param_4 + -4) ^ uVar2) - uVar2)) /
                          100) * 100;
    }
    if (0 < *(int *)(param_4 + -4)) {
      *(int *)(param_4 + -4) = -*(int *)(param_4 + -4);
    }
  }
  else {
    *(int *)(param_4 + -4) = *(int *)(param_4 + -4) + -1;
  }
  return *(int *)(param_4 + -4) + param_1;
}

