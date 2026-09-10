// Address: 00456ef4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00456ef4(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  
  *param_3 = 0;
  uVar1 = param_2 & 0xff;
  if (uVar1 < 0xf) {
    if (uVar1 - 2 < 5) {
      *(undefined4 *)(param_3 + 4) = 1;
      iVar2 = 2;
      goto LAB_00456f6d;
    }
    if (uVar1 - 7 < 8) {
      *(undefined4 *)(param_3 + 4) = 2;
      iVar2 = 7;
      goto LAB_00456f6d;
    }
  }
  else {
    if (uVar1 - 0xf < 0xc) {
      *(undefined4 *)(param_3 + 4) = 3;
      iVar2 = 0xf;
      goto LAB_00456f6d;
    }
    if (uVar1 - 0x1b < 2) {
      *(undefined4 *)(param_3 + 4) = 4;
      iVar2 = 0x1b;
      goto LAB_00456f6d;
    }
    if (uVar1 - 0x1b == 2) {
      *(undefined4 *)(param_3 + 4) = 5;
      iVar2 = 0x1d;
      goto LAB_00456f6d;
    }
  }
  *(undefined4 *)(param_3 + 4) = 0;
  iVar2 = 0;
LAB_00456f6d:
  *(uint *)(param_3 + 8) = ((param_2 & 0x7f) - iVar2) + 1;
  return;
}

