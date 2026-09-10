// Address: 00440430
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00440430(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0045eed0(param_1,param_2);
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00472158);
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_004400f4(param_1);
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if ((((cVar1 != '\0') && (*(int *)(param_2 + 0x5c) != 0)) &&
        (*(int *)(*(int *)(param_2 + 0x5c) + 0x38) != 0)) && (-1 < *(int *)(param_2 + 0x80))) {
      iVar3 = FUN_00473f5c(*(undefined4 *)(*(int *)(param_2 + 0x5c) + 0x38));
      if (*(int *)(param_2 + 0x80) < iVar3) {
        FUN_004403a0(*(undefined4 *)(*(int *)(param_2 + 0x5c) + 0x38),
                     *(undefined4 *)(param_2 + 0x80));
      }
    }
  }
  return;
}

