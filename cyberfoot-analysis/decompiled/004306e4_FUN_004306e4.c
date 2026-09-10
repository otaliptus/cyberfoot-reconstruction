// Address: 004306e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004306e4(int *param_1,short param_2,HANDLE param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_58 [20];
  int local_44;
  undefined4 local_40;
  
  if ((param_2 != 2) || (param_3 == (HANDLE)0x0)) {
    FUN_0042b868(PTR_PTR_0066b3dc);
  }
  FUN_0043051c(param_1);
  FUN_004032a8(local_58,0x54,0);
  GetObjectA(param_3,0x54,local_58);
  if (local_44 == 0) {
    local_40 = 0;
  }
  FUN_0042fe4c(param_1,param_3,param_4,local_58);
  *(undefined1 *)(param_1[10] + 0x70) = 0;
  iVar1 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x22) = iVar1 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}

