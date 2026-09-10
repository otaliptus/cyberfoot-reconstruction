// Address: 004cd464
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_004cd464(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar2 = (**(code **)(*param_1 + 0x3c))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x3c))();
    cVar1 = FUN_00403c10(*(undefined4 *)(iVar2 + 4),PTR_PTR_00471e74);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*param_1 + 0x3c))();
      iVar2 = FUN_00403c34(*(undefined4 *)(iVar2 + 4),PTR_PTR_00471e74);
      bVar3 = *(int *)(iVar2 + 0x38) != 0;
    }
  }
  return bVar3;
}

