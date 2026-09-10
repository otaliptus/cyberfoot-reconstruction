// Address: 00494a3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00494a3c(int param_1,int param_2,short *param_3,int param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 *puVar7;
  int iVar8;
  float local_154 [16];
  float local_114 [8];
  float local_f4 [8];
  float local_d4 [8];
  float local_b4 [8];
  float local_94 [8];
  float local_74 [8];
  int *local_54;
  float local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar8 = 8;
  pfVar6 = local_154;
  local_4c = *(int *)(param_1 + 0x144) + 0x80;
  pfVar5 = *(float **)(param_2 + 0x50);
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      local_50 = (float)*param_3 * *pfVar5;
      *pfVar6 = (float)*param_3 * *pfVar5;
      pfVar6[8] = local_50;
      pfVar6[0x10] = local_50;
      pfVar6[0x18] = local_50;
      pfVar6[0x20] = local_50;
      pfVar6[0x28] = local_50;
      pfVar6[0x30] = local_50;
      pfVar6[0x38] = local_50;
    }
    else {
      fVar1 = (float)*param_3 * *pfVar5 + (float)param_3[0x20] * pfVar5[0x20];
      fVar2 = (float)*param_3 * *pfVar5 - (float)param_3[0x20] * pfVar5[0x20];
      local_34 = (float)param_3[0x10] * pfVar5[0x10] + (float)param_3[0x30] * pfVar5[0x30];
      fVar3 = ((float)param_3[0x10] * pfVar5[0x10] - (float)param_3[0x30] * pfVar5[0x30]) *
              _DAT_00494e70 - local_34;
      local_8 = fVar1 + local_34;
      local_14 = fVar1 - local_34;
      local_c = fVar2 + fVar3;
      local_10 = fVar2 - fVar3;
      local_48 = (float)param_3[0x28] * pfVar5[0x28] + (float)param_3[0x18] * pfVar5[0x18];
      local_3c = (float)param_3[0x28] * pfVar5[0x28] - (float)param_3[0x18] * pfVar5[0x18];
      local_40 = (float)param_3[8] * pfVar5[8] + (float)param_3[0x38] * pfVar5[0x38];
      local_44 = (float)param_3[8] * pfVar5[8] - (float)param_3[0x38] * pfVar5[0x38];
      local_24 = local_40 + local_48;
      local_2c = (local_40 - local_48) * _DAT_00494e70;
      local_38 = (local_3c + local_44) * _DAT_00494e74;
      local_28 = _DAT_00494e78 * local_44 - local_38;
      local_30 = _DAT_00494e7c * local_3c + local_38;
      local_20 = local_30 - local_24;
      local_1c = local_2c - local_20;
      local_18 = local_28 + local_1c;
      *pfVar6 = local_8 + local_24;
      pfVar6[0x38] = local_8 - local_24;
      pfVar6[8] = local_c + local_20;
      pfVar6[0x30] = local_c - local_20;
      pfVar6[0x10] = local_10 + local_1c;
      pfVar6[0x28] = local_10 - local_1c;
      pfVar6[0x20] = local_14 + local_18;
      pfVar6[0x18] = local_14 - local_18;
    }
    pfVar6 = pfVar6 + 1;
    pfVar5 = pfVar5 + 1;
    param_3 = param_3 + 1;
    iVar8 = iVar8 + -1;
  } while (0 < iVar8);
  pfVar6 = local_154;
  iVar8 = 0;
  local_54 = param_5;
  do {
    local_28 = *pfVar6 + pfVar6[4];
    puVar7 = (undefined1 *)(*local_54 + param_4);
    local_2c = *pfVar6 - pfVar6[4];
    local_34 = pfVar6[2] + pfVar6[6];
    local_30 = (pfVar6[2] - pfVar6[6]) * _DAT_00494e70 - local_34;
    local_8 = local_28 + local_34;
    local_14 = local_28 - local_34;
    local_c = local_2c + local_30;
    local_10 = local_2c - local_30;
    local_48 = pfVar6[5] + pfVar6[3];
    local_3c = pfVar6[5] - pfVar6[3];
    local_40 = pfVar6[1] + pfVar6[7];
    local_44 = pfVar6[1] - pfVar6[7];
    local_24 = local_40 + local_48;
    local_2c = (local_40 - local_48) * _DAT_00494e70;
    local_38 = (local_3c + local_44) * _DAT_00494e74;
    local_28 = _DAT_00494e78 * local_44 - local_38;
    local_30 = _DAT_00494e7c * local_3c + local_38;
    local_20 = local_30 - local_24;
    local_1c = local_2c - local_20;
    local_18 = local_28 + local_1c;
    iVar4 = FUN_0048ab60();
    *puVar7 = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0048ab60();
    puVar7[7] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0048ab60();
    puVar7[1] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0048ab60();
    puVar7[6] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0048ab60();
    puVar7[2] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0048ab60();
    puVar7[5] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0048ab60();
    puVar7[4] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0048ab60();
    pfVar6 = pfVar6 + 8;
    iVar8 = iVar8 + 1;
    puVar7[3] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    local_54 = local_54 + 1;
  } while (iVar8 < 8);
  return;
}

