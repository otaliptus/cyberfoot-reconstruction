// Address: 0041d5d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041d5d0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  for (iVar1 = param_2; -1 < iVar1; iVar1 = iVar1 + -1) {
  }
  puVar2 = (undefined4 *)&stack0xfffffff4;
  if (-1 < param_2) {
    param_2 = param_2 + 1;
    do {
      FUN_0041d560(*puVar2);
      puVar2 = puVar2 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

