// Address: 00425370
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00425370(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000004;
  char local_114 [256];
  int local_14 [2];
  int local_c [2];
  
  FUN_0041aa84(*(undefined4 *)(in_stack_00000004 + -4),*(undefined4 *)(in_stack_00000004 + -8),
               local_c);
  iVar2 = 0;
  if (*(char *)(in_stack_00000004 + -9) != '\0') {
    FUN_0041aa84(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -8),
                 local_14);
    iVar2 = local_14[0];
  }
  if (iVar2 == local_c[0]) {
LAB_004253df:
    uVar1 = 1;
  }
  else {
    if (local_c[0] != 0) {
      FUN_00403d58(**(undefined4 **)(in_stack_00000004 + -0x1c),local_c[0],local_114);
      if (local_114[0] == '\0') goto LAB_004253df;
    }
    uVar1 = 0;
  }
  return uVar1;
}

