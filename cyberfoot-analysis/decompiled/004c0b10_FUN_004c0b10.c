// Address: 004c0b10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_004c0b10(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  bVar3 = DAT_004c0b88;
  iVar2 = FUN_00404ba4(param_1);
  if (0 < iVar2) {
    iVar4 = 1;
    do {
      cVar1 = *(char *)(param_1 + -1 + iVar4);
      if (cVar1 == '!') {
        bVar3 = bVar3 | 1;
      }
      else if ((cVar1 == '>') && (iVar4 < param_2)) {
        bVar3 = bVar3 & 0xfb;
        if ((iVar4 < 2) || (*(char *)(param_1 + -2 + iVar4) != '<')) {
          bVar3 = bVar3 | 2;
        }
      }
      else if ((cVar1 == '<') && (iVar4 < param_2)) {
        bVar3 = bVar3 & 0xfd | 4;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  cVar1 = FUN_004c09bc(param_1,param_2);
  if (cVar1 == '\x01') {
    bVar3 = bVar3 | 8;
  }
  return bVar3;
}

