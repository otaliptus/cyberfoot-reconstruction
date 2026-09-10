// Address: 004dea44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004dea44(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_004dea87;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((param_1 != 0) && (param_1 == *(int *)(param_1 + 0x3c))) {
    cVar1 = thunk_FUN_00403cb4(*(undefined4 *)(param_1 + 4),PTR_PTR_004dd380);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_004dea7b;
    }
  }
  uVar2 = 0;
LAB_004dea7b:
  *in_FS_OFFSET = uStack_1c;
  return uVar2;
}

