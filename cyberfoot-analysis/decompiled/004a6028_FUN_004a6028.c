// Address: 004a6028
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1
FUN_004a6028(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined1 local_141 [256];
  undefined4 local_41;
  undefined4 local_3d;
  undefined1 *local_35;
  int local_31;
  int local_2d;
  undefined4 local_29;
  undefined1 local_9;
  undefined4 local_8;
  
  local_9 = 1;
  *param_5 = 0;
  local_8 = param_2;
  FUN_004032a8(&local_41,0x38,0);
  FUN_004a056c(&local_41,"1.2.3",0x38);
  local_3d = local_8;
  local_41 = param_1;
  do {
    if (local_31 == 0) {
      local_35 = local_141;
      local_31 = 0x100;
    }
    iVar1 = FUN_004a06a0(&local_41,0);
    if ((iVar1 == 1) || (iVar1 == 0)) {
      *param_5 = *param_5 + local_2d;
      if (*param_3 == 0) {
        iVar2 = FUN_004027fc(*param_5);
        *param_3 = iVar2;
      }
      else {
        FUN_0040283c(param_3,*param_5);
      }
      FUN_00408034((*param_3 + *param_5) - local_2d,local_141,local_2d);
    }
    else if (iVar1 < 0) {
      local_9 = 0;
      FUN_00404adc(param_4,local_29);
      FUN_004a1b6c(&local_41);
      return local_9;
    }
  } while (iVar1 != 1);
  FUN_004a1b6c(&local_41);
  return local_9;
}

