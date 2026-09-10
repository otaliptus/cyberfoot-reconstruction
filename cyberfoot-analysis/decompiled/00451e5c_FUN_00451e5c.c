// Address: 00451e5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00451e5c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x87];
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_0047490c(iVar1,param_1[0xa0]);
    }
    param_1[0x87] = param_2;
    if (param_2 == 0) {
      FUN_0044fa44(param_1,0,1);
    }
    else {
      FUN_00474950(param_2,param_1[0xa0]);
      FUN_00426f28(param_1[0x87],param_1);
      uVar2 = FUN_00473bd0(param_1[0x87]);
      FUN_0044fa44(param_1,uVar2,1);
    }
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

