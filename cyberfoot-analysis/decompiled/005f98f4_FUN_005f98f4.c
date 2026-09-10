// Address: 005f98f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_005f98f4(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = 0;
  iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x5fc);
  if (0 < iVar4) {
    iVar5 = 1;
    piVar3 = (int *)(PTR_DAT_0066ac78 + 0x604);
    do {
      cVar1 = FUN_0064d890(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar3 * 0x2f8));
      if (cVar1 != '\0') {
        uVar2 = 1;
        *(int *)PTR_DAT_0066b710 = iVar5;
        break;
      }
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (PTR_DAT_0066ac78[0x708] == '\0') {
    PTR_DAT_0066ac78[0x708] = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

