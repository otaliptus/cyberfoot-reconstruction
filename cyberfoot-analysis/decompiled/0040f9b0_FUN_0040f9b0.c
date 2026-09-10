// Address: 0040f9b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040f9b0(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = '\x01';
  for (puVar2 = DAT_00662334; (cVar1 != '\0' && (puVar2 != (undefined4 *)0x0));
      puVar2 = (undefined4 *)*puVar2) {
    cVar1 = (*(code *)puVar2[1])();
  }
  return;
}

