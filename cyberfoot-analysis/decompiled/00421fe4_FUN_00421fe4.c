// Address: 00421fe4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00421fe4(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))
                    (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    FUN_0040e42c(PTR_DAT_0041b3ac,1,PTR_PTR_0066b614);
    FUN_00404250();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

