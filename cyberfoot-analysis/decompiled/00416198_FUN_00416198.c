// Address: 00416198
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00416198(undefined4 param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  undefined4 local_c;
  
  sVar1 = *param_2;
  local_c = param_3;
  if (sVar1 == 0) {
    FUN_00406880(param_1);
  }
  else if (sVar1 == 1) {
    if (DAT_00662450 != '\0') {
      FUN_00411500(1,9);
    }
    FUN_00406880(param_1);
  }
  else if (sVar1 == 9) {
    FUN_00406898(param_1,*(undefined4 *)(param_2 + 4));
  }
  else if (sVar1 == 0x4009) {
    FUN_00406898(param_1,**(undefined4 **)(param_2 + 4));
  }
  else {
    cVar2 = FUN_00418f24(*param_2,&local_c);
    uVar4 = extraout_var;
    if (cVar2 != '\0') {
      uVar3 = FUN_00406880(param_1);
      cVar2 = FUN_00403b38(local_c,&DAT_00416234,uVar3);
      uVar4 = extraout_var_00;
      if (cVar2 != '\0') {
        return;
      }
    }
    FUN_00411500(*param_2,CONCAT22(uVar4,9));
  }
  return;
}

