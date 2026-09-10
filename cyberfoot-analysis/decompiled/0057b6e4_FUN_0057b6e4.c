// Address: 0057b6e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0057b6e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  
  if (*(double *)(param_1 + 0x260) != (double)CONCAT44(param_5,param_4)) {
    *(undefined4 *)(param_1 + 0x260) = param_4;
    *(undefined4 *)(param_1 + 0x264) = param_5;
    if (*(double *)(param_1 + 0x278) < *(double *)(param_1 + 0x260)) {
      cVar1 = FUN_0057b128(param_1);
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_1 + 0x260);
        *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_1 + 0x264);
        *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x260);
        *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0x264);
        *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x260);
        *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x264);
      }
      else {
        *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x260);
        *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x264);
      }
    }
    FUN_0057aaa0(param_1);
  }
  return;
}

