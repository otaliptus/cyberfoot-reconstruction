// Address: 004684f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004684f8(undefined4 param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_00403c80(param_1);
  if (cVar1 != '\0') {
    if ((param_2 & 2) == 2) {
      param_2 = param_2 & 0xfffffffd;
    }
    else if ((param_2 & 1) != 1) {
      param_2 = param_2 | 2;
    }
  }
  uVar2 = FUN_00468538(param_1);
  return param_2 | uVar2;
}

