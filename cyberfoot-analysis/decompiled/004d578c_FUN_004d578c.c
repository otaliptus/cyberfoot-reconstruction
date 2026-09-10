// Address: 004d578c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_004d578c(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int in_stack_00000004;
  
  iVar3 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x14))();
    bVar2 = 0 < iVar3;
  }
  else {
    bVar2 = 1;
    cVar1 = FUN_00403c10(iVar3,PTR_PTR_004d51e0);
    if (cVar1 != '\0') {
      bVar2 = FUN_004d5844(*(undefined4 *)(in_stack_00000004 + -8),iVar3);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}

