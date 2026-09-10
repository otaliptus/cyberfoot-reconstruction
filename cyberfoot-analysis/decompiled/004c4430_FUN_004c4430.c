// Address: 004c4430
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c4430(byte param_1,undefined4 param_2,undefined4 param_3,byte *param_4,byte param_5,
                 byte param_6,byte param_7,byte param_8,byte *param_9)

{
  char cVar1;
  byte extraout_CH;
  int iVar2;
  uint3 uVar3;
  
  uVar3 = (uint3)(CONCAT22((short)((uint)param_3 >> 0x10),CONCAT11(param_5,param_6)) >> 8);
  if (param_8 < param_6) {
    iVar2 = CONCAT31(uVar3,param_6 - param_8);
    while (cVar1 = (char)iVar2, cVar1 != '\0') {
      uVar3 = (uint3)((uint)iVar2 >> 8);
      if (cVar1 == '\x01') {
        param_1 = *param_9;
        *param_4 = param_1 >> 4;
        param_6 = param_8;
        iVar2 = (uint)uVar3 << 8;
        goto LAB_004c447a;
      }
      param_1 = 0;
      *param_4 = 0;
      param_4 = param_4 + 1;
      iVar2 = CONCAT31(uVar3,cVar1 + -2);
    }
  }
  else {
    if (param_6 == param_8) {
      FUN_004c43e8(param_1,param_2,CONCAT31(uVar3,param_6 + param_7),param_2,param_3);
      if (extraout_CH == param_7) {
        return;
      }
      FUN_004c4420();
      return;
    }
    for (cVar1 = param_8 - param_6; iVar2 = (uint)uVar3 << 8, cVar1 != '\0'; cVar1 = cVar1 + -2) {
      param_1 = *param_9;
      if (param_1 != 0) {
        *param_4 = param_1;
        param_4 = param_4 + 1;
      }
      if (cVar1 == '\x01') {
LAB_004c447a:
        if (param_7 < (byte)((uint)iVar2 >> 8)) {
          iVar2 = (uint)CONCAT21((short)((uint)iVar2 >> 0x10),param_7) << 8;
        }
        FUN_004c43f8(param_1,param_1,
                     (uint)CONCAT21((short)((uint)iVar2 >> 0x10),(char)((uint)iVar2 >> 8) + param_6)
                     << 8);
        if (param_7 < param_5) {
          FUN_004c4420();
        }
        return;
      }
      param_9 = param_9 + 1;
    }
  }
  if (param_5 < param_7) {
    param_7 = param_5;
  }
  FUN_004c43e8(param_1,param_2,
               CONCAT31(CONCAT21((short)((uint)iVar2 >> 0x10),param_5),param_8 + param_7),param_2,
               param_3);
  if (param_6 <= param_8) {
    return;
  }
  FUN_004c4420();
  return;
}

