// Address: 004a1c94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004a1c94(uint *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0;
  while ((uVar3 < param_3 && (uVar1 < 4))) {
    if (uVar1 < 2) {
      cVar2 = '\0';
    }
    else {
      cVar2 = -1;
    }
    if (*param_2 == cVar2) {
      uVar1 = uVar1 + 1;
    }
    else if (*param_2 == '\0') {
      uVar1 = 4 - uVar1;
    }
    else {
      uVar1 = 0;
    }
    uVar3 = uVar3 + 1;
    param_2 = param_2 + 1;
  }
  *param_1 = uVar1;
  return uVar3;
}

