// Address: 004a3fdc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a3fdc(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1 + 0x25;
  do {
    if ((short)*piVar1 != 0) break;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 9);
  if (iVar2 == 9) {
    iVar2 = 0xe;
    piVar1 = param_1 + 0x33;
    do {
      if ((short)*piVar1 != 0) break;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 0x20);
  }
  *(uint *)(*param_1 + 0x2c) = (uint)(iVar2 == 0x20);
  return;
}

