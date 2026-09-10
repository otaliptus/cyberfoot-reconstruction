// Address: 0040583c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040583c(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(*(byte *)(param_2 + 1) + 10 + param_2);
  iVar3 = *(int *)(*(byte *)(param_2 + 1) + 6 + param_2);
  do {
    FUN_00405884(puVar2[1] + param_1,*(undefined4 *)*puVar2,1);
    puVar2 = puVar2 + 2;
    iVar4 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return;
}

