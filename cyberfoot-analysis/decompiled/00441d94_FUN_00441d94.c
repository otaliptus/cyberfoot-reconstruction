// Address: 00441d94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00441d94(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_14;
  
  ppuVar3 = &local_14;
  local_14 = param_3;
  iVar1 = FUN_00441d40(param_1,param_2);
  if (iVar1 < 1) {
    FUN_004048d4(param_3);
  }
  else {
    FUN_004049c4(param_3,0,iVar1);
    uVar2 = FUN_00404da4(*param_3);
    FUN_00441ea4(param_1,param_2,uVar2,ppuVar3,iVar1);
    if (((char)local_14 == '\x01') || ((char)local_14 == '\x02')) {
      FUN_00404da4(*param_3);
      uVar2 = FUN_0040a760();
      FUN_00404f30(param_3,uVar2);
    }
    else {
      FUN_00441798(param_2);
    }
  }
  return;
}

