// Address: 004ab83c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004ab83c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_004aa2e8(param_1);
  uVar4 = 0;
  uVar2 = FUN_004a63c4(*(undefined4 *)(param_1 + 0x138),PTR_PTR_004a5790);
  iVar3 = FUN_00403c34(uVar2,PTR_PTR_004a5790);
  switch(*(undefined1 *)(iVar1 + 0x461)) {
  case 0:
  case 2:
    if (iVar3 != 0) {
      uVar4 = 1;
    }
    break;
  case 3:
    if (iVar3 != 0) {
      if (*(char *)(iVar3 + 0x14) == '\0') {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
    }
    break;
  case 4:
  case 6:
    uVar4 = 2;
  }
  return uVar4;
}

