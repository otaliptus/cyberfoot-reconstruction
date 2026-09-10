// Address: 00511d58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00511d58(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0046ca98(param_1);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x2d4) != 0) {
      cVar1 = FUN_00403c80(*(int *)(param_1 + 0x2d4));
      if (cVar1 != '\0') goto LAB_00511d85;
    }
    uVar2 = 0;
  }
  else {
LAB_00511d85:
    uVar2 = 1;
  }
  return uVar2;
}

