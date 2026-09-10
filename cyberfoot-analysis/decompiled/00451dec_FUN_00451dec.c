// Address: 00451dec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00451dec(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x86];
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_0047490c(iVar1,param_1[0x9f]);
    }
    param_1[0x86] = param_2;
    if (param_2 == 0) {
      FUN_0044fa44(param_1,0,0);
    }
    else {
      FUN_00474950(param_2,param_1[0x9f]);
      FUN_00426f28(param_1[0x86],param_1);
      uVar2 = FUN_00473bd0(param_1[0x86]);
      FUN_0044fa44(param_1,uVar2,0);
    }
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

