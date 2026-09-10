// Address: 00511574
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00511574(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  
  iVar5 = 0;
  iVar2 = FUN_0050ae9c(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x4d4));
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x4d4);
      iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,iVar4);
      if (*(char *)(iVar3 + 0xa9) != '\0') {
        piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x4d4);
        iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,iVar4);
        iVar5 = iVar5 + *(int *)(iVar3 + 0xb0);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((*(byte *)(*(int *)(in_stack_00000004 + -4) + 0x490) & 0x80) != 0) {
    iVar5 = iVar5 + 0xc;
  }
  return iVar5;
}

