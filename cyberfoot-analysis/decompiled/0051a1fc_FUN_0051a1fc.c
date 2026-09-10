// Address: 0051a1fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051a1fc(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) <= param_2) {
    if (param_2 < 0x11) {
      *(undefined4 *)(param_1 + 0xc) = 0x10;
    }
    else {
      iVar1 = param_2 + 0x1f;
      if (iVar1 < 0) {
        iVar1 = param_2 + 0x3e;
      }
      *(int *)(param_1 + 0xc) = (iVar1 >> 5) << 5;
    }
    if (0x100 < *(int *)(param_1 + 0xc)) {
      *(undefined4 *)(param_1 + 0xc) = 0x100;
    }
    FUN_0040283c(param_1 + 4,*(int *)(param_1 + 0xc) * 3);
  }
  return;
}

