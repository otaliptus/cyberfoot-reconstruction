// Address: 00454f24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00454f24(int param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      FUN_004673cc(param_1,0x421,0,0);
      if (*(char *)(param_1 + 0x5c) != '\0') {
        FUN_00403c80(param_1);
      }
    }
  }
  return;
}

