// Address: 005eb4d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm87_Image1DragOver
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_00403c10(param_3,PTR_PTR_00457844);
  if (((cVar1 == '\0') && (cVar1 = FUN_00403c10(param_3,PTR_PTR_004386b8), cVar1 == '\0')) &&
     (cVar1 = FUN_00403c10(param_3,PTR_PTR_004df4e4), cVar1 == '\0')) {
    return;
  }
  *param_4 = 1;
  return;
}

