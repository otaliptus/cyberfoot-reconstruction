// Address: 004f7960
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f7960(int *param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_10 = 0;
  *param_3 = 0;
  local_c = param_3;
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x120))(param_1,param_2);
  iVar2 = FUN_0050f404(local_8,4);
  *param_4 = iVar1 + iVar2;
  iVar1 = FUN_004f5b28(local_8[0x166],param_2);
  FUN_004f789c(param_2,param_4,&local_10,*(undefined1 *)(iVar1 + 0xc));
  return;
}

