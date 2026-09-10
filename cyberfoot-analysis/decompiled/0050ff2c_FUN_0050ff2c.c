// Address: 0050ff2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050ff2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 *param_6)

{
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_14 = *param_6;
  uStack_10 = param_6[1];
  uStack_c = param_6[2];
  uStack_8 = param_6[3];
  if (*(short *)(param_1 + 0x3c2) != 0) {
    (**(code **)(param_1 + 0x3c0))
              (*(undefined4 *)(param_1 + 0x3c4),param_1,param_2,param_4,
               CONCAT31((int3)((uint)&local_14 >> 8),param_5),&local_14,param_3);
  }
  return;
}

