// Address: 00456fb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00456fb4(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  
  *param_3 = 0x12;
  uVar1 = param_2 & 0xff;
  if (uVar1 < 0x14) {
    if (uVar1 - 2 < 6) {
      *(undefined4 *)(param_3 + 4) = 1;
      iVar2 = 2;
      goto LAB_00457043;
    }
    if (uVar1 - 8 < 6) {
      *(undefined4 *)(param_3 + 4) = 2;
      iVar2 = 8;
      goto LAB_00457043;
    }
    if (uVar1 - 0xe < 6) {
      *(undefined4 *)(param_3 + 4) = 3;
      iVar2 = 0xe;
      goto LAB_00457043;
    }
  }
  else {
    if (uVar1 - 0x14 < 6) {
      *(undefined4 *)(param_3 + 4) = 4;
      iVar2 = 0x14;
      goto LAB_00457043;
    }
    if (uVar1 - 0x1a < 6) {
      *(undefined4 *)(param_3 + 4) = 5;
      iVar2 = 0x1a;
      goto LAB_00457043;
    }
    if (uVar1 - 0x20 < 6) {
      *(undefined4 *)(param_3 + 4) = 6;
      iVar2 = 0x20;
      goto LAB_00457043;
    }
  }
  *(undefined4 *)(param_3 + 4) = 0;
  iVar2 = 0;
LAB_00457043:
  *(uint *)(param_3 + 8) = ((param_2 & 0x7f) - iVar2) + 1;
  return;
}

