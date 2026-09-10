// Address: 004f1028
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f1028(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 *param_5)

{
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_14 = *param_5;
  uStack_10 = param_5[1];
  uStack_c = param_5[2];
  uStack_8 = param_5[3];
  if (*(short *)(param_1 + 0x2c2) != 0) {
    (**(code **)(param_1 + 0x2c0))
              (*(undefined4 *)(param_1 + 0x2c4),param_1,param_3,
               CONCAT31((int3)((uint)&local_14 >> 8),param_4),&local_14);
  }
  return;
}

