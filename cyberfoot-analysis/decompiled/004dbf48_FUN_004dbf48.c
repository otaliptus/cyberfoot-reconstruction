// Address: 004dbf48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dbf48(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_004dbfac == (DAT_004dbfa8 & *(ushort *)(param_1 + 0x1c))) {
    iVar2 = FUN_00478b4c(param_1);
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      do {
        uVar3 = FUN_00478b5c(param_1,iVar2);
        FUN_004dbf48(uVar3,param_2);
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    cVar1 = FUN_00403c10(param_1,PTR_PTR_004db538);
    if (cVar1 != '\0') {
      FUN_004dc438(param_1,param_2);
    }
  }
  return;
}

