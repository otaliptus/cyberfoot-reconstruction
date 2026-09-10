// Address: 0051c8c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0051c8c4(undefined4 param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = (longlong)(param_3 + 1) * (longlong)param_3;
  iVar2 = (int)uVar1 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
  }
  for (; iVar2 <= param_2; param_2 = param_2 - iVar2) {
    iVar3 = iVar3 + param_3;
  }
  if (0 < param_2) {
    for (iVar2 = FUN_0051c874(param_2,(int)(uVar1 >> 0x20)); param_2 * 2 <= (iVar2 + 1) * iVar2;
        iVar2 = iVar2 + -1) {
    }
    for (; (iVar2 + 1) * iVar2 < param_2 * 2; iVar2 = iVar2 + 1) {
    }
    iVar3 = iVar3 + iVar2;
  }
  return iVar3;
}

