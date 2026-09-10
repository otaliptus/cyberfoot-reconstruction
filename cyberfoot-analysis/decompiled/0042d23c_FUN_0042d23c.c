// Address: 0042d23c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042d23c(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8) + -1;
  if (-1 < iVar3) {
    do {
      puVar2 = (undefined4 *)FUN_0041e01c(param_1,iVar3);
      cVar1 = thunk_FUN_00403cb4(*puVar2,param_2);
      if (cVar1 != '\0') {
        FUN_00405b80(puVar2,PTR_DAT_0042ce64);
        FUN_0041df0c(param_1,iVar3);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}

