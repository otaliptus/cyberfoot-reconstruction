// Address: 0040a9a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0040a9a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_0040a760(param_1);
  uVar2 = FUN_0040a988(iVar1 + 1);
  uVar2 = FUN_0040a78c(uVar2,param_1,iVar1 + 1);
  return uVar2;
}

