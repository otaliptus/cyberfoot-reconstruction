// Address: 00465e24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x00465f02) */

void FUN_00465e24(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_2 != param_3) {
    bVar1 = DAT_00465fc8;
    if ((*(byte *)(param_1 + 7) & 1) != 0) {
      bVar1 = *(byte *)(param_1 + 0x26);
    }
    if ((bVar1 & 1) == 0) {
      iVar2 = param_1[0x10];
    }
    else {
      iVar2 = MulDiv(param_1[0x10],param_2,param_3);
    }
    if ((bVar1 & 2) == 0) {
      local_1c = param_1[0x11];
    }
    else {
      local_1c = MulDiv(param_1[0x11],param_2,param_3);
    }
    if (((bVar1 & 4) == 0) || ((*(byte *)((int)param_1 + 0x51) & 1) != 0)) {
      local_18 = param_1[0x12];
    }
    else if ((bVar1 & 1) == 0) {
      local_18 = MulDiv(param_1[0x12],param_2,param_3);
    }
    else {
      local_18 = MulDiv(param_1[0x10] + param_1[0x12],param_2,param_3);
      local_18 = local_18 - iVar2;
    }
    if (((bVar1 & 8) == 0) || ((*(byte *)((int)param_1 + 0x51) & 2) != 0)) {
      local_14 = param_1[0x13];
    }
    else {
      local_14 = MulDiv(param_1[0x11] + param_1[0x13],param_2,param_3);
      local_14 = local_14 - local_1c;
    }
    (**(code **)(*param_1 + 0x84))(param_1,iVar2,local_1c,local_14,local_18);
    if (DAT_00465fd0 != (bVar1 & DAT_00465fcc)) {
      iVar2 = MulDiv(param_1[0x24],param_2,local_14);
      param_1[0x24] = iVar2;
    }
    if (DAT_00465fd0 != (bVar1 & DAT_00465fd4)) {
      iVar2 = MulDiv(param_1[0x25],param_2,local_14);
      param_1[0x25] = iVar2;
    }
    if ((*(char *)((int)param_1 + 0x59) == '\0') && ((bVar1 & 0x10) != 0)) {
      iVar2 = param_1[0x1a];
      iVar3 = FUN_0042a624(iVar2);
      iVar3 = MulDiv(iVar3,param_2,local_14);
      FUN_0042a640(iVar2,iVar3);
    }
  }
  *(byte *)(param_1 + 0x26) = DAT_00465fd0;
  return;
}

