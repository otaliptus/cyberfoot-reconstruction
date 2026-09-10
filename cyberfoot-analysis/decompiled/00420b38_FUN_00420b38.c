// Address: 00420b38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420b38(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
    if (param_3 != iVar1) {
      FUN_0040e42c(PTR_DAT_0041b404,1,PTR_PTR_0066b23c);
      FUN_00404250();
    }
  }
  return;
}

