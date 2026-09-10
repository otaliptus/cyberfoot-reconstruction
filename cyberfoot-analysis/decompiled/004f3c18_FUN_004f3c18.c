// Address: 004f3c18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004f3c18(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x70);
  if ((*(char *)(param_1 + 0x23c) == '\0') && (*(char *)(param_1 + 0x27a) == '\x01')) {
    cVar1 = FUN_00403c80(param_1);
    if (cVar1 != '\0') {
      uVar2 = 0xff00000d;
    }
  }
  return uVar2;
}

