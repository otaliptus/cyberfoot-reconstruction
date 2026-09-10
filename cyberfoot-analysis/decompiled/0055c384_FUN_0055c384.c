// Address: 0055c384
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055c384(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  float10 in_ST0;
  float afStack_1820 [1507];
  undefined1 local_84 [16];
  float10 local_74;
  undefined1 local_68 [12];
  float local_5c;
  undefined1 local_58 [12];
  float local_4c;
  int local_48;
  undefined4 local_44;
  float afStack_40 [5];
  float local_2c;
  float local_28;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  bVar8 = 0;
  iVar1 = param_1[0xc2];
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x44))(param_1,&local_44);
    FUN_00559204(iVar1,&local_44,afStack_40 + 3);
    local_c = 0.0;
    local_14 = 0.0;
    if (*(char *)(iVar1 + 0xd4) == '\0') {
      local_48 = FUN_0041edb0(*(undefined4 *)(iVar1 + 0xbc));
      local_c = (double)*(int *)(iVar1 + 0xdc) + (double)local_48 * *(double *)(iVar1 + 0x38);
      local_14 = *(double *)(iVar1 + 0x40);
    }
    else if (*(char *)(iVar1 + 0xd4) == '\x01') {
      local_c = (double)*(int *)(iVar1 + 0xdc) + *(double *)(iVar1 + 0x38);
      local_48 = FUN_0041edb0(*(undefined4 *)(iVar1 + 0xbc));
      local_14 = (double)local_48 * *(double *)(iVar1 + 0x40);
    }
    if ((double)local_2c < local_c) {
      local_48 = *(int *)(iVar1 + 0x98) * 2;
      in_ST0 = (float10)local_48 + (float10)local_c;
      uVar2 = FUN_00402c38();
      FUN_004659c4(param_1,uVar2);
    }
    if ((double)local_28 < local_14) {
      (**(code **)(*param_1 + 0x44))(param_1,local_58);
      FUN_00559300(iVar1,local_58,&local_44);
      (**(code **)(*param_1 + 0x44))(param_1,local_68);
      FUN_005593f8(iVar1,local_68,local_58);
      local_74 = (float10)local_4c + (float10)afStack_40[2];
      (**(code **)(*param_1 + 0x44))(param_1,local_84);
      FUN_005594fc(iVar1,local_84,local_68);
      local_48 = *(int *)(iVar1 + 0x98) * 2;
      in_ST0 = (float10)*(int *)(iVar1 + 0xdc) +
               (float10)local_48 + local_74 + (float10)local_5c + (float10)local_14;
      uVar2 = FUN_00402c38();
      FUN_004659e8(param_1,uVar2);
    }
    local_1c = *(double *)(iVar1 + 0x38) - (double)*(int *)(iVar1 + 0xdc);
    local_24 = *(double *)(iVar1 + 0x40) - (double)*(int *)(iVar1 + 0xdc);
    (**(code **)(*param_1 + 0x44))(param_1,&local_44);
    FUN_00559204(iVar1,&local_44,afStack_40 + 3);
    if (*(char *)(iVar1 + 0xd4) == '\0') {
      if (local_c < (double)local_2c) {
        FUN_00432434();
        afStack_40[3] = (float)(in_ST0 + (float10)afStack_40[3]);
      }
      iVar3 = FUN_0041edb0(*(undefined4 *)(iVar1 + 0xbc));
      if (-1 < iVar3 + -1) {
        iVar5 = 0;
        do {
          local_48 = iVar5;
          FUN_004aeba4(&local_44,
                       (int)((ulonglong)((longlong)(iVar5 + 1) * (longlong)*(int *)(iVar1 + 0xdc))
                            >> 0x20));
          iVar4 = FUN_0055cec0(*(undefined4 *)(iVar1 + 0xbc),iVar5);
          pfVar7 = (float *)(iVar4 + 0x12 + (uint)bVar8 * -8);
          *(undefined4 *)(iVar4 + 0xe) = local_44;
          pfVar6 = pfVar7 + (uint)bVar8 * -2 + 1;
          *pfVar7 = afStack_40[(uint)bVar8 * -2];
          *pfVar6 = afStack_40[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          pfVar6[(uint)bVar8 * -2 + 1] =
               (afStack_40 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else if ((*(char *)(iVar1 + 0xd4) == '\x01') &&
            (iVar3 = FUN_0041edb0(*(undefined4 *)(iVar1 + 0xbc)), -1 < iVar3 + -1)) {
      iVar5 = 0;
      do {
        local_48 = iVar5;
        FUN_004aeba4(&local_44,
                     (int)((ulonglong)((longlong)(iVar5 + 1) * (longlong)*(int *)(iVar1 + 0xdc)) >>
                          0x20));
        iVar4 = FUN_0055cec0(*(undefined4 *)(iVar1 + 0xbc),iVar5);
        pfVar7 = (float *)(iVar4 + 0x12 + (uint)bVar8 * -8);
        *(undefined4 *)(iVar4 + 0xe) = local_44;
        pfVar6 = pfVar7 + (uint)bVar8 * -2 + 1;
        *pfVar7 = afStack_40[(uint)bVar8 * -2];
        *pfVar6 = afStack_40[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        pfVar6[(uint)bVar8 * -2 + 1] =
             (afStack_40 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

