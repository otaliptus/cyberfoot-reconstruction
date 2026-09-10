// Address: 00485984
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00485984(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar1 = FUN_00484f00(*(undefined4 *)(in_stack_00000004 + -0x10));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_00484eec(*(undefined4 *)(in_stack_00000004 + -0x10),iVar1);
      if ((((*(int *)(iVar2 + 0x30) == 0) && ((*(byte *)(iVar2 + 0x1c) & 0x10) == 0)) &&
          (*(char *)(iVar2 + 0x5b) != '\0')) &&
         ((*(char *)(iVar2 + 0x57) != '\0' && (*(char *)(iVar2 + 0x22b) != '\x01')))) {
        return 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return 0;
}

