// Address: 0057b808
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0057b808(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 extraout_ECX;
  float10 fVar3;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  
  cVar2 = FUN_0057a8e4(param_1);
  if (cVar2 != '\0') {
    cVar2 = FUN_0057b128(param_1);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0057b82b;
    }
  }
  bVar1 = false;
LAB_0057b82b:
  FUN_00432400();
  FUN_0043233c();
  *(double *)(param_1 + 0x210) = (double)in_ST1;
  fVar3 = in_ST2;
  if (bVar1) {
    fVar3 = in_ST3;
    FUN_0057b204(param_1);
    *(double *)(param_1 + 0x278) = (double)in_ST2;
    *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x278);
    *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0x27c);
    FUN_0057aaa0(param_1);
  }
  cVar2 = FUN_0057b128(param_1);
  if (cVar2 == '\0') {
    FUN_0057b204(param_1);
    *(double *)(param_1 + 0x278) = (double)fVar3;
    *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x278);
    *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0x27c);
    if (*(short *)(param_1 + 0x282) != 0) {
      (**(code **)(param_1 + 0x280))
                (*(undefined4 *)(param_1 + 0x284),param_1,extraout_ECX,
                 *(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x27c));
    }
    FUN_0057aaa0(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0x232) = 1;
  }
  return;
}

