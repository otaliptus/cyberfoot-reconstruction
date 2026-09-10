// Address: 0046ba88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0046ba88(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if ((*(char *)(param_1 + 0x1a6) != '\0') && (iVar2 = FUN_00469730(param_1), -1 < iVar2 + -1)) {
    iVar5 = 0;
    do {
      piVar3 = (int *)FUN_004696f4(param_1,iVar5);
      if (((*(char *)((int)piVar3 + 0x57) != '\0') &&
          (cVar1 = (**(code **)(*piVar3 + 0x50))(), cVar1 != '\0')) &&
         ((((*(byte *)((int)piVar3 + 0x52) & 1) != 0 &&
           (iVar4 = FUN_004673cc(piVar3,0x112,*(undefined4 *)(*(int *)(param_4 + -4) + 4),
                                 *(undefined4 *)(*(int *)(param_4 + -4) + 8)), iVar4 != 0)) ||
          ((cVar1 = FUN_00403c10(piVar3,PTR_PTR_00461f94), cVar1 != '\0' &&
           (cVar1 = FUN_0046ba88(piVar3), cVar1 != '\0')))))) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

