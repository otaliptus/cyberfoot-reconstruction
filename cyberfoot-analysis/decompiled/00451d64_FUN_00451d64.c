// Address: 00451d64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00451d64(int param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  
  if (param_2 != *(char *)(param_1 + 0x229)) {
    *(char *)(param_1 + 0x229) = param_2;
    cVar2 = *(char *)(param_1 + 0x229);
    if ((((cVar2 == '\x01') || (cVar2 == '\x03')) && (*(short *)(param_1 + 0x2ea) != 0)) ||
       (bVar1 = cVar2 - 2, cVar2 = cVar2 + -4, bVar1 < 2)) {
      FUN_00451d34(param_1,cVar2);
    }
  }
  return;
}

