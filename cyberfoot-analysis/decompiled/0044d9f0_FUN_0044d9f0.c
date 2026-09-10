// Address: 0044d9f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044d9f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != *(int *)(param_1 + 0x24)) {
    iVar2 = *(int *)(param_1 + 0x18);
    if ((((iVar2 <= param_2) || (param_2 < 0)) &&
        (iVar1 = *(int *)(param_1 + 0x14), iVar2 = param_2, 0 < iVar1)) && (iVar1 < param_2)) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 0x24) = iVar2;
    FUN_0044d864();
  }
  return;
}

