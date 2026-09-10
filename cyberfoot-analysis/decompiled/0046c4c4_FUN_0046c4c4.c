// Address: 0046c4c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046c4c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00469730(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      uVar2 = FUN_004696f4(param_1,iVar3);
      FUN_00403c80(uVar2,param_2,param_3);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

