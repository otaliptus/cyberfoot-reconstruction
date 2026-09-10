// Address: 005bfdb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_005bfdb8(void)

{
  int iVar1;
  int *in_stack_00000008;
  float *in_stack_0000000c;
  byte in_stack_00000010;
  
  if ((in_stack_00000010 & 4) == 0) {
    iVar1 = FUN_00402c38();
    *in_stack_00000008 = iVar1;
    iVar1 = FUN_00402c38();
    in_stack_00000008[1] = iVar1;
  }
  else {
    iVar1 = MulDiv(*in_stack_00000008,*(int *)(*(int *)PTR_DAT_0066b760 + 0x40),0x9ec);
    *in_stack_0000000c = (float)iVar1;
    iVar1 = MulDiv(in_stack_00000008[1],*(int *)(*(int *)PTR_DAT_0066b760 + 0x40),0x9ec);
    in_stack_0000000c[1] = (float)iVar1;
  }
  return 0;
}

