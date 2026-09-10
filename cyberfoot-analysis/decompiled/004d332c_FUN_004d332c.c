// Address: 004d332c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004d332c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_004d3358(param_1);
  uVar2 = FUN_004d3300(iVar1 + 1);
  uVar2 = FUN_004d331c(uVar2,param_1,iVar1 + 1);
  return uVar2;
}

