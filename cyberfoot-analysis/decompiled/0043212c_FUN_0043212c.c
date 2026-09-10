// Address: 0043212c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0043212c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_0066c8f0 != 0) {
    uVar1 = FUN_00429e64(param_2);
    uVar2 = FUN_00429e64(param_1);
    iVar3 = FUN_00431f00(DAT_0066c8f0,uVar2,uVar1);
    return *(undefined4 *)(iVar3 + 4);
  }
  return 0;
}

