// Address: 00487bc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00487bc8(int param_1)

{
  int iVar1;
  int iVar2;
  tagPOINT tStack_14;
  
  GetCursorPos(&tStack_14);
  iVar1 = FUN_00464ab4(&tStack_14,1);
  iVar2 = FUN_004633b0();
  if (iVar1 != *(int *)(param_1 + 0x48)) {
    if (((*(int *)(param_1 + 0x48) != 0) && (iVar2 == 0)) ||
       ((iVar2 != 0 && (iVar2 == *(int *)(param_1 + 0x48))))) {
      FUN_004673cc(*(undefined4 *)(param_1 + 0x48),0xb014,0,0);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    if (((*(int *)(param_1 + 0x48) != 0) && (iVar2 == 0)) ||
       ((iVar2 != 0 && (iVar2 == *(int *)(param_1 + 0x48))))) {
      FUN_004673cc(*(undefined4 *)(param_1 + 0x48),0xb013,0,0);
    }
  }
  return iVar1;
}

