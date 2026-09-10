// Address: 004dd9e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dd9e8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*PTR_DAT_0066adfc == '\0') {
    FUN_004051d4(param_2,*(undefined4 *)(param_1 + 0x80));
  }
  else {
    iVar1 = FUN_004dd644(param_1,0);
    if (iVar1 == 0) {
      FUN_004051d4(param_2,*(undefined4 *)(param_1 + 0x80));
    }
    else {
      FUN_004d83a8(iVar1 + 0x3c,*(undefined4 *)(param_1 + 0x80),param_2);
    }
  }
  return;
}

