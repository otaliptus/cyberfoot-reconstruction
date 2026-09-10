// Address: 0051a17c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0051a17c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uStack_8;
  
  uStack_8 = param_3;
  FUN_0051a0b0(*param_1,param_2,(int)&uStack_8 + 1);
  if (*(char *)(param_1 + 4) == '\0') {
    iVar2 = param_1[2];
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return iVar2;
      }
      pcVar1 = (char *)(param_1[1] + iVar2 * 3);
    } while (((*pcVar1 != uStack_8._1_1_) || (pcVar1[1] != uStack_8._2_1_)) ||
            (pcVar1[2] != uStack_8._3_1_));
  }
  else {
    for (iVar2 = 0; iVar2 < (int)param_1[2]; iVar2 = iVar2 + 1) {
      pcVar1 = (char *)(param_1[1] + iVar2 * 3);
      if (((*pcVar1 == uStack_8._1_1_) && (pcVar1[1] == uStack_8._2_1_)) &&
         (pcVar1[2] == uStack_8._3_1_)) {
        return iVar2;
      }
    }
    iVar2 = -1;
  }
  return iVar2;
}

