// Address: 00607570
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00607570(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004032c8(100);
  if (iVar1 < 0x33) {
    iVar1 = FUN_004032c8(100);
    if (iVar1 < 0x33) {
      iVar1 = FUN_004032c8(100);
      if (iVar1 < 0x33) {
        iVar1 = FUN_006078a8(param_1,param_2);
        uVar2 = FUN_006078a8(*(undefined4 *)(&DAT_0066a5b4 + iVar1 * 4),param_2);
      }
      else {
        iVar1 = FUN_006078a8(param_1,param_2);
        uVar2 = FUN_006078a8(*(undefined4 *)(&DAT_0066a584 + iVar1 * 4),param_2);
      }
    }
    else {
      iVar1 = FUN_006078a8(param_1,param_2);
      uVar2 = FUN_006078a8(*(undefined4 *)(&DAT_0066a554 + iVar1 * 4),param_2);
    }
  }
  else {
    iVar1 = FUN_006078a8(param_1,param_2);
    uVar2 = FUN_006078a8(*(undefined4 *)(&DAT_0066a524 + iVar1 * 4),param_2);
  }
  if (param_2 == 1) {
    param_3 = param_4;
  }
  if (*(int *)(*(int *)PTR_DAT_0066b238 + 0xbc + param_3 * 0xf8) == 0) {
    iVar1 = FUN_006078a8(5,param_2);
    if (((param_1 == iVar1) || (iVar1 = FUN_006078a8(2,param_2), param_1 == iVar1)) ||
       ((iVar1 = FUN_006078a8(4,param_2), param_1 == iVar1 ||
        (iVar1 = FUN_006078a8(6,param_2), param_1 == iVar1)))) {
      uVar2 = FUN_006078a8(0xb,param_2);
    }
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b238 + 0xb8 + param_3 * 0xf8) == 0) {
    iVar1 = FUN_006078a8(5,param_2);
    if (((param_1 == iVar1) || (iVar1 = FUN_006078a8(4,param_2), param_1 == iVar1)) ||
       (iVar1 = FUN_006078a8(6,param_2), param_1 == iVar1)) {
      uVar2 = FUN_006078a8(0xc,param_2);
    }
  }
  else if ((*(int *)(*(int *)PTR_DAT_0066b238 + 0xc0 + param_3 * 0xf8) == 0) &&
          (((iVar1 = FUN_006078a8(5,param_2), param_1 == iVar1 ||
            (iVar1 = FUN_006078a8(4,param_2), param_1 == iVar1)) ||
           (iVar1 = FUN_006078a8(6,param_2), param_1 == iVar1)))) {
    uVar2 = FUN_006078a8(10,param_2);
  }
  return uVar2;
}

