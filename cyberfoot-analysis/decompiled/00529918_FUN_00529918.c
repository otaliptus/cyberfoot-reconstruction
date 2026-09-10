// Address: 00529918
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00529918(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined1 local_34 [16];
  undefined1 local_24 [8];
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_14 = *param_3;
  uStack_10 = param_3[1];
  uStack_c = param_3[2];
  uStack_8 = param_3[3];
  FUN_00528c98(param_1,&local_14,param_4,local_24,param_5,param_6,param_7,param_8,param_9,param_10);
  FUN_005279a4(*(undefined4 *)(param_1 + 0x10),param_2,local_24,local_34,0xff,0xff,0xff,0xff,0xff);
  if ((char)param_4 == '\0') {
    if (_DAT_005299c8 < local_1c) {
      FUN_005299cc(param_1,param_2,local_24,param_4);
    }
  }
  else if (((char)param_4 == '\x01') && (_DAT_005299c8 < local_18)) {
    FUN_005299cc(param_1,param_2,local_24,param_4);
  }
  return;
}

