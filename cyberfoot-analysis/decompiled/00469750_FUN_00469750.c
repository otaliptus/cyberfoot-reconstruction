// Address: 00469750
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00469750(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00469730(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_004696f4(param_1,iVar3);
      (**(code **)(iVar2 + 0x38))(*(undefined4 *)(iVar2 + 0x3c),param_2);
      if (*(int *)(param_2 + 0xc) != 0) {
        return;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

