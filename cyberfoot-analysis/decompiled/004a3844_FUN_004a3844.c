// Address: 004a3844
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a3844(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_c;
  
  local_c = 0;
  if (param_1[0x21] < 1) {
    uVar2 = param_3 + 5;
    uVar3 = uVar2;
  }
  else {
    if ((param_3 != 0) && (*(int *)(*param_1 + 0x2c) == 2)) {
      FUN_004a3fdc(param_1);
    }
    FUN_004a27bc(param_1,param_1 + 0x2c6);
    FUN_004a27bc(param_1,param_1 + 0x2c9);
    local_c = FUN_004a3160(param_1);
    uVar2 = param_1[0x5aa] + 10U >> 3;
    uVar3 = param_1[0x5ab] + 10U >> 3;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
  }
  if ((uVar2 < param_3 + 4U) || (param_2 == 0)) {
    if ((param_1[0x22] == 4) || (uVar2 == uVar3)) {
      if (param_1[0x5af] < 0xe) {
        *(ushort *)(param_1 + 0x5ae) =
             *(ushort *)(param_1 + 0x5ae) | (short)param_4 + 2 << ((byte)param_1[0x5af] & 0x1f);
        param_1[0x5af] = param_1[0x5af] + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ae) =
             *(ushort *)(param_1 + 0x5ae) | (short)(param_4 + 2U) << ((byte)param_1[0x5af] & 0x1f);
        iVar1 = param_1[5];
        param_1[5] = param_1[5] + 1;
        *(char *)(param_1[2] + iVar1) = (char)param_1[0x5ae];
        iVar1 = param_1[5];
        param_1[5] = param_1[5] + 1;
        *(char *)(param_1[2] + iVar1) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        *(short *)(param_1 + 0x5ae) =
             (short)((int)(param_4 + 2U & 0xffff) >> (0x10U - (char)param_1[0x5af] & 0x1f));
        param_1[0x5af] = param_1[0x5af] + -0xd;
      }
      FUN_004a3b1c(param_1,&DAT_00666a08,&DAT_00666e88);
    }
    else {
      if (param_1[0x5af] < 0xe) {
        *(ushort *)(param_1 + 0x5ae) =
             *(ushort *)(param_1 + 0x5ae) | (short)param_4 + 4 << ((byte)param_1[0x5af] & 0x1f);
        param_1[0x5af] = param_1[0x5af] + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ae) =
             *(ushort *)(param_1 + 0x5ae) | (short)(param_4 + 4U) << ((byte)param_1[0x5af] & 0x1f);
        iVar1 = param_1[5];
        param_1[5] = param_1[5] + 1;
        *(char *)(param_1[2] + iVar1) = (char)param_1[0x5ae];
        iVar1 = param_1[5];
        param_1[5] = param_1[5] + 1;
        *(char *)(param_1[2] + iVar1) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        *(short *)(param_1 + 0x5ae) =
             (short)((int)(param_4 + 4U & 0xffff) >> (0x10U - (char)param_1[0x5af] & 0x1f));
        param_1[0x5af] = param_1[0x5af] + -0xd;
      }
      FUN_004a31c4(param_1,param_1[0x2c7] + 1,param_1[0x2ca] + 1,local_c + 1);
      FUN_004a3b1c(param_1,param_1 + 0x25,param_1 + 0x262);
    }
  }
  else {
    FUN_004a34bc(param_1,param_2,param_3,param_4);
  }
  FUN_004a23ec(param_1);
  if (param_4 != 0) {
    FUN_004a40b8(param_1);
  }
  return;
}

