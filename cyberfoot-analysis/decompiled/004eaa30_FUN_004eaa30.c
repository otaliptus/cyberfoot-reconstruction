// Address: 004eaa30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eaa30(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = (**(code **)(*param_1 + 0xf8))();
  FUN_004e7abc(param_1[0x91],uVar2);
  iVar3 = (**(code **)(*(int *)param_1[0xa2] + 0x14))();
  (**(code **)(*(int *)param_1[0x91] + 0xc))((int *)param_1[0x91],param_1[0x9c] < iVar3);
  FUN_004e7afc(param_1[0x91],0);
  iVar3 = (**(code **)(*(int *)param_1[0xa2] + 0x14))();
  if (0 < iVar3) {
    iVar3 = (**(code **)(*(int *)param_1[0x91] + 0x34))();
    iVar4 = FUN_00465c0c(param_1);
    piVar1 = (int *)param_1[0x91];
    uVar2 = (**(code **)(*piVar1 + 0x34))();
    iVar5 = FUN_00465c50(param_1);
    (**(code **)(*piVar1 + 0x40))(piVar1,(iVar4 + -2) - iVar3,2,iVar5 + -4,uVar2);
    (**(code **)(*(int *)param_1[0xa2] + 0x14))();
    FUN_004ea5ec(param_1);
    iVar3 = param_1[0x91];
    FUN_004e7ec0(iVar3);
    uVar2 = FUN_00402c38();
    FUN_004e7afc(iVar3,uVar2);
  }
  FUN_004ea314(param_1,param_2,param_3);
  return;
}

