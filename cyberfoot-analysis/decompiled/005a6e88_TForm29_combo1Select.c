// Address: 005a6e88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm29_combo1Select(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x328));
  if (*(int *)(DAT_006d2594 + 4 + iVar2 * 0x10) == 3) {
    iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x328));
    uVar3 = *(undefined4 *)(DAT_006d2594 + 0xc + iVar2 * 0x10);
    iVar2 = (**(code **)(*DAT_006d259c + 0xcc))();
    uVar1 = *(undefined4 *)(&DAT_006d251c + iVar2 * 4);
    iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x328));
    FUN_005a6660(param_1,*(undefined4 *)(DAT_006d2594 + 4 + iVar2 * 0x10),uVar1,uVar3);
    return;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x328));
  if ((6 < *(int *)(DAT_006d2594 + 4 + iVar2 * 0x10)) &&
     (iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x328)),
     *(int *)(DAT_006d2594 + 4 + iVar2 * 0x10) != 10)) {
    iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x328));
    FUN_005a6148(param_1,*(undefined4 *)(DAT_006d2594 + 4 + iVar2 * 0x10));
    return;
  }
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x328));
  uVar3 = *(undefined4 *)(DAT_006d2594 + 0xc + iVar2 * 0x10);
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x328));
  uVar1 = *(undefined4 *)(DAT_006d2594 + 8 + iVar2 * 0x10);
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x328));
  FUN_005a6660(param_1,*(undefined4 *)(DAT_006d2594 + 4 + iVar2 * 0x10),uVar1,uVar3);
  return;
}

