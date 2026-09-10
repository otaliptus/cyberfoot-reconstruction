// Address: 00478a78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00478a78(int *param_1,byte param_2)

{
  int iVar1;
  uint uIDEnableItem;
  HMENU hMenu;
  UINT uEnable;
  
  if (param_2 == *(byte *)((int)param_1 + 0x39)) {
    return;
  }
  *(byte *)((int)param_1 + 0x39) = param_2;
  if (((*(int *)PTR_DAT_0066b790 != 2) || (iVar1 = FUN_00478b4c(param_1), iVar1 == 0)) &&
     ((param_1[0x19] == 0 || (*(int *)(param_1[0x19] + 0x6c) == 0)))) {
    if ((param_1[0x19] != 0) && ((*(byte *)(param_1 + 7) & 2) == 0)) {
      uEnable = *(UINT *)(&DAT_00663158 + (uint)param_2 * 4);
      uIDEnableItem = (uint)*(ushort *)(param_1 + 0x14);
      hMenu = (HMENU)FUN_004770e0(param_1[0x19]);
      EnableMenuItem(hMenu,uIDEnableItem,uEnable);
    }
    (**(code **)(*param_1 + 0x3c))(param_1,0);
    return;
  }
  (**(code **)(*param_1 + 0x3c))(param_1,1);
  return;
}

