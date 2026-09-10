// Address: 0042215c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042215c(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar1 = FUN_00405eec(*(undefined4 *)(in_stack_00000004 + -4));
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_0041dec0(*(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x34),
                   *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + iVar2 * 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

