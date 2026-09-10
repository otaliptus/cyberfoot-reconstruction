// Address: 00425480
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4
FUN_00425480(undefined4 param_1,undefined4 *param_2,undefined4 param_3,code *param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_d;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = param_2;
  local_8 = param_1;
  if (param_4._2_2_ != 0) {
    (*param_4)(param_5,&local_14,&local_1c,&local_18,&local_20);
  }
  local_d = FUN_00424ee4(local_14,local_1c,local_18);
  uVar4 = 1;
  if (local_c[1] == 0) {
    return 1;
  }
  if (local_c[2] == 0) {
    if (**(char **)*local_c != '\a') {
      return 1;
    }
    uVar2 = FUN_00419ee8(local_8,local_c);
    cVar1 = FUN_00403c10(uVar2,PTR_PTR_0041c690);
    if (cVar1 == '\0') {
      return 1;
    }
    iVar3 = FUN_00419ee8(local_8,local_c);
    if ((*(byte *)(iVar3 + 0x24) & 4) == 0) {
      return 1;
    }
  }
  switch(**(undefined1 **)*local_c) {
  case 1:
  case 2:
  case 3:
  case 6:
    uVar4 = FUN_00424f14();
    break;
  case 4:
    uVar4 = FUN_00424f6c();
    break;
  case 5:
  case 10:
  case 0xb:
    uVar4 = FUN_00425020();
    break;
  case 7:
    uVar4 = FUN_00425148();
    break;
  case 8:
    uVar4 = FUN_00425370();
    break;
  case 0xc:
    uVar4 = FUN_004253e8();
    break;
  case 0xf:
    uVar4 = FUN_00425294();
    break;
  case 0x10:
    uVar4 = FUN_00424fc8();
  }
  return uVar4;
}

