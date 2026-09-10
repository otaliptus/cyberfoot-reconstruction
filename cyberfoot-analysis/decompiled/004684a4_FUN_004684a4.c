// Address: 004684a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004684a4(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1[0x28] != 0) {
    uVar2 = (**(code **)(*param_1 + 0x58))();
    cVar1 = FUN_00403c10(param_1[0x28],uVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

