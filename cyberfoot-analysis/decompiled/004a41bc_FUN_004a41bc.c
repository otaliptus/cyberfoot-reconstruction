// Address: 004a41bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x004a41e3) */

int FUN_004a41bc(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  
  local_3c = param_5;
  local_30 = *param_2;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_40 = param_3;
  local_34 = param_1;
  local_8 = param_3;
  iVar1 = FUN_0049e158(&local_40,param_4,s_1_2_3_0066733c,0x38);
  if (iVar1 == 0) {
    iVar1 = FUN_0049e780(&local_40,4);
    if (iVar1 == 1) {
      *param_2 = local_2c;
      iVar1 = FUN_0049eff4(&local_40);
    }
    else {
      FUN_0049eff4(&local_40);
      if (iVar1 == 0) {
        iVar1 = -5;
      }
    }
  }
  return iVar1;
}

