// Address: 00511a54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00511a54(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  
  iVar4 = 0;
  iVar2 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x4d8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      cVar1 = (**(code **)(**(int **)(in_stack_00000004 + -4) + 300))
                        (*(int **)(in_stack_00000004 + -4),iVar3);
      if (cVar1 != '\0') {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar4;
}

