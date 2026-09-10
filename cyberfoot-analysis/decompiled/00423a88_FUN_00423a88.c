// Address: 00423a88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00423a88(void)

{
  char cVar1;
  undefined4 *puVar2;
  int in_stack_00000004;
  
  puVar2 = (undefined4 *)(in_stack_00000004 + -4);
  while( true ) {
    cVar1 = FUN_00421c30(*puVar2);
    if (cVar1 != '\0') break;
    cVar1 = FUN_00421f74(*puVar2);
    if ((byte)(cVar1 - 2U) < 3) {
      FUN_00423ae4(*puVar2);
    }
    FUN_00423edc(*puVar2,1);
    while( true ) {
      cVar1 = FUN_00421c30(*puVar2);
      if (cVar1 != '\0') break;
      FUN_00423c80(*puVar2);
    }
    FUN_00422b9c(*puVar2);
  }
  FUN_00422b9c(*puVar2);
  return;
}

