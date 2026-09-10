// Address: 00480710
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00480710(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x28] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x58))();
    iVar2 = FUN_004039cc(param_1);
    if (iVar1 == iVar2) {
      return 1;
    }
  }
  return 0;
}

