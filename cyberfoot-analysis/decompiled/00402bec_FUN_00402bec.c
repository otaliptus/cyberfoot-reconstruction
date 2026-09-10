// Address: 00402bec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00402bec(void)

{
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ROUND((float10)1.4426950408889634 * in_ST0);
  fVar2 = (float10)f2xm1((float10)1.4426950408889634 * in_ST0 - fVar1);
  fscale((float10)1 + fVar2,fVar1);
  return;
}

