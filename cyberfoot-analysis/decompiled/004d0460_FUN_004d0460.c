// Address: 004d0460
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d0460(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x7c))();
  iVar1 = param_1[0xa3];
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x218) = 0xffffff;
    *(undefined4 *)(iVar1 + 0x21c) = *(undefined4 *)(param_1[0x95] + 0x1c);
  }
  return;
}

