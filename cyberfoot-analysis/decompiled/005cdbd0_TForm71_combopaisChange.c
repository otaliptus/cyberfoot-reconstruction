// Address: 005cdbd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm71_combopaisChange(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x36c));
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (iVar1 == iVar2) {
    DAT_006d2d14 = 0;
    if (DAT_006d2d1c == 1) {
      FUN_005cae04(param_1,2);
    }
    else if (DAT_006d2d1c == 2) {
      FUN_005cc7b0(param_1,2);
    }
    else if (DAT_006d2d1c == 3) {
      FUN_005cbc18(param_1,2);
      return;
    }
  }
  else if (DAT_006d2d1c == 1) {
    DAT_006d2d14 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x36c));
    FUN_005cae04(param_1,1);
  }
  else if (DAT_006d2d1c == 2) {
    DAT_006d2d18 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x36c));
    FUN_005cc7b0(param_1,1);
  }
  else if (DAT_006d2d1c == 3) {
    FUN_005cbc18(param_1,1);
  }
  return;
}

