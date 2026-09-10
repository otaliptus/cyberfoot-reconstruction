// Address: 004529c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1
FUN_004529c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5
            )

{
  undefined1 local_d;
  undefined4 local_c;
  undefined4 local_8;
  
  local_d = 1;
  local_c = param_3;
  local_8 = param_2;
  if (((char)param_4 == '\0') && (*(short *)(param_1 + 0x302) != 0)) {
    (**(code **)(param_1 + 0x300))
              (*(undefined4 *)(param_1 + 0x304),param_1,param_2,&local_d,param_5,param_3);
  }
  if (*(short *)(param_1 + 0x2ba) != 0) {
    (**(code **)(param_1 + 0x2b8))
              (*(undefined4 *)(param_1 + 700),param_1,local_8,&local_d,param_4,param_5,local_c);
  }
  return local_d;
}

