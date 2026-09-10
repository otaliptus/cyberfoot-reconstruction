// Address: 004402b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_004402b8(int param_1)

{
  byte bVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x221) != '\0') {
    bVar1 = *(byte *)(param_1 + 0x221);
    if ((bVar1 == 1) || (bVar1 == 4)) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\0';
    }
    if (cVar2 == *(char *)(param_1 + 0x210)) {
      if ((bVar1 == 2) || (bVar1 == 5)) {
        cVar2 = '\x01';
      }
      else {
        cVar2 = '\0';
      }
      if (((cVar2 == *(char *)(param_1 + 0x211)) &&
          (*(int *)(&DAT_00662c70 + (bVar1 & 0x7f) * 4) == *(int *)(param_1 + 0x214))) &&
         (*(char *)(param_1 + 0x22d) == '\0')) goto LAB_0044031d;
    }
    *(undefined1 *)(param_1 + 0x221) = 0;
  }
LAB_0044031d:
  return *(undefined1 *)(param_1 + 0x221);
}

