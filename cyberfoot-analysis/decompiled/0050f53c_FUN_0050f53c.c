// Address: 0050f53c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050f53c(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1c [4];
  int iStack_18;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))();
  FUN_0050f4d0(param_1,auStack_1c);
  param_3[1] = iStack_18;
  iVar2 = *(int *)(iVar1 + 0x74) - *(int *)(*(int *)(param_1 + 0x238) + 0x2c);
  *param_3 = iVar2;
  param_3[2] = iVar2 + *(int *)(iVar1 + 0xb0);
  param_3[3] = param_3[1] + *(int *)(param_1 + 0x2e4);
  return;
}

