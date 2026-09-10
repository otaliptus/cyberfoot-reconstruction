// Address: 00652590
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00652590(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  int local_18;
  
  if (-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130)) {
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130);
    iVar2 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_1 * 0x130);
    local_18 = 0;
    iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130);
    iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar3 * 0x2f8);
    if ((((iVar4 == 3) || (iVar4 == 0x48)) || (iVar4 == 0x68)) ||
       ((iVar4 == 0x61 || (iVar4 == 0x41)))) {
      switch(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar3 * 0x2f8)) {
      case 0:
        param_3 = 0x1c2;
        break;
      case 1:
        param_3 = 0x2ee;
        break;
      case 2:
        param_3 = 0x226;
        break;
      case 3:
        param_3 = 500;
        break;
      case 4:
        param_3 = 0x1c2;
        break;
      case 5:
        param_3 = 0x1c2;
      }
    }
    else {
      switch(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar3 * 0x2f8)) {
      case 0:
        param_3 = 400;
        break;
      case 1:
        param_3 = 600;
        break;
      case 2:
        param_3 = 500;
        break;
      case 3:
        param_3 = 0x1c2;
        break;
      case 4:
        param_3 = 400;
        break;
      case 5:
        param_3 = 400;
      }
    }
    if ((float10)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar3 * 0x2f8) <= _DAT_00652798) {
      if (_DAT_006527a4 <
          (float10)*(longlong *)
                    (*(int *)PTR_DAT_0066af70 + 0x48 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130) * 0x2f8)) {
        param_3 = param_3 + 100;
      }
    }
    else {
      param_3 = param_3 + 0x32;
    }
    if (0x14 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar3 * 0x2f8)) {
      param_3 = param_3 + 0x32;
    }
    iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130);
    if (iVar3 == 0) {
      param_3 = param_3 + -0x46;
    }
    else if (iVar3 == 1) {
      param_3 = param_3 + -0x1e;
    }
    else if (iVar3 == 2) {
      param_3 = param_3 + -0x28;
    }
    else if (iVar3 == 4) {
      param_3 = param_3 + 0x32;
    }
    param_3 = iVar1 * param_3;
    if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + param_1 * 0x130) != '\0') {
      local_18 = iVar1 * 0xfa;
    }
    if (0x1f < iVar2) {
      param_3 = param_3 + (iVar2 + -0x20) * -300;
    }
    unaff_EBX = param_3 + local_18;
    if (unaff_EBX < 500) {
      unaff_EBX = 500;
    }
  }
  return unaff_EBX;
}

