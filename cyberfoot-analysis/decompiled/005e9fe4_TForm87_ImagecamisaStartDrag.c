// Address: 005e9fe4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm87_ImagecamisaStartDrag(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00403c10(param_2,PTR_PTR_004386b8);
  if (cVar1 != '\0') {
    iVar2 = FUN_00403c34(param_2,PTR_PTR_004386b8);
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 < 0xc) {
      FUN_00403c34(param_2,PTR_PTR_004386b8);
      if (1 < iVar2) {
        FUN_00466128(*(undefined4 *)(param_1 + 0x350),1);
      }
    }
  }
  cVar1 = FUN_00403c10(param_2,PTR_PTR_004df4e4);
  if (cVar1 != '\0') {
    iVar2 = FUN_00403c34(param_2,PTR_PTR_004df4e4);
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 < 0xc) {
      FUN_00403c34(param_2,PTR_PTR_004df4e4);
      if (1 < iVar2) {
        FUN_00466128(*(undefined4 *)(param_1 + 0x350),1);
      }
    }
  }
  return;
}

