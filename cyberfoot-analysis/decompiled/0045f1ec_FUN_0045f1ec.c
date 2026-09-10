// Address: 0045f1ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045f1ec(int param_1,int param_2)

{
  char cVar1;
  
  if ((((*(short *)(param_2 + 4) == 0xd) && (*(char *)(param_1 + 0x212) != '\0')) ||
      ((*(short *)(param_2 + 4) == 0x1b && (*(char *)(param_1 + 0x211) != '\0')))) &&
     ((cVar1 = FUN_0047e3c8(*(undefined4 *)(param_2 + 8)), DAT_0045f258 == cVar1 &&
      (cVar1 = FUN_00403c80(param_1), cVar1 != '\0')))) {
    FUN_00403c80(param_1);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  FUN_0046be7c(param_1,param_2);
  return;
}

