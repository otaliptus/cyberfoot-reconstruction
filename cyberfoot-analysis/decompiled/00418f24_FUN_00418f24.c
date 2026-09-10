// Address: 00418f24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00418f24(uint param_1,undefined4 *param_2)

{
  bool bVar1;
  uint3 uVar3;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_20;
  
  if (((DAT_0066c824 == 0) || ((ushort)param_1 < 0x100)) || (0x7ff < (ushort)param_1)) {
    bVar1 = false;
    uVar3 = 0;
  }
  else {
    uVar3 = (uint3)(param_1 >> 8);
    bVar1 = true;
  }
  if (bVar1) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c828);
    uStackY_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_20;
    iVar2 = FUN_00405eec(DAT_0066c824);
    if ((int)((param_1 & 0xffff) - 0x100) < iVar2) {
      *param_2 = *(undefined4 *)(DAT_0066c824 + -0x400 + (param_1 & 0xffff) * 4);
    }
    iVar2 = 0;
    *in_FS_OFFSET = uStackY_20;
    uStackY_20 = 0x418fcb;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c828);
    return iVar2;
  }
  return (uint)uVar3 << 8;
}

