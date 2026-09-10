// Address: 0040c144
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0040c144(uint param_1,ushort param_2,ushort param_3,double *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_7;
  
  local_7 = 0;
  uVar1 = FUN_0040c108(param_1);
  iVar4 = (uVar1 & 0x7f) * 0x18;
  if (((((ushort)param_1 != 0) && ((ushort)param_1 < 10000)) && (param_2 != 0)) &&
     (((param_2 < 0xd && (param_3 != 0)) &&
      (param_3 <= *(ushort *)(&DAT_00662102 + (uint)param_2 * 2 + iVar4))))) {
    iVar2 = param_2 - 1;
    if (0 < iVar2) {
      iVar3 = 1;
      do {
        param_3 = param_3 + *(short *)(&DAT_00662102 + iVar3 * 2 + iVar4);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = (param_1 & 0xffff) - 1;
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = (param_1 & 0xffff) + 2;
    }
    *param_4 = (double)(int)(((iVar2 * 0x16d + (iVar4 >> 2)) - iVar2 / 100) + iVar2 / 400 +
                             (uint)param_3 + -0xa955a);
    local_7 = 1;
  }
  return local_7;
}

