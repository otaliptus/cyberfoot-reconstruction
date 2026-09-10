// Address: 00594548
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm47_combopaisClick(int param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_006d225c = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x360));
  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x360));
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (iVar2 + -1 < iVar1) {
    FUN_005924a8(param_1,0xffffffff);
    return;
  }
  FUN_005924a8(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d225c * 0x294));
  return;
}

