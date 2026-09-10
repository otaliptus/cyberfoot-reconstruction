// Address: 0044caa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0044caa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint local_8;
  
  local_8 = CONCAT31((int3)((uint)param_3 >> 8),1);
  if (*(short *)(param_1 + 0x272) != 0) {
    (**(code **)(param_1 + 0x270))
              (*(undefined4 *)(param_1 + 0x274),param_1,param_2,&local_8,param_3);
  }
  return local_8 & 0xff;
}

