// Address: 00423a30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00423a30(void)

{
  char cVar1;
  undefined4 *puVar2;
  int in_stack_00000004;
  
  puVar2 = (undefined4 *)(in_stack_00000004 + -4);
  while( true ) {
    cVar1 = FUN_00421c30(*puVar2);
    if (cVar1 != '\0') break;
    FUN_00423ae4(*puVar2);
  }
  FUN_00422b9c(*puVar2);
  return;
}

