// Address: 0064a9f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0064a9f4(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0x14;
  puVar2 = PTR_DAT_0066ae98;
  do {
    if (-1 < *(int *)(puVar2 + param_1 * 0x568 + 0x50)) {
      iVar3 = iVar3 + 1;
    }
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 4;
  } while (iVar1 != 0);
  return iVar3;
}

