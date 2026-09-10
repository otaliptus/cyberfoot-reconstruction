// Address: 00476fb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00476fb0(int *param_1)

{
  char cVar1;
  HMENU pHVar2;
  int iVar3;
  UINT UVar4;
  UINT uPosition;
  bool bVar5;
  UINT uFlags;
  
  if ((*(byte *)(param_1 + 7) & 8) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 7) & 2) != 0) {
    *(undefined1 *)(param_1 + 0x1d) = 1;
    return;
  }
  if (param_1[0x1b] != 0) {
    FUN_00476fb0();
    return;
  }
  pHVar2 = (HMENU)FUN_004770e0(param_1);
  iVar3 = GetMenuItemCount(pHVar2);
  bVar5 = iVar3 == 0;
  for (; 0 < iVar3; iVar3 = iVar3 + -1) {
    uFlags = 0x400;
    uPosition = iVar3 - 1;
    UVar4 = uPosition;
    pHVar2 = (HMENU)FUN_004770e0(param_1);
    UVar4 = GetMenuState(pHVar2,UVar4,uFlags);
    if ((UVar4 & 4) == 0) {
      UVar4 = 0x400;
      pHVar2 = (HMENU)FUN_004770e0(param_1);
      RemoveMenu(pHVar2,uPosition,UVar4);
      bVar5 = true;
    }
  }
  if (!bVar5) {
    return;
  }
  if ((param_1[0x19] == 0) && (cVar1 = FUN_00403c10(param_1[0x1c],PTR_PTR_00475ac4), cVar1 != '\0'))
  {
    pHVar2 = (HMENU)FUN_004770e0(param_1);
    iVar3 = GetMenuItemCount(pHVar2);
    if (iVar3 == 0) {
      DestroyMenu((HMENU)param_1[0xd]);
      param_1[0xd] = 0;
      goto LAB_00477070;
    }
  }
  FUN_00476e70(param_1);
LAB_00477070:
  (**(code **)(*param_1 + 0x3c))(param_1,0);
  return;
}

