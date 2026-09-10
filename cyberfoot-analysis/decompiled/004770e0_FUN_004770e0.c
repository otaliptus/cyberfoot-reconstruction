// Address: 004770e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004770e0(int param_1)

{
  char cVar1;
  HMENU pHVar2;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    cVar1 = FUN_00403c10(*(undefined4 *)(param_1 + 4),PTR_PTR_00475da8);
    if (cVar1 == '\0') {
      pHVar2 = CreateMenu();
      *(HMENU *)(param_1 + 0x34) = pHVar2;
    }
    else {
      pHVar2 = CreatePopupMenu();
      *(HMENU *)(param_1 + 0x34) = pHVar2;
    }
    if (*(int *)(param_1 + 0x34) == 0) {
      FUN_00476188(PTR_PTR_0066addc);
    }
    FUN_00476e70(param_1);
  }
  return *(undefined4 *)(param_1 + 0x34);
}

