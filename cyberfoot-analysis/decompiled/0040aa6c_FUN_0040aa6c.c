// Address: 0040aa6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040aa6c(char *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *pcVar4;
  char *extraout_EDX;
  char *extraout_EDX_00;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  byte bVar10;
  int local_14;
  char *local_10;
  char *local_c;
  undefined4 local_8;
  
  bVar10 = 0;
  local_8 = 0;
  pcVar3 = param_3 + param_6;
  local_10 = (char *)0x0;
  local_14 = 0;
  local_c = param_1;
LAB_0040aa95:
  if (param_2 != 0) {
    do {
      if (param_3 == pcVar3) break;
      pcVar6 = param_3 + (uint)bVar10 * -2 + 1;
      cVar1 = *param_3;
      param_3 = pcVar6;
      if (cVar1 == '%') {
        if (pcVar6 == pcVar3) break;
        param_3 = pcVar6 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar6;
        if (cVar1 != '%') goto code_r0x0040aab9;
      }
      pcVar6 = param_1 + (uint)bVar10 * -2 + 1;
      *param_1 = cVar1;
      param_2 = param_2 + -1;
      param_1 = pcVar6;
      if (param_2 == 0) break;
    } while( true );
  }
LAB_0040aaa6:
  FUN_0040add3((int)param_1 - (int)local_c);
  return;
code_r0x0040aab9:
  pcVar6 = param_3 + -2;
  while( true ) {
    pcVar7 = param_3;
    cVar2 = cVar1;
    if (cVar1 == '-') {
      if (param_3 == pcVar3) goto LAB_0040aaa6;
      pcVar7 = param_3 + (uint)bVar10 * -2 + 1;
      cVar2 = *param_3;
    }
    cVar2 = FUN_0040ab4e(cVar2);
    pcVar3 = extraout_ECX;
    if (cVar2 != ':') break;
    local_10 = pcVar6;
    if (pcVar7 == extraout_ECX) goto LAB_0040aaa6;
    param_3 = pcVar7 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar7;
  }
  pcVar5 = extraout_EDX;
  param_3 = pcVar7;
  if (cVar2 == '.') {
    if (pcVar7 == extraout_ECX) goto LAB_0040aaa6;
    param_3 = pcVar7 + (uint)bVar10 * -2 + 1;
    FUN_0040ab4e(*pcVar7);
    pcVar3 = extraout_ECX_00;
    pcVar5 = extraout_EDX_00;
  }
  FUN_0040ab96();
  pcVar7 = pcVar6 + -(int)extraout_ECX_01;
  if (pcVar6 < extraout_ECX_01) {
    pcVar7 = (char *)0x0;
  }
  pcVar6 = extraout_ECX_01;
  pcVar8 = param_3;
  if (cVar1 == '-') {
    bVar9 = pcVar5 < extraout_ECX_01;
    pcVar5 = pcVar5 + -(int)extraout_ECX_01;
    pcVar4 = extraout_ECX_01;
    if (bVar9) {
      pcVar4 = extraout_ECX_01 + (int)pcVar5;
      pcVar5 = (char *)0x0;
    }
    for (; pcVar6 = (char *)0x0, pcVar4 != (char *)0x0; pcVar4 = pcVar4 + -1) {
      *param_1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
      param_1 = param_1 + (uint)bVar10 * -2 + 1;
    }
  }
  pcVar4 = pcVar5 + -(int)pcVar7;
  if (pcVar5 < pcVar7) {
    pcVar7 = pcVar7 + (int)pcVar4;
    pcVar4 = (char *)0x0;
  }
  for (; pcVar7 != (char *)0x0; pcVar7 = pcVar7 + -1) {
    *param_1 = ' ';
    param_1 = param_1 + (uint)bVar10 * -2 + 1;
  }
  param_2 = (int)pcVar4 - (int)pcVar6;
  if (pcVar4 < pcVar6) {
    pcVar6 = pcVar6 + param_2;
    param_2 = 0;
  }
  for (; pcVar6 != (char *)0x0; pcVar6 = pcVar6 + -1) {
    *param_1 = *pcVar8;
    pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
    param_1 = param_1 + (uint)bVar10 * -2 + 1;
  }
  if (local_14 != 0) {
    FUN_0040aa60(&local_14);
  }
  goto LAB_0040aa95;
}

