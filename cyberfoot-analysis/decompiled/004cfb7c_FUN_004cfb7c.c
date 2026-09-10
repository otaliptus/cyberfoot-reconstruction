// Address: 004cfb7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cfb7c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x96];
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_0047490c(iVar1,param_1[0xcc]);
    }
    param_1[0x96] = param_2;
    if (param_2 != 0) {
      FUN_00474950(param_2,param_1[0xcc]);
      FUN_00426f28(param_1[0x96],param_1);
    }
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

