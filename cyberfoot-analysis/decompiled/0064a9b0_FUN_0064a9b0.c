// Address: 0064a9b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0064a9b0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0x14;
  puVar2 = PTR_DAT_0066ae98;
  do {
    puVar2 = puVar2 + 4;
    if (-1 < *(int *)(puVar2 + *(int *)(PTR_DAT_0066ae98 + param_1 * 0x568 + 0x510) * 0x50 +
                               param_1 * 0x568 + -4)) {
      iVar3 = iVar3 + 1;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return iVar3;
}

