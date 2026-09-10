// Address: 00521904
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00521904(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined4 uStackY_14;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_0041e41c(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x38));
    uStackY_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_18;
    piVar1 = *(int **)(param_1 + 0x7c);
    if ((piVar1 != (int *)0x0) && (*piVar1 == param_1)) {
      *piVar1 = 0;
    }
    *in_FS_OFFSET = uStackY_18;
    uStackY_14 = 0x52195c;
    FUN_0041e480(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x38),uStackY_18,&stack0xfffffffc);
    return;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_00403a84();
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_00403a84();
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_00403a84();
  }
  if (*(HANDLE *)(param_1 + 0x80) != (HANDLE)0x0) {
    uStackY_14 = 0x5219bd;
    CloseHandle(*(HANDLE *)(param_1 + 0x80));
  }
  return;
}

