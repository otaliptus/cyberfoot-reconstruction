// Address: 004e95d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e95d4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_00467b40(param_1,param_2,param_3,param_4,param_5);
  *(byte *)(param_1[0x91] + 0x40) = *(byte *)(param_1[0x91] + 0x40) & 0xfd;
  *(byte *)(param_1[0x91] + 0x51) = *(byte *)(param_1[0x91] + 0x51) & 0xfd;
  *(byte *)(param_1[0x91] + 0x5c) = *(byte *)(param_1[0x91] + 0x5c) & 0xfd;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined1 *)((int)param_1 + 0x249) = 0;
  FUN_0043b234(param_1[0x8e],0);
  FUN_0043b234(param_1[0x90],0);
  (**(code **)(*param_1 + 0x7c))();
  return;
}

