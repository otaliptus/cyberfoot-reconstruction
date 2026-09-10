// Address: 0045e260
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045e260(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*(int *)param_1[0x8f] + 0x14))();
  if (0 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0xcc))();
    param_1[0x98] = iVar1;
    piVar2 = (int *)FUN_00403a54(PTR_PTR_0041bda0,1);
    param_1[0x9e] = (int)piVar2;
    (**(code **)(*piVar2 + 8))(piVar2,param_1[0x8f]);
  }
  FUN_00469d9c(param_1);
  return;
}

