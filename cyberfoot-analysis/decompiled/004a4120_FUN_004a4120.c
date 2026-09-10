// Address: 004a4120
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a4120(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  
  FUN_004a40b8(param_1);
  *(undefined4 *)(param_1 + 0x16b4) = 8;
  if (param_4 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(byte *)(*(int *)(param_1 + 8) + iVar1) = (byte)param_3;
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    bVar2 = (byte)((uint)param_3 >> 8);
    *(byte *)(*(int *)(param_1 + 8) + iVar1) = bVar2;
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(byte *)(*(int *)(param_1 + 8) + iVar1) = ~(byte)param_3;
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(byte *)(*(int *)(param_1 + 8) + iVar1) = ~bVar2;
  }
  while (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *param_2;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  return;
}

