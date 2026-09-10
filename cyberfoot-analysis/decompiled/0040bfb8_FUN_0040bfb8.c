// Address: 0040bfb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040bfb8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  int iStack_c;
  
  uVar1 = (ulonglong)ROUND(param_4 * (double)DAT_006621a4);
  local_10 = (int)uVar1;
  iStack_c = (int)(uVar1 >> 0x20);
  if ((longlong)uVar1 < 0) {
    uVar1 = CONCAT44(-(uint)(local_10 != 0) - iStack_c,-local_10);
    uVar3 = (undefined4)(uVar1 % (ulonglong)DAT_006621a8);
    iVar2 = -(int)(uVar1 / DAT_006621a8);
  }
  else {
    iVar2 = (int)(uVar1 / DAT_006621a8);
    uVar3 = (undefined4)(uVar1 % (ulonglong)DAT_006621a8);
  }
  *param_1 = uVar3;
  param_1[1] = iVar2 + 0xa955a;
  return;
}

