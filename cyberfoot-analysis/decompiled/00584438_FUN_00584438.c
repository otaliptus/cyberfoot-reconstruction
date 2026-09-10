// Address: 00584438
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00584438(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x4c);
  iVar1 = *(int *)(param_1 + 0x214) + *(int *)(param_1 + 0x218);
  *(int *)(param_1 + 400) = iVar1;
  *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x48) - iVar1;
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 400);
  iVar1 = *(int *)(param_1 + 0x214) * 2 + *(int *)(param_1 + 0x218);
  *(int *)(param_1 + 0x184) = iVar1;
  *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x48) - iVar1;
  iVar2 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x184);
  *(int *)(param_1 + 0x18c) = iVar2;
  iVar1 = *(int *)(param_1 + 0x184);
  if (*(int *)(param_1 + 0x188) != iVar1 && -1 < *(int *)(param_1 + 0x188) - iVar1) {
    *(float *)(param_1 + 0x1d0) =
         (float)(int)((longlong)(ulonglong)*(byte *)(param_1 + 0x16b) / (longlong)(iVar2 - iVar1));
    *(float *)(param_1 + 0x1cc) =
         (float)(int)((longlong)(ulonglong)*(byte *)(param_1 + 0x16b) /
                     (longlong)(*(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x184)));
  }
  FUN_0058478c(param_1,*(undefined4 *)(param_1 + 0x25c));
  return;
}

