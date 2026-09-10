// Address: 004160cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004160cc(undefined4 param_1,ushort *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar5;
  undefined4 local_c;
  
  uVar2 = (uint)*param_2;
  local_c = param_3;
  if (uVar2 < 0xe) {
    if (uVar2 != 0xd) {
      if (uVar2 == 0) {
        FUN_00406880(param_1);
        return;
      }
      if (uVar2 == 1) {
        if (DAT_00662450 != '\0') {
          FUN_00411500(1,0xd);
        }
        FUN_00406880(param_1);
        return;
      }
      iVar3 = uVar2 - 9;
      if (iVar3 != 0) goto LAB_0041614d;
    }
    FUN_00406898(param_1,*(undefined4 *)(param_2 + 4));
  }
  else {
    if (uVar2 == 0x101) {
      FUN_00416054(param_1,param_2);
      return;
    }
    if ((uVar2 == 0x4009) || (iVar3 = uVar2 - 0x400d, iVar3 == 0)) {
      FUN_00406898(param_1,**(undefined4 **)(param_2 + 4));
      return;
    }
LAB_0041614d:
    cVar1 = FUN_00418f24(CONCAT22((short)((uint)iVar3 >> 0x10),*param_2),&local_c);
    uVar5 = extraout_var;
    if (cVar1 != '\0') {
      uVar4 = FUN_00406880(param_1);
      cVar1 = FUN_00403b38(local_c,&DAT_00416188,uVar4);
      uVar5 = extraout_var_00;
      if (cVar1 != '\0') {
        return;
      }
    }
    FUN_00411500(*param_2,CONCAT22(uVar5,0xd));
  }
  return;
}

