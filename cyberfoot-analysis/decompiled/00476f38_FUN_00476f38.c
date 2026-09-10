// Address: 00476f38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00476f38(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_2 == 0) || ((*(byte *)(param_2 + 0x1c) & 8) == 0)) &&
     (iVar1 = *(int *)(param_1 + 0x68), param_2 != iVar1)) {
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
    }
    *(int *)(param_1 + 0x68) = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x6c) = param_1;
      FUN_00426f28(param_2,param_1);
    }
    FUN_00476fb0(param_1);
  }
  return;
}

