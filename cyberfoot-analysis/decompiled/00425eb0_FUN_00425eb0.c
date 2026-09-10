// Address: 00425eb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00425eb0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_3[1] == 0) {
    return;
  }
  if (param_3[2] == 0) {
    if (**(char **)*param_3 != '\a') {
      return;
    }
    uVar2 = FUN_00419ee8(param_2,param_3);
    cVar1 = FUN_00403c10(uVar2,PTR_PTR_0041c690);
    if (cVar1 == '\0') {
      return;
    }
    iVar3 = FUN_00419ee8(param_2,param_3);
    if ((*(byte *)(iVar3 + 0x24) & 4) == 0) {
      return;
    }
  }
  cVar1 = FUN_00425480(param_2,param_3);
  if (cVar1 == '\0') {
    FUN_00424ee4(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x28));
    switch(**(undefined1 **)*param_3) {
    case 1:
    case 2:
    case 3:
    case 6:
      FUN_004257e0();
      break;
    case 4:
      FUN_004258a0();
      break;
    case 5:
    case 10:
    case 0xb:
      FUN_0042591c();
      break;
    case 7:
      FUN_00425abc();
      break;
    case 8:
      FUN_00425da4();
      break;
    case 0xc:
      FUN_00425e4c();
      break;
    case 0xf:
      FUN_00425cc8();
      break;
    case 0x10:
      FUN_004258e0();
    }
  }
  return;
}

