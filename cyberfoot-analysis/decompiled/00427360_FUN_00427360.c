// Address: 00427360
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00427360(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((param_2 != 0) && (*(int *)(param_1 + 0x10) != 0)) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 8), -1 < iVar3 + -1)) {
    iVar4 = 0;
    do {
      iVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x10),iVar4);
      cVar1 = FUN_004096cc(*(undefined4 *)(iVar2 + 8),param_2);
      if (cVar1 != '\0') {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

