// Address: 00454b84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00454b84(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x218) + 8);
  if (-1 < iVar4 + -1) {
    iVar3 = 0;
    do {
      uVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x218),iVar3);
      cVar1 = FUN_00403c10(uVar2,PTR_PTR_004481e0);
      if (cVar1 != '\0') {
        FUN_00454b24(param_1,iVar3);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

