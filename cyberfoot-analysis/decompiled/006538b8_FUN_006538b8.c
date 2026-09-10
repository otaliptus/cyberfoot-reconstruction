// Address: 006538b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_006538b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  switch(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130)) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + param_1 * 0x130);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else if (iVar1 == 1) {
      uVar2 = 3;
    }
    else if (iVar1 == 2) {
      uVar2 = 6;
    }
    break;
  case 2:
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + param_1 * 0x130);
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    else if (iVar1 == 1) {
      uVar2 = 5;
    }
    else if (iVar1 == 2) {
      uVar2 = 4;
    }
    break;
  case 3:
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + param_1 * 0x130);
    if (iVar1 == 0) {
      uVar2 = 7;
    }
    else if (iVar1 == 1) {
      uVar2 = 8;
    }
    else if (iVar1 == 2) {
      uVar2 = 6;
    }
    break;
  case 4:
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + param_1 * 0x130);
    if (iVar1 == 0) {
      uVar2 = 9;
    }
    else if (iVar1 == 1) {
      uVar2 = 10;
    }
    else if (iVar1 == 2) {
      uVar2 = 0xb;
    }
  }
  return uVar2;
}

