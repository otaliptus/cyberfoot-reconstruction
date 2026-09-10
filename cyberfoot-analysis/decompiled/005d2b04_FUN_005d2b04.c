// Address: 005d2b04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_005d2b04(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  
  puVar2 = PTR_DAT_0066af70;
  *PTR_DAT_0066ae74 = 0;
  *(int *)PTR_DAT_0066aea8 = param_3;
  DAT_006d3265 = '\0';
  iVar4 = 0;
  if (*(int *)(*(int *)puVar2 + 0x3c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) ==
      *(int *)(*(int *)puVar2 + 0x3c + param_3 * 0x2f8)) {
    switch(*(undefined4 *)(*(int *)puVar2 + 0x7c + param_3 * 0x2f8)) {
    case 0:
      if (param_2 == 0) {
        iVar4 = 10000;
      }
      else {
        iVar4 = 20000;
      }
      break;
    case 1:
      if (param_2 == 0) {
        iVar4 = 50000;
      }
      else {
        iVar4 = 150000;
      }
      break;
    case 2:
      if (param_2 == 0) {
        iVar4 = 40000;
      }
      else {
        iVar4 = 100000;
      }
      break;
    case 3:
      if (param_2 == 0) {
        iVar4 = 20000;
      }
      else {
        iVar4 = 40000;
      }
      break;
    case 4:
      if (param_2 == 0) {
        iVar4 = 10000;
      }
      else {
        iVar4 = 15000;
      }
    }
  }
  else {
    iVar1 = *(int *)(*(int *)puVar2 + 0x98 + param_3 * 0x2f8);
    if (iVar1 - 1U < 10) {
      if (param_2 == 0) {
        iVar4 = 20000;
      }
      else {
        iVar4 = 60000;
      }
    }
    else if (iVar1 - 0xbU < 5) {
      if (param_2 == 0) {
        iVar4 = 20000;
      }
      else {
        iVar4 = 80000;
      }
    }
    else if (iVar1 - 0x10U < 5) {
      if (param_2 == 0) {
        iVar4 = 80000;
      }
      else {
        iVar4 = 200000;
      }
    }
    else if (iVar1 - 0x15U < 5) {
      if (param_2 == 0) {
        iVar4 = 100000;
      }
      else {
        iVar4 = 300000;
      }
    }
  }
  *(int *)PTR_DAT_0066ae44 = iVar4;
  if ((*(int *)(*(int *)puVar2 + 0x58 + param_3 * 0x2f8) == 5) &&
     (*(int *)(*(int *)puVar2 + 0x58 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) < 3)) {
    DAT_006d3265 = '\x01';
  }
  if ((*(int *)(*(int *)puVar2 + 0x58 + param_3 * 0x2f8) == 4) &&
     (*(int *)(*(int *)puVar2 + 0x58 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) < 2)) {
    DAT_006d3265 = '\x01';
  }
  if (DAT_006d3265 == '\0') {
    if ((float)*(int *)PTR_DAT_0066ae44 * _DAT_005d2d6c <=
        (float)*(longlong *)(*(int *)puVar2 + 0x48 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)) {
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005d1cb4,PTR_DAT_0066b190);
      (**(code **)(**(int **)PTR_DAT_0066b190 + 0xec))();
      if ((*(char *)(*(int *)puVar2 + 0x39 + param_3 * 0x2f8) == '\0') &&
         (*PTR_DAT_0066ae74 != '\0')) {
        *(longlong *)(*(int *)puVar2 + 0x48 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)
                           (*(int *)puVar2 + 0x48 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) -
                   (float)iVar4 * _DAT_005d2d6c);
      }
      uVar3 = *PTR_DAT_0066ae74;
    }
    else {
      DAT_006d3264 = 1;
      uVar3 = 0;
    }
  }
  else {
    DAT_006d3265 = '\x01';
    uVar3 = 0;
  }
  return uVar3;
}

