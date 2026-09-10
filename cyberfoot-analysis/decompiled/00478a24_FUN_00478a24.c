// Address: 00478a24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00478a24(int param_1,byte param_2)

{
  uint uIDCheckItem;
  HMENU hMenu;
  UINT uCheck;
  
  if (param_2 != *(byte *)(param_1 + 0x38)) {
    *(byte *)(param_1 + 0x38) = param_2;
    if ((*(int *)(param_1 + 100) != 0) && ((*(byte *)(param_1 + 0x1c) & 2) == 0)) {
      uCheck = *(UINT *)(&DAT_00663150 + (uint)param_2 * 4);
      uIDCheckItem = (uint)*(ushort *)(param_1 + 0x50);
      hMenu = (HMENU)FUN_004770e0(*(int *)(param_1 + 100));
      CheckMenuItem(hMenu,uIDCheckItem,uCheck);
    }
    if ((param_2 != 0) && (*(char *)(param_1 + 0x3d) != '\0')) {
      FUN_004789dc(param_1);
    }
  }
  return;
}

