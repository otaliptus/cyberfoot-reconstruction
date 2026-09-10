// Address: 0050f590
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050f590(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  undefined4 local_14;
  
  uVar1 = FUN_0050f5f8(param_1,param_2);
  param_3[1] = uVar1;
  *param_3 = 0;
  FUN_0050f004(param_1,auStack_1c);
  param_3[2] = local_14;
  iVar2 = (**(code **)(*param_1 + 0x11c))();
  if (param_2 < iVar2) {
    iVar2 = (**(code **)(*param_1 + 0x120))(param_1,param_2);
  }
  else {
    iVar2 = param_1[0x127];
  }
  iVar3 = FUN_0050f404(param_1,3);
  param_3[3] = iVar3 + iVar2 + param_3[1];
  return;
}

