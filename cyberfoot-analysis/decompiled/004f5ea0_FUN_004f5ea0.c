// Address: 004f5ea0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004f5ea0(undefined4 param_1,int *param_2,int *param_3)

{
  float10 fVar1;
  undefined2 extraout_var;
  float10 in_ST0;
  float10 in_ST1;
  
  (**(code **)(*param_2 + 0xc))();
  (**(code **)(*param_3 + 0xc))();
  fVar1 = (float10)(double)in_ST0;
  return CONCAT31((int3)(CONCAT22(extraout_var,
                                  (ushort)(in_ST1 < fVar1) << 8 |
                                  (ushort)(NAN(in_ST1) || NAN(fVar1)) << 10 |
                                  (ushort)(in_ST1 == fVar1) << 0xe) >> 8),
                  in_ST1 < fVar1 != 0 || (in_ST1 == fVar1) != 0);
}

