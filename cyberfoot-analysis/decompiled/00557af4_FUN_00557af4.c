// Address: 00557af4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557af4(float *param_1,float *param_2,int param_3,undefined1 param_4,int param_5,
                 int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  fVar1 = *(float *)(param_3 + 8);
  fVar2 = *(float *)(param_3 + 0xc);
  fVar3 = (float)param_6;
  fVar4 = (float)param_5;
  switch(param_4) {
  case 0:
    *param_1 = 0.0;
    *param_2 = 0.0;
    break;
  case 1:
    *param_1 = (fVar1 - fVar3) / _DAT_00557c54;
    *param_2 = 0.0;
    break;
  case 2:
    *param_1 = fVar1 - fVar3;
    *param_2 = 0.0;
    break;
  case 3:
    *param_1 = 0.0;
    *param_2 = (fVar2 - fVar4) / _DAT_00557c54;
    break;
  case 4:
    *param_1 = (fVar1 - fVar3) / _DAT_00557c54;
    *param_2 = (fVar2 - fVar4) / _DAT_00557c54;
    break;
  case 5:
    *param_1 = fVar1 - fVar3;
    *param_2 = (fVar2 - fVar4) / _DAT_00557c54;
    break;
  case 6:
    *param_1 = 0.0;
    *param_2 = fVar2 - fVar4;
    break;
  case 7:
    *param_1 = (fVar1 - fVar3) / _DAT_00557c54;
    *param_2 = fVar2 - fVar4;
    break;
  case 8:
    *param_1 = fVar1 - fVar3;
    *param_2 = fVar2 - fVar4;
  }
  uVar5 = FUN_00402c38();
  *param_1 = (float)CONCAT44(extraout_EDX,uVar5) + *param_1;
  uVar5 = FUN_00402c38();
  *param_2 = (float)CONCAT44(extraout_EDX_00,uVar5) + *param_2;
  return;
}

