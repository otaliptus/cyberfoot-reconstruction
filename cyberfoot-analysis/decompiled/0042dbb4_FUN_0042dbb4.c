// Address: 0042dbb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0042dbb4(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (iVar1 == 0) {
    bVar4 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0xc) != 0;
  }
  else {
    bVar4 = true;
    cVar3 = FUN_00403c10(iVar1,PTR_PTR_0042902c);
    if (cVar3 != '\0') {
      if ((*(int *)(*(int *)(in_stack_00000004 + -8) + 0xc) == *(int *)(iVar1 + 0xc)) ||
         (((piVar2 = *(int **)(*(int *)(in_stack_00000004 + -8) + 0xc), piVar2 != (int *)0x0 &&
           (*(int *)(iVar1 + 0xc) != 0)) &&
          (cVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,*(undefined4 *)(iVar1 + 0xc)), cVar3 != '\0'
          )))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
  }
  return bVar4;
}

