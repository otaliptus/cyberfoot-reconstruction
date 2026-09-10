// Address: 00451ed4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00451ed4(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x88];
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_0047490c(iVar1,param_1[0xa1]);
    }
    param_1[0x88] = param_2;
    if ((char)param_1[0x9d] != '\0') {
      FUN_00450030(param_1);
    }
    if (param_1[0x88] == 0) {
      FUN_0044fa44(param_1,0,2);
      if ((char)param_1[0x9d] != '\0') {
        FUN_004500b4(param_1,0);
        FUN_004500b4(param_1,1);
      }
    }
    else {
      FUN_00474950(param_1[0x88],param_1[0xa1]);
      FUN_00426f28(param_1[0x88],param_1);
      uVar2 = FUN_00473bd0(param_1[0x88]);
      FUN_0044fa44(param_1,uVar2,2);
      if ((char)param_1[0x9d] != '\0') {
        FUN_0044ffa4(param_1);
      }
    }
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

