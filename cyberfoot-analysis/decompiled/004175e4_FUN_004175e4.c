// Address: 004175e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004175e4(short *param_1,short *param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  bool bVar3;
  
  sVar1 = *param_1;
  if (sVar1 == 0x400c) {
    uVar2 = FUN_004175e4(*(undefined4 *)(param_1 + 4));
  }
  else {
    *param_2 = sVar1;
    bVar3 = (*param_2 & 0x2000) != 0;
    uVar2 = CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),sVar1) >> 8),bVar3);
    if (bVar3) {
      if ((*param_2 & 0x4000) == 0) {
        *param_3 = *(undefined4 *)(param_1 + 4);
      }
      else {
        *param_3 = **(undefined4 **)(param_1 + 4);
      }
    }
    else {
      *param_3 = 0;
    }
  }
  return uVar2;
}

