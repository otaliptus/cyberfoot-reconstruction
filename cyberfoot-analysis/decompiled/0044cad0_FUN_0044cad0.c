// Address: 0044cad0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0044cad0(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0x26a) != 0) {
    (**(code **)(param_1 + 0x268))
              (*(undefined4 *)(param_1 + 0x26c),param_1,param_2,&local_8,param_3);
  }
  return local_8 & 0xff;
}

