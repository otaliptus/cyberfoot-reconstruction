// Address: 00520434
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00520434(int param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) + -1;
  if (-1 < iVar2) {
    do {
      puVar1 = (undefined4 *)FUN_0041e01c(param_1,iVar2);
      if (param_2 == *(char *)(puVar1 + 1)) {
        return *puVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return 0;
}

