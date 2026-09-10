// Address: 004ddf70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ddf70(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = FUN_004de42c(param_1,*(undefined4 *)(param_1 + 0x3c));
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x38);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x3c);
    iVar1 = *(int *)(param_1 + 0x3c);
    *(int *)(iVar1 + 0x3c) = param_1;
    *(undefined1 **)(iVar1 + 0x38) = &LAB_004de494;
  }
  return;
}

