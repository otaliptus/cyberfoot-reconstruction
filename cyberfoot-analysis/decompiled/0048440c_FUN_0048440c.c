// Address: 0048440c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048440c(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  
  iVar3 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x2f0);
  if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 8), -1 < iVar3 + -1)) {
    iVar4 = 0;
    do {
      uVar2 = FUN_0041e01c(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x2f0),iVar4);
      cVar1 = FUN_00472ad0(uVar2,*(undefined4 *)(in_stack_00000004 + -8));
      if (cVar1 != '\0') {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

