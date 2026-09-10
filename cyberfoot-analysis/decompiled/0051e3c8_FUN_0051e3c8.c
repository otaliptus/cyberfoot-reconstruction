// Address: 0051e3c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051e3c8(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 8) < 1) {
    bVar2 = *(byte *)(param_1 + 0x2d) & 0x58;
  }
  else {
    bVar2 = 0x80;
    if (*(char *)(*(int *)(param_1 + 0x20) + 0x10) != '\0') {
      bVar2 = 0xa0;
    }
    bVar1 = FUN_0051e0fc(param_1);
    bVar2 = bVar1 & 7 | bVar2;
  }
  *(byte *)(param_1 + 0x2d) = bVar2;
  return;
}

