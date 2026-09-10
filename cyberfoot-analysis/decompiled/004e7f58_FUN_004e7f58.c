// Address: 004e7f58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e7f58(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_1[6]) {
    FUN_004e7ec0(param_1);
    iVar1 = FUN_00402c38();
    iVar2 = (**(code **)(*param_1 + 0x34))();
    iVar1 = iVar1 + iVar2 + 2;
    FUN_0040709c(param_1[0x16],iVar1,param_1[0x16] + param_1[0x19],param_2,param_1[10] + iVar1);
  }
  return;
}

