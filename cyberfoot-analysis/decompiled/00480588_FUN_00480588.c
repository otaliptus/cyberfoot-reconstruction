// Address: 00480588
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00480588(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  
  uVar2 = FUN_004814a4(param_1);
  if ((char)uVar2 != '\0') {
    uVar3 = (undefined3)((uint)uVar2 >> 8);
    if ((*(char *)(param_1 + 0x229) == '\x02') || (*(char *)(param_1 + 0x229) == '\x05')) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
      uVar3 = 0;
    }
    if (cVar1 != *(char *)(param_1 + 0x210)) {
      return CONCAT31(uVar3,1);
    }
  }
  return 0;
}

