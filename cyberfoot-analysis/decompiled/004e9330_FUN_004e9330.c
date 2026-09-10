// Address: 004e9330
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e9330(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  int local_14;
  
  FUN_004e9204(param_1,auStack_1c);
  iVar1 = FUN_004e91f8(param_1);
  iVar1 = iVar1 + 2;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x244) + 0x34))();
  FUN_004e9204(param_1,auStack_1c);
  FUN_0040709c(local_14,uStack_18,iVar2 + local_14,param_2,iVar1);
  return;
}

