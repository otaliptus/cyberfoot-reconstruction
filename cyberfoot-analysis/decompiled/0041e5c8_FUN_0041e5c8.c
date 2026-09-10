// Address: 0041e5c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0041e5c8(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int local_10;
  
  local_10 = *(int *)(param_1 + 4) + 0x1f;
  if (local_10 < 0) {
    local_10 = *(int *)(param_1 + 4) + 0x3e;
  }
  local_10 = local_10 >> 5;
  if (-1 < local_10 + -1) {
    iVar2 = 0;
    do {
      if (DAT_0041e63c != *(int *)(*(int *)(param_1 + 8) + iVar2 * 4)) {
        uVar1 = 0;
        do {
          bVar3 = (byte)uVar1 < 0x1f;
          if ((byte)uVar1 < 0x20) {
            bVar3 = (*(uint *)(*(int *)(param_1 + 8) + iVar2 * 4) >> (uVar1 & 0x1f) & 1) != 0;
          }
          if (!bVar3) {
            iVar2 = iVar2 * 0x20 + (uVar1 & 0x7f);
            if (iVar2 < *(int *)(param_1 + 4)) {
              return iVar2;
            }
            return *(int *)(param_1 + 4);
          }
          uVar1 = uVar1 + 1;
        } while ((char)uVar1 != ' ');
      }
      iVar2 = iVar2 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return *(int *)(param_1 + 4);
}

