// Address: 00421c64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00421c64(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int local_114;
  char local_110 [4];
  undefined1 local_10c [256];
  
  FUN_00404b80(local_10c,param_3,0xff);
  local_114 = FUN_00403d08(*param_2,local_10c);
  local_110[0] = local_114 == 0;
  if (*(short *)(param_1 + 0x3a) != 0) {
    (**(code **)(param_1 + 0x38))
              (*(undefined4 *)(param_1 + 0x3c),param_1,param_3,local_110,&local_114);
  }
  if (local_110[0] != '\0') {
    FUN_00421a70();
  }
  return local_114;
}

