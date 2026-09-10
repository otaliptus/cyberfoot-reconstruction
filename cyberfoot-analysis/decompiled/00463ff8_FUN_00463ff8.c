// Address: 00463ff8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00463ff8(undefined4 param_1,undefined4 *param_2,char param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 == '\0') {
    uVar1 = FUN_00463fcc(param_1);
    *param_2 = uVar1;
    iVar2 = FUN_00463f14(*param_2,5,DAT_0066cb74,param_1,0);
  }
  else {
    iVar2 = FUN_00463d58(param_1,param_4);
    if (iVar2 != 0) {
      uVar1 = FUN_0046cae0(iVar2);
      *param_2 = uVar1;
    }
  }
  return iVar2;
}

