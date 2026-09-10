// Address: 00403540
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00403540(undefined1 *param_1,byte param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_3;
  for (uVar1 = uVar2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  if (param_2 >> 3 < uVar2) {
    param_1[(param_2 >> 3) - uVar2] =
         param_1[(param_2 >> 3) - uVar2] | '\x01' << (param_2 & 7) | 1U >> 8 - (param_2 & 7);
  }
  return;
}

