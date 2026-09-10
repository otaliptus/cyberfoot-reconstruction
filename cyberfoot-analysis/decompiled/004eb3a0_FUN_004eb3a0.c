// Address: 004eb3a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eb3a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x268) = param_4;
  *(undefined4 *)(param_1 + 0x26c) = param_5;
  *(undefined4 *)(param_1 + 0x298) = param_4;
  *(undefined4 *)(param_1 + 0x29c) = param_5;
  uVar1 = FUN_004bc440();
  FUN_004eb51c(param_1,uVar1);
  uVar1 = FUN_004bc464();
  FUN_004eb4e0(param_1,uVar1);
  uVar1 = FUN_004bc488();
  FUN_004eb420(param_1,uVar1);
  return;
}

