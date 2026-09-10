// Address: 00421b20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00421b20(int param_1,undefined4 param_2)

{
  char cVar1;
  code *in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  cVar1 = FUN_004096cc(param_2,*(undefined4 *)(param_1 + 0x70));
  if ((cVar1 != '\0') && (in_stack_0000000c._2_2_ != 0)) {
    (*in_stack_0000000c)(in_stack_00000010,param_1);
    FUN_004048d4(param_1 + 0x70);
  }
  return;
}

