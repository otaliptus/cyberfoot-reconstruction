// Address: 0045f6d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0045f6d8(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00403c80(param_1);
  if (cVar1 == '\0') {
    return true;
  }
  return *(char *)(param_1 + 0x210) != '\x01';
}

