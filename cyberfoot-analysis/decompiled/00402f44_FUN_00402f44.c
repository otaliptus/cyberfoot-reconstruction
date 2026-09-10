// Address: 00402f44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00402f44(undefined *param_1,code *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  
  if ((short)(*(short *)(param_1 + 4) + 0x284f) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CONCAT22((short)((uint)param_3 >> 0x10),*(short *)(param_1 + 4) + 0x284f) + -1;
    uVar1 = (ushort)iVar2;
    if (uVar1 < 2) {
      iVar2 = (*param_2)(param_1,param_2,CONCAT22((short)((uint)iVar2 >> 0x10),uVar1 - 2));
    }
    else if ((param_1 == &DAT_0066c21c) || (param_1 == &DAT_0066c3e8)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0x67;
    }
  }
  if (iVar2 != 0) {
    FUN_00402984(iVar2);
  }
  return iVar2;
}

