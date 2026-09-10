// Address: 0040b474
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0040b474(undefined4 param_1,uint param_2,int param_3)

{
  char cVar2;
  uint uVar1;
  char unaff_BL;
  uint *puVar3;
  undefined1 *unaff_EDI;
  char *pcVar4;
  uint local_8;
  
  *unaff_EDI = (char)param_1;
  if (unaff_BL == '\0') {
    param_2 = 0;
LAB_0040b48a:
    cVar2 = (char)((uint)param_1 >> 8);
    pcVar4 = unaff_EDI + 1;
    if (cVar2 == '\0') goto LAB_0040b491;
  }
  else {
    if (-1 < (int)param_2) goto LAB_0040b48a;
    cVar2 = '-';
    param_2 = -param_2;
  }
  pcVar4 = unaff_EDI + 2;
  unaff_EDI[1] = cVar2;
LAB_0040b491:
  puVar3 = &local_8;
  local_8 = param_2;
  do {
    do {
      uVar1 = param_2 / DAT_0066219c;
      *(char *)puVar3 = (char)(param_2 % DAT_0066219c) + '0';
      puVar3 = (uint *)((int)puVar3 + 1);
      param_3 = param_3 + -1;
      param_2 = uVar1;
    } while (uVar1 != 0);
  } while (0 < param_3);
  do {
    puVar3 = (uint *)((int)puVar3 + -1);
    *pcVar4 = *(char *)puVar3;
    pcVar4 = pcVar4 + 1;
  } while (puVar3 != &local_8);
  return local_8;
}

