// Address: 00480e00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00480e00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  iVar1 = FUN_004812dc(*(undefined4 *)(in_stack_00000004 + -4));
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_00481328(*(undefined4 *)(in_stack_00000004 + -4),iVar3);
      if (*(char *)(iVar2 + 0x22b) == '\x02') {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

