// Address: 004840f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004840f4(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x1a6) != '\0') {
    iVar2 = FUN_00469730(param_1);
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      do {
        piVar3 = (int *)FUN_004696f4(param_1,iVar4);
        if (((*(byte *)((int)piVar3 + 0x51) & 0x80) != 0) && (*(char *)((int)piVar3 + 0x57) != '\0')
           ) {
          (**(code **)(*piVar3 + 0x78))();
        }
        cVar1 = FUN_00403c10(piVar3,PTR_PTR_00461f94);
        if (cVar1 != '\0') {
          FUN_004840f4(piVar3);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

