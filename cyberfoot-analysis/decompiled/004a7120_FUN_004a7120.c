// Address: 004a7120
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a7120(undefined2 param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  *(undefined1 *)(*(int *)(param_4 + -4) + 0x20) = param_2;
  iVar1 = *(int *)(param_4 + -4);
  *(undefined4 *)(iVar1 + 0x21) = 0x28;
  *(undefined4 *)(iVar1 + 0x29) = *(undefined4 *)(*(int *)(param_4 + -4) + 0x45c);
  *(undefined4 *)(iVar1 + 0x25) = *(undefined4 *)(*(int *)(param_4 + -4) + 0x458);
  *(undefined2 *)(iVar1 + 0x2d) = 1;
  *(undefined2 *)(iVar1 + 0x2f) = param_1;
  *(undefined4 *)(iVar1 + 0x31) = 0;
  return;
}

