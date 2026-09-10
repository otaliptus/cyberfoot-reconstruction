// Address: 004030fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004030fc(byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar2 = (uint)*param_2;
  pbVar4 = param_1 + 1;
  param_2 = param_2 + 1;
  iVar1 = *param_1 - uVar2;
  if (*param_1 < uVar2 || iVar1 == 0) {
    uVar2 = uVar2 + iVar1;
  }
  uVar3 = uVar2 >> 2;
  do {
    if (uVar3 == 0) {
LAB_0040313f:
      uVar2 = uVar2 & 3;
      if ((uVar2 == 0) ||
         ((*pbVar4 == *param_2 &&
          ((uVar2 == 1 || ((pbVar4[1] == param_2[1] && ((uVar2 == 2 || (pbVar4[2] == param_2[2])))))
           ))))) {
        iVar1 = iVar1 * 2;
      }
      return iVar1;
    }
    if (*(int *)pbVar4 != *(int *)param_2) {
      return iVar1;
    }
    if (uVar3 == 1) {
      pbVar4 = pbVar4 + 4;
      param_2 = param_2 + 4;
      goto LAB_0040313f;
    }
    if (*(int *)(pbVar4 + 4) != *(int *)(param_2 + 4)) {
      return iVar1;
    }
    pbVar4 = pbVar4 + 8;
    param_2 = param_2 + 8;
    uVar3 = uVar3 - 2;
  } while( true );
}

