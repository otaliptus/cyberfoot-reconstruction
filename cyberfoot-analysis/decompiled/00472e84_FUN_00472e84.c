// Address: 00472e84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00472e84(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if ((char)param_2 != *(char *)((int)param_1 + 0x95)) {
    iVar5 = *(int *)(param_1[0x14] + 8);
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        uVar2 = FUN_0041e01c(param_1[0x14],iVar4);
        cVar1 = FUN_00403c10(uVar2,PTR_PTR_00472568);
        if (cVar1 != '\0') {
          piVar3 = (int *)FUN_0041e01c(param_1[0x14],iVar4);
          (**(code **)(*piVar3 + 0x48))(piVar3,param_2);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(char *)((int)param_1 + 0x95) = (char)param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

