// Address: 00488324
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00488324(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_PTR_006631e0;
  }
  iVar1 = *(int *)(*(int *)(param_4 + -4) + 0x84);
  if ((iVar1 != 0) && (puVar2 = (undefined *)FUN_004039cc(iVar1), param_1 == puVar2)) {
    return;
  }
  FUN_00403a84(*(undefined4 *)(*(int *)(param_4 + -4) + 0x84));
  uVar3 = (**(code **)(param_1 + 0x2c))(param_1,1,*(undefined4 *)(param_4 + -4));
  *(undefined4 *)(*(int *)(param_4 + -4) + 0x84) = uVar3;
  return;
}

