// Address: 00424f6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00424f6c(void)

{
  float10 fVar1;
  undefined2 extraout_var;
  undefined4 uVar2;
  float10 in_ST0;
  float10 in_ST1;
  int in_stack_00000004;
  
  FUN_0041a6e0(*(undefined4 *)(in_stack_00000004 + -4),*(undefined4 *)(in_stack_00000004 + -8));
  if (*(char *)(in_stack_00000004 + -9) == '\0') {
    fVar1 = (float10)_DAT_00424fc4;
    uVar2 = CONCAT31((int3)(CONCAT22((short)((uint)in_stack_00000004 >> 0x10),
                                     (ushort)(in_ST0 < fVar1) << 8 |
                                     (ushort)(NAN(in_ST0) || NAN(fVar1)) << 10 |
                                     (ushort)(in_ST0 == fVar1) << 0xe) >> 8),(in_ST0 == fVar1) != 0)
    ;
  }
  else {
    FUN_0041a6e0(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -8))
    ;
    uVar2 = CONCAT31((int3)(CONCAT22(extraout_var,
                                     (ushort)(in_ST0 < in_ST1) << 8 |
                                     (ushort)(NAN(in_ST0) || NAN(in_ST1)) << 10 |
                                     (ushort)(in_ST0 == in_ST1) << 0xe) >> 8),
                     (in_ST0 == in_ST1) != 0);
  }
  return uVar2;
}

