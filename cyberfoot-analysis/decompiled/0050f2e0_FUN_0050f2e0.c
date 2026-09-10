// Address: 0050f2e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050f2e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 700) == '\0') {
    iVar2 = FUN_0050f5f8(param_1,param_3);
  }
  else if (*(char *)(param_1 + 700) == '\x01') {
    iVar2 = FUN_0050f73c(param_1,param_3);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),param_2);
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + 0x90) + 0xc);
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

