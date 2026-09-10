// Address: 0042ea4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0042ea4c(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  int aiStack_70 [10];
  int iStack_48;
  
  iVar1 = (**(code **)*param_2)();
  iVar2 = FUN_004208d4(param_2);
  if (100 < iVar1 - iVar2) {
    (**(code **)(*param_2 + 0xc))(param_2,aiStack_70,100);
    (**(code **)(*param_2 + 0x14))(param_2,0xffffff9c,CONCAT22(extraout_var,1));
    if ((aiStack_70[0] == 1) && (iStack_48 == 0x464d4520)) {
      return 1;
    }
  }
  return 0;
}

