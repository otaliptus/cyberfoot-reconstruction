// Address: 00474a98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_00474a98(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int in_stack_00000004;
  
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) == 0) {
    iVar3 = FUN_00473f5c(*(undefined4 *)(in_stack_00000004 + -8));
    return 0 < iVar3;
  }
  uVar1 = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  cVar2 = FUN_00403c10(uVar1,PTR_PTR_00473720);
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_004749a8(*(undefined4 *)(in_stack_00000004 + -8),uVar1), cVar2 != '\0')) {
    return false;
  }
  return true;
}

