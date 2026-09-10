// Address: 004abac0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004abac0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  COLORREF color;
  HPALETTE h;
  UINT UVar3;
  undefined1 local_15;
  
  iVar2 = FUN_004aa2e8(param_1);
  color = FUN_00429e64(param_4);
  h = (HPALETTE)(**(code **)(*param_1 + 0x24))();
  UVar3 = GetNearestPaletteIndex(h,color);
  local_15 = *(byte *)(iVar2 + 0x460);
  if (8 < local_15) {
    local_15 = 8;
  }
  iVar2 = FUN_004ab7f0(param_1,param_3);
  pbVar1 = (byte *)(iVar2 + param_2 / (int)(8 / (ulonglong)local_15));
  *pbVar1 = *pbVar1 & ~(*(char *)((uint)local_15 * 4 + 0x669488) <<
                       (('\b' - local_15) -
                        (char)(param_2 % (int)(8 / (ulonglong)local_15)) * local_15 & 0x1f));
  *pbVar1 = *pbVar1 | (char)UVar3 <<
                      (('\b' - local_15) -
                       (char)(param_2 % (int)(8 / (ulonglong)local_15)) * local_15 & 0x1f);
  return;
}

