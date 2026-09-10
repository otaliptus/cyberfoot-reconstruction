// Address: 0063efbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_Label49Click(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00403c34(param_2,PTR_PTR_0053f6b0);
  *(undefined4 *)PTR_DAT_0066b194 = *(undefined4 *)(iVar1 + 0xc);
  if (*(int *)PTR_DAT_0066b194 < *(int *)(PTR_DAT_0066ac78 + 0x3c)) {
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0058a3a0,PTR_DAT_0066b0fc);
    (**(code **)(**(int **)PTR_DAT_0066b0fc + 0xec))();
  }
  return;
}

