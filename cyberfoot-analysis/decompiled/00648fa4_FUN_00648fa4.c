// Address: 00648fa4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00648fa4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  switch(param_2) {
  case 0:
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + param_1 * 0x130) + 0x3a;
    break;
  case 1:
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + param_1 * 0x130);
    break;
  case 2:
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + param_1 * 0x130) + 0x1d;
    break;
  case 3:
    iVar1 = 0x57;
    break;
  case 4:
    iVar1 = 0x58;
  }
  FUN_00409dd8(iVar1,param_3);
  return;
}

