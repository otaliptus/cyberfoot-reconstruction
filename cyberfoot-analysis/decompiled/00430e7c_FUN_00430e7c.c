// Address: 00430e7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00430e7c(undefined4 param_1,undefined4 param_2,int param_3)

{
  short local_70 [7];
  undefined1 local_62 [86];
  
  FUN_0043051c(param_1);
  if (param_3 == 0) {
    FUN_004032a8(local_62,0x54,0);
    FUN_004307ec(param_1,0,0,0,0,local_62);
  }
  else {
    FUN_00420b00(param_2,local_70,0xe);
    if (local_70[0] != 0x4d42) {
      FUN_0042b880();
    }
    FUN_00430914(param_1,param_2,param_3 + -0xe,local_70);
  }
  return;
}

