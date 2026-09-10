// Address: 00419860
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00419860(void)

{
  uint uVar1;
  int extraout_EDX;
  uint in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  FUN_004143bc(*(undefined4 *)(in_stack_00000014 + -4));
  uVar1 = FUN_00402c44();
  if (extraout_EDX == in_stack_00000010) {
    if (uVar1 < in_stack_0000000c) goto LAB_004198a4;
  }
  else if (extraout_EDX < in_stack_00000010) goto LAB_004198a4;
  if (extraout_EDX == in_stack_00000008) {
    if (uVar1 <= in_stack_00000004) {
      return uVar1;
    }
  }
  else if (extraout_EDX <= in_stack_00000008) {
    return uVar1;
  }
LAB_004198a4:
  FUN_0040e42c(PTR_DAT_00408a6c,1,PTR_PTR_0066b624);
  FUN_00404250();
  return uVar1;
}

