// Address: 00419f5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00419f5c(int *param_1,undefined4 *param_2,int param_3)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  byte bVar4;
  
  pcVar1 = *(char **)*param_2;
  bVar4 = 4;
  if (*pcVar1 != '\a') {
    bVar4 = pcVar1[(byte)pcVar1[1] + 2];
  }
  iVar3 = param_2[4];
  if (param_2[4] == -0x80000000) {
    iVar3 = param_3;
  }
  pcVar2 = (code *)param_2[2];
  if (*(byte *)((int)param_2 + 0xb) == 0xff) {
    param_1 = (int *)((int)param_1 + ((uint)pcVar2 & 0xffffff));
    *(char *)param_1 = (char)param_3;
    if ((1 < bVar4) && (*(short *)param_1 = (short)param_3, 3 < bVar4)) {
      *param_1 = param_3;
    }
  }
  else if (*(byte *)((int)param_2 + 0xb) < 0xfe) {
    (*pcVar2)(param_1,iVar3);
  }
  else {
    (**(code **)((int)(short)pcVar2 + *param_1))();
  }
  return;
}

