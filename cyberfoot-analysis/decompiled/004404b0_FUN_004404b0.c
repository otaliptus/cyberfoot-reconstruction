// Address: 004404b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004404b0(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = '\v';
  puVar2 = &DAT_0066cacc;
  do {
    FUN_00403a84(*puVar2);
    puVar2 = puVar2 + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}

