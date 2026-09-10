// Address: 0049f4cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0049f4cc(int param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar3;
  
  pcVar4 = (char *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x6c));
  pcVar5 = (char *)(*(int *)(param_1 + 0x38) + param_2);
  if ((*pcVar5 == *pcVar4) && (pcVar5[1] == pcVar4[1])) {
    pcVar5 = pcVar5 + 2;
    pcVar3 = pcVar4 + 2;
    while (((((pcVar2 = pcVar3 + 1, *pcVar2 == pcVar5[1] &&
              (pcVar2 = pcVar3 + 2, *pcVar2 == pcVar5[2])) &&
             (pcVar2 = pcVar3 + 3, *pcVar2 == pcVar5[3])) &&
            ((pcVar2 = pcVar3 + 4, *pcVar2 == pcVar5[4] &&
             (pcVar2 = pcVar3 + 5, *pcVar2 == pcVar5[5])))) &&
           ((pcVar2 = pcVar3 + 6, *pcVar2 == pcVar5[6] &&
            (pcVar2 = pcVar3 + 7, *pcVar2 == pcVar5[7]))))) {
      pcVar2 = pcVar3 + 8;
      pcVar5 = pcVar5 + 8;
      if ((*pcVar2 != *pcVar5) || (pcVar3 = pcVar2, pcVar4 + 0x102 <= pcVar2)) break;
    }
    uVar1 = 0x102 - ((int)(pcVar4 + 0x102) - (int)pcVar2);
    if ((int)uVar1 < 3) {
      uVar1 = 2;
    }
    else {
      *(int *)(param_1 + 0x70) = param_2;
      if (*(uint *)(param_1 + 0x74) < uVar1) {
        uVar1 = *(uint *)(param_1 + 0x74);
      }
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

