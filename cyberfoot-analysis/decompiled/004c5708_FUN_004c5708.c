// Address: 004c5708
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004c5708(byte *param_1,longlong *param_2)

{
  undefined2 extraout_var;
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 in_FPUStatusWord;
  float10 fVar4;
  undefined4 local_48;
  undefined2 uStack_44;
  
  uVar3 = (uint)*param_1;
  if (uVar3 == 0) {
    return (uint)param_1 & 0xffffff00;
  }
  uVar2 = uVar3 + 1 >> 1;
  do {
    *(ushort *)((int)&local_48 + uVar2 * 2 + 2) =
         CONCAT11(param_1[uVar2 + 1],param_1[uVar2 + 1] >> 4) & 0xfff;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  uVar2 = 0;
  do {
    if (*(byte *)((int)&uStack_44 + uVar2) != 0) {
      fVar4 = (float10)*(byte *)((int)&uStack_44 + uVar2);
      while( true ) {
        local_48 = 0;
        if (uVar2 + 1 == uVar3) break;
        fVar4 = fVar4 * (float10)DAT_00669604 + (float10)*(byte *)((int)&uStack_44 + uVar2 + 1);
        uVar2 = uVar2 + 1;
      }
      if ((char)param_1[1] < '\0') {
        fVar4 = -fVar4;
      }
      thunk_FUN_004035d8(-((param_1[1] & 0x3f) - 4));
      uVar1 = extraout_var;
      goto LAB_004c577f;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != uVar3);
  fVar4 = (float10)0;
  uVar1 = 0;
LAB_004c577f:
  *param_2 = (longlong)ROUND(fVar4);
  return CONCAT31((int3)(CONCAT22(uVar1,in_FPUStatusWord) >> 8),~(byte)in_FPUStatusWord) &
         0xffffff01;
}

