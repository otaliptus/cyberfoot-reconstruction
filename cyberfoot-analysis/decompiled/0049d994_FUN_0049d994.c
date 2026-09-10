// Address: 0049d994
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049d994(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 local_83c;
  char local_838 [31];
  char acStack_819 [5];
  int local_814 [257];
  int local_410 [257];
  
  local_83c = param_3;
  FUN_0048aaf4();
  FUN_0048aaf4();
  iVar4 = 0;
  piVar2 = local_410;
  do {
    *piVar2 = -1;
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 0x101);
  local_83c[0x100] = 1;
  while( true ) {
    iVar4 = -1;
    iVar9 = 1000000000;
    iVar5 = 0;
    piVar2 = local_83c;
    do {
      iVar6 = *piVar2;
      if ((iVar6 != 0) && (iVar6 <= iVar9)) {
        iVar4 = iVar5;
        iVar9 = iVar6;
      }
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar5 < 0x101);
    iVar9 = -1;
    iVar5 = 1000000000;
    iVar6 = 0;
    piVar2 = local_83c;
    do {
      iVar1 = *piVar2;
      if (((iVar1 != 0) && (iVar1 <= iVar5)) && (iVar4 != iVar6)) {
        iVar9 = iVar6;
        iVar5 = iVar1;
      }
      iVar6 = iVar6 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar6 < 0x101);
    if (iVar9 < 0) break;
    local_83c[iVar4] = local_83c[iVar4] + local_83c[iVar9];
    local_83c[iVar9] = 0;
    local_814[iVar4] = local_814[iVar4] + 1;
    while (iVar5 = local_410[iVar4], -1 < iVar5) {
      local_814[iVar5] = local_814[iVar5] + 1;
      iVar4 = iVar5;
    }
    local_410[iVar4] = iVar9;
    local_814[iVar9] = local_814[iVar9] + 1;
    while (iVar9 = local_410[iVar9], -1 < iVar9) {
      local_814[iVar9] = local_814[iVar9] + 1;
    }
  }
  iVar4 = 0;
  piVar2 = local_814;
  do {
    if (*piVar2 != 0) {
      if (0x20 < *piVar2) {
        *(undefined4 *)(*param_1 + 0x14) = 0x27;
        (**(code **)*param_1)();
      }
      local_838[*piVar2] = local_838[*piVar2] + '\x01';
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 0x101);
  pcVar7 = acStack_819 + 1;
  iVar4 = 0x20;
  do {
    while (iVar9 = iVar4, *pcVar7 != '\0') {
      iVar4 = iVar9 + -2;
      for (pcVar3 = local_838 + iVar9 + -2; *pcVar3 == '\0'; pcVar3 = pcVar3 + -1) {
        iVar4 = iVar4 + -1;
      }
      *pcVar7 = *pcVar7 + -2;
      pcVar7[-1] = pcVar7[-1] + '\x01';
      local_838[iVar4 + 1] = local_838[iVar4 + 1] + '\x02';
      local_838[iVar4] = local_838[iVar4] + -1;
      iVar4 = iVar9;
    }
    iVar4 = iVar9 + -1;
    pcVar7 = pcVar7 + -1;
  } while (0x10 < iVar4);
  for (pcVar7 = local_838 + iVar9 + -1; *pcVar7 == '\0'; pcVar7 = pcVar7 + -1) {
    iVar4 = iVar4 + -1;
  }
  local_838[iVar4] = local_838[iVar4] + -1;
  FUN_0048ab0c();
  iVar9 = 0;
  iVar4 = 1;
  do {
    iVar5 = 0;
    puVar8 = (undefined1 *)(param_2 + 0x11 + iVar9);
    piVar2 = local_814;
    do {
      if (iVar4 == *piVar2) {
        *puVar8 = (char)iVar5;
        iVar9 = iVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar5 < 0x100);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x21);
  *(undefined4 *)(param_2 + 0x114) = 0;
  return;
}

