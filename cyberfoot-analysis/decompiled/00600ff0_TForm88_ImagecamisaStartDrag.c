// Address: 00600ff0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm88_ImagecamisaStartDrag(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
               *(int *)(&DAT_006d425c + *(int *)PTR_DAT_0066b5ec * 4) * 0x2f8) != '\0') {
    cVar1 = FUN_00403c10(param_2,PTR_PTR_004386b8);
    if (cVar1 != '\0') {
      iVar2 = FUN_00403c34(param_2,PTR_PTR_004386b8);
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 < 0xb) {
        FUN_00403c34(param_2,PTR_PTR_004386b8);
        if (0 < iVar2) {
          FUN_00466128(*(undefined4 *)(param_1 + 0x2fc),1);
        }
      }
    }
    cVar1 = FUN_00403c10(param_2,PTR_PTR_00457844);
    if (cVar1 != '\0') {
      iVar2 = FUN_00403c34(param_2,PTR_PTR_00457844);
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 < 0xb) {
        FUN_00403c34(param_2,PTR_PTR_00457844);
        if (0 < iVar2) {
          FUN_00466128(*(undefined4 *)(param_1 + 0x2fc),1);
        }
      }
    }
  }
  return;
}

