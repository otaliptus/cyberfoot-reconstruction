// Address: 0046a680
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0046a680(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00463094();
  if (iVar1 != 0) {
    iVar2 = FUN_004673cc(iVar1,*param_2 + 0xbc00,param_2[1],param_2[2]);
    param_2[3] = iVar2;
  }
  return iVar1 != 0;
}

