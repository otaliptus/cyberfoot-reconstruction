// Address: 004a6114
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1
FUN_004a6114(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            int *param_6)

{
  int iVar1;
  undefined1 local_145 [256];
  undefined4 local_45;
  int local_41;
  undefined1 *local_39;
  int local_35;
  int local_31;
  undefined4 local_2d;
  undefined1 local_d;
  undefined4 local_c;
  int local_8;
  
  local_d = 1;
  *param_5 = 0;
  local_c = param_3;
  local_8 = param_2;
  FUN_004032a8(&local_45,0x38,0);
  FUN_0049e158(&local_45,local_c,"1.2.3",0x38);
  local_41 = local_8;
  local_45 = param_1;
  do {
    while( true ) {
      if (local_41 < 1) {
        FUN_0049eff4(&local_45);
        return local_d;
      }
      if (local_35 == 0) {
        local_39 = local_145;
        local_35 = 0x100;
      }
      iVar1 = FUN_0049e780(&local_45,4);
      if ((iVar1 != 1) && (iVar1 != 0)) break;
      *param_5 = *param_5 + local_31;
      if (*param_6 == 0) {
        iVar1 = FUN_004027fc(*param_5);
        *param_6 = iVar1;
      }
      else {
        FUN_0040283c(param_6,*param_5);
      }
      FUN_00408034((*param_6 + *param_5) - local_31,local_145,local_31);
    }
  } while (-1 < iVar1);
  local_d = 0;
  FUN_00404adc(param_4,local_2d);
  FUN_0049eff4(&local_45);
  return local_d;
}

