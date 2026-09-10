// Address: 0040c23c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0040c23c(short *param_1,ushort *param_2,short *param_3,undefined2 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  short sVar7;
  undefined1 local_1c [4];
  int local_18;
  short local_14;
  ushort local_12;
  short *local_10;
  ushort *local_c;
  short *local_8;
  
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040bfb8(local_1c,param_2,param_3,param_5,param_6);
  if (local_18 < 1) {
    *local_8 = 0;
    *local_c = 0;
    *local_10 = 0;
    *param_4 = 0;
    uVar5 = 0;
  }
  else {
    iVar6 = local_18 % 7 + 1;
    *param_4 = (short)iVar6;
    sVar7 = 1;
    for (local_18 = local_18 + -1; 0x23ab0 < local_18; local_18 = local_18 + -0x23ab1) {
      sVar7 = sVar7 + 400;
    }
    FUN_00409400(local_18,CONCAT22((short)((uint)iVar6 >> 0x10),0x8eac),&local_14,&local_12);
    if (local_14 == 4) {
      local_14 = 3;
      local_12 = local_12 + 0x8eac;
    }
    sVar1 = local_14 * 100;
    FUN_00409400(local_12,CONCAT22(extraout_var,0x5b5),&local_14,&local_12);
    sVar2 = local_14 * 4;
    FUN_00409400(local_12,CONCAT22(extraout_var_00,0x16d),&local_14,&local_12);
    if (local_14 == 4) {
      local_14 = 3;
      local_12 = local_12 + 0x16d;
    }
    sVar7 = sVar7 + sVar1 + sVar2 + local_14;
    uVar5 = FUN_0040c108(sVar7);
    uVar3 = 1;
    for (; uVar4 = (uint)uVar3,
        *(ushort *)(&DAT_00662102 + uVar4 * 2 + (uVar5 & 0xff) * 0x18) <= local_12;
        local_12 = local_12 - *(ushort *)(&DAT_00662102 + uVar4 * 2 + (uVar5 & 0xff) * 0x18)) {
      uVar3 = uVar3 + 1;
    }
    *local_8 = sVar7;
    *local_c = uVar3;
    *local_10 = local_12 + 1;
  }
  return uVar5;
}

