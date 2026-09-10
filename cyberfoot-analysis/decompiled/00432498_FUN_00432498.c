// Address: 00432498
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00432498(void)

{
  uint in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  uint local_c;
  int local_8;
  
  local_c = in_stack_00000014;
  local_8 = in_stack_00000018;
  if (in_stack_00000018 == in_stack_00000010) {
    if (in_stack_0000000c <= in_stack_00000014) goto LAB_004324ca;
  }
  else if (in_stack_00000010 <= in_stack_00000018) goto LAB_004324ca;
  local_c = in_stack_0000000c;
  local_8 = in_stack_00000010;
LAB_004324ca:
  if (local_8 == in_stack_00000008) {
    if (local_c <= in_stack_00000004) {
      return local_c;
    }
  }
  else if (local_8 <= in_stack_00000008) {
    return local_c;
  }
  return in_stack_00000004;
}

