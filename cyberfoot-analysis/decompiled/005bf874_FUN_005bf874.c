// Address: 005bf874
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bf874(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0047e4c0(param_1);
  cVar1 = FUN_00403c10(iVar2,PTR_PTR_0047ce6c);
  iVar3 = 0;
  if (cVar1 != '\0') {
    iVar3 = iVar2;
  }
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x22f) == '\x01')) {
    (**(code **)(**(int **)(param_1 + 0x230) + 0x1c))();
    if (*(int *)(param_2 + 4) == 0) {
      FUN_005c0114();
    }
  }
  return;
}

