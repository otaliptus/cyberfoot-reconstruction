// Address: 0051fecc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0051fecc(void)

{
  bool bVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = *(int *)(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) + 8);
  if (0 < iVar2) {
    return iVar2 < 0x100;
  }
  iVar2 = FUN_00524230(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 4));
  if (*(int *)(iVar2 + 8) < 1) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_00524230(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 4));
    bVar1 = *(int *)(iVar2 + 8) < 0x100;
  }
  return bVar1;
}

