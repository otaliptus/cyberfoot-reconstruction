// Address: 00647c48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00647c48(int param_1,int param_2,undefined4 param_3)

{
  float10 in_ST0;
  
  FUN_004bc5a0(param_1 * 7,PTR_DAT_0066b574,param_3,
               *(undefined4 *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)
               ,*(undefined4 *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0xc)
              );
  *(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + param_2 * 0x130) = (double)in_ST0;
  *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xfc + param_2 * 0x130) = 0;
  return;
}

