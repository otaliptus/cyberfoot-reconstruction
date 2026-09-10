// Address: 00420b00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420b00(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3);
    if (param_3 != iVar1) {
      FUN_0040e42c(PTR_DAT_0041b3ac,1,PTR_PTR_0066b614);
      FUN_00404250();
    }
  }
  return;
}

