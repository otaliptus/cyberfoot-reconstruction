// Address: 0043f9f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043f9f8(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  FUN_004680ec(param_1,param_2,param_3);
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00472158);
  if (cVar1 != '\0') {
    if (((char)param_3 != '\0') || (*(int *)(param_1 + 0x168) == 0)) {
      FUN_0043f640(param_1,*(undefined4 *)(param_2 + 0x6c));
    }
    piVar2 = (int *)FUN_0043f518(param_1);
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if ((((cVar1 != '\0') && (*(int *)(param_2 + 0x5c) != 0)) &&
        (*(int *)(*(int *)(param_2 + 0x5c) + 0x38) != 0)) && (-1 < *(int *)(param_2 + 0x80))) {
      iVar3 = FUN_00473f5c(*(undefined4 *)(*(int *)(param_2 + 0x5c) + 0x38));
      if (*(int *)(param_2 + 0x80) < iVar3) {
        FUN_0043f968(*(undefined4 *)(*(int *)(param_2 + 0x5c) + 0x38),
                     *(undefined4 *)(param_2 + 0x80));
      }
    }
  }
  return;
}

