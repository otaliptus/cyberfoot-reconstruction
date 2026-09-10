// Address: 004662b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004662b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  iVar1 = FUN_0042a580(*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != *(int *)(param_1 + 0x84)) {
    *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) | 0x10;
    uVar2 = FUN_0042a580(*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x84) = uVar2;
  }
  FUN_004673cc(param_1,0xb00e,0,0);
  return;
}

