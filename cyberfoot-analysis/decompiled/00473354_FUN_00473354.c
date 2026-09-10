// Address: 00473354
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00473354(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((char)param_2 != *(char *)((int)param_1 + 0x86)) {
    iVar4 = *(int *)(param_1[0x14] + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        iVar1 = FUN_00403c34(*(undefined4 *)(*(int *)(param_1[0x14] + 4) + iVar3 * 4),
                             PTR_PTR_00472568);
        if (iVar1 != 0) {
          piVar2 = (int *)FUN_0041e01c(param_1[0x14],iVar3);
          (**(code **)(*piVar2 + 0x74))(piVar2,param_2);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(char *)((int)param_1 + 0x86) = (char)param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

