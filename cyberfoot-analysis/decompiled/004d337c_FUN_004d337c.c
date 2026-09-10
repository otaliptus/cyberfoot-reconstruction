// Address: 004d337c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

short * FUN_004d337c(short *param_1,short *param_2,uint param_3)

{
  short *psVar1;
  uint uVar2;
  
  uVar2 = 0;
  psVar1 = param_1;
  for (; (uVar2 < param_3 && (*param_2 != 0)); param_2 = param_2 + 1) {
    *psVar1 = *param_2;
    psVar1 = psVar1 + 1;
    uVar2 = uVar2 + 1;
  }
  *psVar1 = 0;
  return param_1;
}

