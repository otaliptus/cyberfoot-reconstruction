// Address: 004538b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_004538b4(int *param_1)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = 0;
  if ((*(char *)((int)param_1 + 0x16a) != '\0') &&
     (bVar2 = DAT_00662dee, *(char *)((int)param_1 + 0x17d) == '\x01')) {
    bVar2 = DAT_00662dec;
  }
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if ((cVar1 != '\0') &&
     (((int *)param_1[0x61] == (int *)0x0 ||
      (cVar1 = (**(code **)(*(int *)param_1[0x61] + 0x50))(), cVar1 != '\0')))) {
    bVar2 = bVar2 | DAT_00662df0;
  }
  if ((*(char *)((int)param_1 + 0x57) == '\0') && ((*(byte *)(param_1 + 7) & 0x10) == 0)) {
    bVar2 = bVar2 | DAT_00662df2;
  }
  if ((char)param_1[0x5c] != '\0') {
    bVar2 = bVar2 | DAT_00662df4;
  }
  if ((char)param_1[0x5f] != '\0') {
    bVar2 = bVar2 | DAT_00662df6;
  }
  if (*(char *)((int)param_1 + 0x171) != '\0') {
    bVar2 = bVar2 | DAT_00662dfa;
  }
  return bVar2;
}

