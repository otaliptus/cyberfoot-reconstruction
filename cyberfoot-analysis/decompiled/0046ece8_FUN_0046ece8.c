// Address: 0046ece8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0046ece8(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x14);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_0046ef68(iVar1);
    if (iVar2 != 0) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return 1;
}

