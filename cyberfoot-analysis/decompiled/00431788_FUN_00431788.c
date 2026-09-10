// Address: 00431788
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00431788(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0043052c(param_1);
  FUN_0042ff0c(param_1,param_1);
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 == *(int *)(iVar1 + 0x14)) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar2;
}

