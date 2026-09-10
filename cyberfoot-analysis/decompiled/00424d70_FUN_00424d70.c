// Address: 00424d70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00424d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  if (param_5 == -1) {
    if (param_4 < 0x80000000) goto LAB_00424daa;
  }
  else if (param_5 < -1) goto LAB_00424daa;
  if (param_5 == 0) {
    if (param_4 < 0x80000000) {
LAB_00424d9c:
      FUN_00424cfc(param_1,param_4);
      return;
    }
  }
  else if (param_5 < 1) goto LAB_00424d9c;
LAB_00424daa:
  FUN_00426644(param_1,0x13);
  FUN_004243ec(param_1,&param_4,8);
  return;
}

