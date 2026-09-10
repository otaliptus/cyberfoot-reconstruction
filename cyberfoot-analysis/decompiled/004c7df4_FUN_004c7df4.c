// Address: 004c7df4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004c7df4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint local_c;
  uint local_8;
  
  iVar2 = param_1;
  if ((((param_3 < 100) && (iVar2 = param_2, 0 < param_3)) && (param_1 != 0x1fffffff)) &&
     (iVar2 = param_1, param_2 != 0x1fffffff)) {
    uVar1 = FUN_00429e64(param_1);
    FUN_004080c0(uVar1);
    FUN_004080c4(uVar1);
    FUN_004080c8(uVar1);
    uVar1 = FUN_00429e64(param_2);
    FUN_004080c0(uVar1);
    FUN_004080c4(uVar1);
    FUN_004080c8(uVar1);
    local_8 = FUN_00402c38();
    local_c = FUN_00402c38();
    iVar2 = FUN_00402c38();
    if (0xff < (int)local_8) {
      local_8 = 0xff;
    }
    if (0xff < (int)local_c) {
      local_c = 0xff;
    }
    if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    iVar2 = FUN_004080a4(local_8 & 0xff,local_c & 0xff,iVar2);
  }
  return iVar2;
}

