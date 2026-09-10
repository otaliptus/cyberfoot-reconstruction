// Address: 00488824
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char FUN_00488824(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_0066cbf8 + 0x6c);
  if (iVar4 == 0) {
LAB_0048884f:
    iVar3 = *(int *)(param_1 + 0x44);
    if ((iVar4 != iVar3) && (iVar3 != 0)) {
      iVar4 = FUN_004673cc(iVar3,param_2,0,param_3);
      if (iVar4 == 1) goto LAB_0048886f;
    }
    cVar1 = '\0';
  }
  else {
    iVar3 = FUN_004673cc(iVar4,param_2,0,param_3);
    if (iVar3 != 1) goto LAB_0048884f;
LAB_0048886f:
    cVar1 = '\x01';
  }
  if (cVar1 == '\0') {
    cVar2 = FUN_00403c10(param_3,PTR_PTR_00472158);
    if (((cVar2 != '\0') && (*(char *)(param_3 + 0x6a) != '\0')) &&
       (*(char *)(param_3 + 0x60) != '\0')) {
      FUN_0047304c(param_3,*(short *)(param_3 + 0x42) != 0);
    }
  }
  return cVar1;
}

