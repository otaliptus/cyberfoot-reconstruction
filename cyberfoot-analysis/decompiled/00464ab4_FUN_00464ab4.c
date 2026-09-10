// Address: 00464ab4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00464ab4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_18 [8];
  
  iVar1 = FUN_00464a80(param_1);
  iVar3 = 0;
  if (iVar1 != 0) {
    uVar4 = 0;
    FUN_00465d4c(iVar1,param_1,local_18,0);
    iVar2 = FUN_0046a2ec(iVar1,local_18,param_2,uVar4);
    iVar3 = iVar1;
    if (iVar2 != 0) {
      iVar3 = iVar2;
    }
  }
  return iVar3;
}

