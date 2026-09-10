// Address: 00600ee4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm88_Image1DragOver
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  char cVar1;
  
  if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
               *(int *)(&DAT_006d425c + *(int *)PTR_DAT_0066b5ec * 4) * 0x2f8) == '\0') {
    *param_4 = 0;
  }
  else {
    cVar1 = FUN_00403c10(param_3,PTR_PTR_00457844);
    if ((cVar1 == '\0') && (cVar1 = FUN_00403c10(param_3,PTR_PTR_004386b8), cVar1 == '\0')) {
      return;
    }
    *param_4 = 1;
  }
  return;
}

