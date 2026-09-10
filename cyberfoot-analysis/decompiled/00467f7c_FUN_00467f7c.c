// Address: 00467f7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00467f7c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  uVar7 = 0;
  iVar5 = (**(code **)(*param_1 + 0x58))();
  if (iVar5 != 0) {
    iVar5 = (**(code **)(*param_1 + 0x58))();
    iVar6 = FUN_004039cc(param_1);
    if (iVar5 != iVar6) {
      iVar5 = (**(code **)(*param_1 + 0x58))();
      uVar7 = (**(code **)(iVar5 + 0x2c))(iVar5,1,*(undefined4 *)PTR_DAT_0066b3ac);
      FUN_0046599c(uVar7,iVar2);
      FUN_00465978(uVar7,iVar1);
      FUN_00465c24(uVar7,iVar3 - iVar1);
      FUN_00465c68(uVar7,iVar4 - iVar2);
    }
  }
  return uVar7;
}

