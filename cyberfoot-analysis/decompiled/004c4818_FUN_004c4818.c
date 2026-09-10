// Address: 004c4818
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c4818(undefined4 param_1,uint param_2,undefined4 param_3,ushort param_4,byte *param_5,
                 byte *param_6,byte *param_7)

{
  bool bVar1;
  byte extraout_AH;
  ushort uVar2;
  short extraout_CX;
  short extraout_CX_00;
  byte extraout_DL;
  byte bVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  
  bVar1 = false;
  uVar4 = param_2 & 0xffff0000;
  uVar2 = param_4;
  do {
    if (uVar2 < 3) {
LAB_004c4861:
      do {
        if (param_4 == 0) {
          return;
        }
        if (bVar1) {
          bVar1 = false;
        }
        else {
          uVar4 = CONCAT31((int3)(uVar4 >> 8),*param_7) & 0xffffff0f;
          FUN_004c43d8(*param_6 & 0xf,CONCAT31((int3)(uVar4 >> 8),(char)uVar4 - (*param_6 & 0xf)),
                       param_4,param_2,param_3);
          param_4 = extraout_CX - 1;
          if (param_4 == 0) {
            *param_5 = extraout_DL;
            return;
          }
        }
        FUN_004c43d8(*param_6 >> 4,(*param_7 >> 4) - (*param_6 >> 4),param_4,param_2,param_3);
        bVar3 = (char)extraout_EDX << 4 | extraout_AH;
        uVar4 = CONCAT31((int3)((uint)extraout_EDX >> 8),bVar3);
        *param_5 = bVar3;
        param_5 = param_5 + -1;
        param_6 = param_6 + -1;
        param_7 = param_7 + -1;
        param_4 = extraout_CX_00 - 1;
      } while( true );
    }
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    if (uVar2 == 3) {
      bVar1 = true;
      goto LAB_004c4861;
    }
    uVar2 = uVar2 - 2;
  } while( true );
}

