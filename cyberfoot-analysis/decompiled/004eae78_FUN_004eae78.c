// Address: 004eae78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eae78(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4)

{
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_14 = *param_3;
  uStack_10 = param_3[1];
  uStack_c = param_3[2];
  uStack_8 = param_3[3];
  if (*(short *)(param_1 + 0x29a) != 0) {
    (**(code **)(param_1 + 0x298))
              (*(undefined4 *)(param_1 + 0x29c),param_1,param_2,
               CONCAT31((int3)((uint)&local_14 >> 8),param_4),&local_14);
  }
  return;
}

