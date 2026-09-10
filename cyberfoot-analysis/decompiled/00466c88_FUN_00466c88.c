// Address: 00466c88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_00466c88(int param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 local_17;
  undefined4 uStack_13;
  undefined1 local_f [3];
  
  local_17 = *param_3;
  uStack_13 = param_3[1];
  local_f[0] = 0;
  if (*(short *)(param_1 + 0x14a) != 0) {
    (**(code **)(param_1 + 0x148))
              (*(undefined4 *)(param_1 + 0x14c),param_1,param_2,local_f,&local_17);
  }
  return local_f[0];
}

