// Address: 00451c90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00451c90(int *param_1,int *param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5
                 )

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00452178(param_1,param_3,param_5);
  if (iVar1 != 0) {
    iVar2 = FUN_00451fb4(param_1);
    if ((iVar2 != iVar1) || (iVar1 == param_1[0x9c])) {
      param_1[0x9c] = 0;
      (**(code **)(*param_2 + 0x18))();
      (**(code **)(*param_1 + 0x88))();
      if (iVar2 != 0) {
        FUN_0044e450(iVar2,1,0);
      }
      FUN_0044e450(iVar1,1,param_4);
      (**(code **)(*param_1 + 0x88))();
      (**(code **)(*param_2 + 0x20))();
    }
  }
  return;
}

