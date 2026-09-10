// Address: 00495668
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00495668(int param_1,int param_2,short *param_3,int param_4,int *param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int local_58 [16];
  int *local_18;
  undefined1 local_11;
  int local_10;
  int *local_c;
  int local_8;
  
  local_10 = *(int *)(param_1 + 0x144) + 0x80;
  piVar1 = local_58;
  local_c = *(int **)(param_2 + 0x50);
  iVar3 = 8;
  do {
    if (((iVar3 != 6) && (iVar3 != 4)) && (iVar3 != 2)) {
      if (((param_3[8] == 0) && (param_3[0x18] == 0)) &&
         ((param_3[0x28] == 0 && (param_3[0x38] == 0)))) {
        iVar4 = (int)*param_3 * *local_c * 4;
        *piVar1 = iVar4;
        piVar1[8] = iVar4;
      }
      else {
        local_8 = (int)*param_3 * *local_c * 0x8000;
        iVar4 = (int)param_3[0x38] * local_c[0x38] * -0x1712 +
                (int)param_3[0x28] * local_c[0x28] * 0x1b37 +
                (int)param_3[0x18] * local_c[0x18] * -0x28ba + (int)param_3[8] * local_c[8] * 0x73fc
        ;
        *piVar1 = local_8 + iVar4 + 0x1000 >> 0xd;
        piVar1[8] = (local_8 - iVar4) + 0x1000 >> 0xd;
      }
    }
    param_3 = param_3 + 1;
    local_c = local_c + 1;
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (0 < iVar3);
  piVar1 = local_58;
  local_18 = param_5;
  iVar3 = 0;
  do {
    puVar2 = (undefined1 *)(*local_18 + param_4);
    if (((piVar1[1] == 0) && (piVar1[3] == 0)) && ((piVar1[5] == 0 && (piVar1[7] == 0)))) {
      local_11 = *(undefined1 *)(local_10 + (*piVar1 + 0x10 >> 5 & 0x3ffU));
      *puVar2 = local_11;
      puVar2[1] = local_11;
    }
    else {
      local_8 = *piVar1 * 0x8000;
      iVar4 = piVar1[7] * -0x1712 + piVar1[5] * 0x1b37 + piVar1[3] * -0x28ba + piVar1[1] * 0x73fc;
      *puVar2 = *(undefined1 *)(local_10 + (local_8 + iVar4 + 0x80000 >> 0x14 & 0x3ffU));
      puVar2[1] = *(undefined1 *)(local_10 + ((local_8 - iVar4) + 0x80000 >> 0x14 & 0x3ffU));
    }
    piVar1 = piVar1 + 8;
    iVar3 = iVar3 + 1;
    local_18 = local_18 + 1;
  } while (iVar3 < 2);
  return;
}

