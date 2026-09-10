// Address: 0050bbf4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050bbf4(int param_1,undefined4 param_2,undefined4 param_3,char param_4,uint *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  *param_5 = 0x800;
  iVar2 = *(int *)(param_1 + 0x34);
  if (*(char *)(iVar2 + 0x32) != '\0') {
    *param_5 = *param_5 | 0x20000;
  }
  cVar1 = *(char *)(iVar2 + 0x30);
  if (cVar1 == '\0') {
    *param_5 = *param_5;
  }
  else if (cVar1 == '\x01') {
    *param_5 = *param_5 | 2;
  }
  else if (cVar1 == '\x02') {
    *param_5 = *param_5 | 1;
  }
  cVar1 = *(char *)(iVar2 + 0xa8);
  if (cVar1 == '\0') {
    *param_5 = *param_5;
  }
  else if (cVar1 == '\x01') {
    *param_5 = *param_5 | 8;
  }
  else if (cVar1 == '\x02') {
    *param_5 = *param_5 | 4;
  }
  cVar1 = *(char *)(iVar2 + 0xb4);
  if (cVar1 == '\x01') {
    if (param_4 != '\0') {
      *param_5 = *param_5 | 0x8000;
    }
  }
  else if (cVar1 == '\x02') {
    if (param_4 != '\0') {
      *param_5 = *param_5 | 0x4000;
    }
  }
  else if (cVar1 == '\x03') {
    *param_5 = *param_5 | 0x2010;
  }
  if ((*(char *)(iVar2 + 0xb4) == '\x03') ||
     (uVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 0x4c))(), (uVar3 & 1) != 0)) {
    if (*(char *)(iVar2 + 0xa8) != '\0') {
      FUN_0050b7d4(param_1,param_3,param_5,*(char *)(iVar2 + 0xa8),param_2);
    }
  }
  else {
    *param_5 = *param_5 | 0x20;
  }
  return;
}

