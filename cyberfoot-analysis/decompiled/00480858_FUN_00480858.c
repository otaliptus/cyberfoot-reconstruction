// Address: 00480858
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00480858(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  if ((*(byte *)(param_1 + 0x2f4) & 1) == 0) {
    if ((cVar1 != '\0') && (cVar1 != *(char *)(param_1 + 0x57))) {
      FUN_00481990(param_1);
    }
    FUN_00466128(param_1,param_2);
  }
  else {
    if (cVar1 == '\0') {
      *(byte *)(param_1 + 0x2f4) = *(byte *)(param_1 + 0x2f4) & 0xfd;
      return;
    }
    *(byte *)(param_1 + 0x2f4) = *(byte *)(param_1 + 0x2f4) | 2;
  }
  return;
}

