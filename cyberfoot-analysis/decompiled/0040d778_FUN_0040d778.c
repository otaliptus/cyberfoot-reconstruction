// Address: 0040d778
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0040d778(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined2 extraout_var;
  undefined4 uVar2;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int iVar3;
  ushort local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined1 local_14 [4];
  
  iVar3 = -1;
  cVar1 = FUN_0040d22c(param_1,param_2,DAT_0066c69c,param_3);
  if ((cVar1 == '\0') && (cVar1 = FUN_0040d22c(param_1,param_2,&DAT_0040d95c), cVar1 == '\0')) {
    cVar1 = FUN_0040d22c(param_1,param_2,DAT_0066c6a0);
    if ((cVar1 != '\0') || (cVar1 = FUN_0040d22c(param_1,param_2,&DAT_0040d968), cVar1 != '\0')) {
      iVar3 = 0xc;
    }
  }
  else {
    iVar3 = 0;
  }
  if (-1 < iVar3) {
    FUN_0040d174(param_1,param_2);
  }
  cVar1 = FUN_0040d198(param_1,param_2,&local_1c,local_14);
  if (cVar1 == '\0') {
    return 0;
  }
  local_1a = 0;
  local_18 = 0;
  local_16 = 0;
  cVar1 = FUN_0040d2b8(param_1,param_2,DAT_0066c698);
  if (cVar1 != '\0') {
    cVar1 = FUN_0040d198(param_1,param_2,&local_1a,local_14);
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = FUN_0040d2b8(param_1,param_2,DAT_0066c698);
    if (cVar1 != '\0') {
      cVar1 = FUN_0040d198(param_1,param_2,&local_18,local_14);
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = FUN_0040d2b8(param_1,param_2,DAT_0066c68b);
      if ((cVar1 != '\0') &&
         (cVar1 = FUN_0040d198(param_1,param_2,&local_16,local_14), cVar1 == '\0')) {
        return 0;
      }
    }
  }
  if (iVar3 < 0) {
    cVar1 = FUN_0040d22c(param_1,param_2,DAT_0066c69c);
    if ((cVar1 == '\0') && (cVar1 = FUN_0040d22c(param_1,param_2,&DAT_0040d95c), cVar1 == '\0')) {
      cVar1 = FUN_0040d22c(param_1,param_2,DAT_0066c6a0);
      if ((cVar1 != '\0') || (cVar1 = FUN_0040d22c(param_1,param_2,&DAT_0040d968), cVar1 != '\0')) {
        iVar3 = 0xc;
      }
    }
    else {
      iVar3 = 0;
    }
  }
  if (-1 < iVar3) {
    if (local_1c == 0) {
      return 0;
    }
    if (0xc < local_1c) {
      return 0;
    }
    if (local_1c == 0xc) {
      local_1c = 0;
    }
    local_1c = local_1c + (short)iVar3;
  }
  FUN_0040d174(param_1,param_2);
  uVar2 = FUN_0040bffc(local_1c,CONCAT22(extraout_var_01,local_1a),
                       CONCAT22(extraout_var_00,local_18),param_3,CONCAT22(extraout_var,local_16));
  return uVar2;
}

