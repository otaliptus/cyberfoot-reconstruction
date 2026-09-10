// Address: 00470eb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00470eb0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_stack_00000004;
  
  piVar3 = (int *)(in_stack_00000004 + -4);
  iVar1 = *(int *)(*piVar3 + 0x18);
  iVar2 = *(int *)(*piVar3 + 0x60);
  if (*(char *)(*(int *)(iVar2 + 0x14) + 0x10) == '\x01') {
    iVar2 = FUN_0046ea5c(iVar2,1);
    if (*(int *)(*piVar3 + 0x54) <= iVar2 + iVar1) {
      *(int *)(*piVar3 + 0x54) = iVar2 + iVar1;
    }
    iVar2 = FUN_00470ba4(*piVar3,*(undefined4 *)(*piVar3 + 0x60));
    if (iVar2 - iVar1 <= *(int *)(*piVar3 + 0x54)) {
      *(int *)(*piVar3 + 0x54) = iVar2 - iVar1;
    }
  }
  else {
    iVar2 = FUN_0046ea5c(iVar2,2);
    if (*(int *)(*piVar3 + 0x50) <= iVar2 + iVar1) {
      *(int *)(*piVar3 + 0x50) = iVar2 + iVar1;
    }
    iVar2 = FUN_00470ba4(*piVar3,*(undefined4 *)(*piVar3 + 0x60));
    if (iVar2 - iVar1 <= *(int *)(*piVar3 + 0x50)) {
      *(int *)(*piVar3 + 0x50) = iVar2 - iVar1;
    }
  }
  return;
}

