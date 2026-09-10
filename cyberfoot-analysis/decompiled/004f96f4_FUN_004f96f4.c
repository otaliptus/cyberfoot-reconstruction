// Address: 004f96f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f96f4(int *param_1,int param_2)

{
  int iVar1;
  int local_18;
  undefined1 local_14 [4];
  
  FUN_004f7960(param_1,param_2,&local_18,local_14);
  local_18 = local_18 + param_2;
  iVar1 = (param_2 + 1) - local_18;
  if (iVar1 == 0 || param_2 + 1 < local_18) {
    iVar1 = iVar1 + -1;
    do {
      FUN_004f66a4(param_1[0x166],local_18);
      local_18 = local_18 + -1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0);
  }
  FUN_004f5b28(param_1[0x166],param_2);
  FUN_004f5954();
  (**(code **)(*param_1 + 0x7c))();
  return;
}

