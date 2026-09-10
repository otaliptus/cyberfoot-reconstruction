// Address: 0047144c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047144c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_3;
  uVar1 = FUN_00408220(param_1 + 0x1c,param_1 + 0x24,param_1 + 0x14,param_1 + 0x10,&uStack_8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(bool *)(param_1 + 0x20) = *(int *)(param_1 + 0x1c) != 0;
  return;
}

