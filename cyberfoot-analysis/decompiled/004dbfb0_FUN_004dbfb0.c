// Address: 004dbfb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dbfb0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((PTR_DAT_0066b7ac[0xd] != '\0') && (param_1 != 0)) {
    iVar2 = FUN_00478b4c(*(undefined4 *)(param_1 + 0x34));
    if (0 < iVar2) {
      uVar3 = FUN_00478b5c(*(undefined4 *)(param_1 + 0x34),0);
      cVar1 = FUN_00403c10(uVar3,PTR_PTR_004db538);
      if (cVar1 != '\0') {
        uVar3 = FUN_00478b5c(*(undefined4 *)(param_1 + 0x34),0);
        uVar3 = FUN_00403c34(uVar3,PTR_PTR_004db538);
        FUN_004dc438(uVar3,param_1);
      }
    }
  }
  return;
}

