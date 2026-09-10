// Address: 00404218
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00404218(void)

{
  int iVar1;
  code *extraout_ECX;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((*(uint *)(in_stack_00000004 + 4) & 6) != 0) {
    iVar1 = *(int *)(in_stack_00000008 + 4);
    *(undefined4 *)(in_stack_00000008 + 4) = 0x404248;
    FUN_00403f00(in_stack_00000004,in_stack_00000008,iVar1 + 5);
    (*extraout_ECX)();
  }
  return 1;
}

