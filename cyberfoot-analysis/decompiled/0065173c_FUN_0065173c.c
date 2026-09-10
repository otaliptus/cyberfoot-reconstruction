// Address: 0065173c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0065173c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  
  iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + param_1 * 0x130);
  iVar2 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + param_1 * 0x130);
  switch(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130)) {
  case 0:
    unaff_EBX = 0;
    break;
  case 1:
    if ((iVar1 == 0xd) || (iVar1 == 6)) {
      unaff_EBX = 1;
    }
    else if ((iVar1 == 7) || (iVar1 == 10)) {
      unaff_EBX = 0;
    }
    else if ((iVar2 == 0xd) || (iVar1 == 6)) {
      unaff_EBX = 1;
    }
    else if ((iVar2 == 7) || (iVar2 == 10)) {
      unaff_EBX = 0;
    }
    else if ((((iVar1 == 8) || (iVar1 == 9)) || (iVar1 == 0xb)) || (iVar1 == 4)) {
      unaff_EBX = 1;
    }
    else {
      unaff_EBX = 0;
    }
    break;
  case 2:
    unaff_EBX = 0;
    break;
  case 3:
    if (((iVar1 == 0xb) || (iVar1 == 9)) || ((iVar1 == 8 || (iVar1 == 4)))) {
      unaff_EBX = 1;
    }
    else if ((iVar1 == 7) || (iVar1 == 10)) {
      unaff_EBX = 0;
    }
    else if ((((iVar2 == 0xb) || (iVar2 == 9)) || (iVar2 == 8)) || (iVar2 == 4)) {
      unaff_EBX = 1;
    }
    else if ((iVar2 == 7) || (iVar2 == 10)) {
      unaff_EBX = 0;
    }
    else {
      unaff_EBX = 1;
    }
    break;
  case 4:
    if ((iVar1 == 7) || (iVar1 == 10)) {
      unaff_EBX = 0;
    }
    else if (((iVar1 == 8) || (iVar1 == 0xd)) || (iVar1 == 6)) {
      unaff_EBX = 2;
    }
    else {
      unaff_EBX = 1;
    }
  }
  return unaff_EBX;
}

