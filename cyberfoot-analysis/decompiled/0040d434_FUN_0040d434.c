// Address: 0040d434
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040d434(int param_1,int *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 uVar6;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 uVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar10;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  byte local_1c;
  byte local_1b;
  undefined1 local_1a;
  byte local_19;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  char local_e;
  undefined1 local_d;
  undefined4 local_c;
  int local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  puStack_40 = &LAB_0040d74f;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  uVar9 = 0;
  local_16 = 0;
  local_18 = 0;
  local_1c = 0;
  local_d = 0;
  local_c = param_3;
  local_e = FUN_0040d2f0(DAT_0066c690);
  local_8 = 0;
  if ((DAT_0066c690 == (char *)0x0) || (*DAT_0066c690 != 'g')) {
    iVar4 = FUN_0040f024(&DAT_0040d768,DAT_0066c690);
    if (0 < iVar4) {
      local_8 = DAT_0066c770;
    }
  }
  else {
    FUN_0040d33c(param_1,param_2);
    FUN_00404e04(param_1,1,*param_2 + -1,&local_24);
    FUN_004099c0(local_24,&local_20);
    local_8 = FUN_0040d384(local_20);
  }
  cVar2 = FUN_0040d198(param_1,param_2,&local_10,&local_19);
  if (((cVar2 != '\0') && (cVar2 = FUN_0040d2b8(param_1,param_2,DAT_0066c68d), cVar2 != '\0')) &&
     (cVar2 = FUN_0040d198(param_1,param_2,&local_12,&local_1a), cVar2 != '\0')) {
    cVar2 = FUN_0040d2b8(param_1,param_2,DAT_0066c68d);
    if (cVar2 == '\0') {
      uVar9 = FUN_0040c534();
      if (local_e == '\x01') {
        local_18 = local_10;
        local_16 = local_12;
      }
      else {
        local_16 = local_10;
        local_18 = local_12;
      }
    }
    else {
      cVar2 = FUN_0040d198(param_1,param_2,&local_14,&local_1b);
      if (cVar2 == '\0') goto LAB_0040d734;
      if (local_e == '\0') {
        uVar9 = (uint)local_14;
        local_1c = local_1b;
        local_16 = local_10;
        local_18 = local_12;
      }
      else if (local_e == '\x01') {
        uVar9 = (uint)local_14;
        local_1c = local_1b;
        local_16 = local_12;
        local_18 = local_10;
      }
      else if (local_e == '\x02') {
        uVar9 = (uint)local_10;
        local_1c = local_19;
        local_16 = local_12;
        local_18 = local_14;
      }
      if (local_8 < 1) {
        if (local_1c < 3) {
          uVar3 = FUN_0040c534();
          iVar4 = (uVar3 & 0xffff) - (uint)DAT_00662100;
          uVar8 = (short)uVar9 + (short)(iVar4 / 100) * 100;
          uVar9 = (uint)uVar8;
          if ((DAT_00662100 != 0) && ((int)(uint)uVar8 < iVar4)) {
            uVar9 = (uint)(ushort)(uVar8 + 100);
          }
        }
      }
      else {
        uVar9 = FUN_0040d3d8(uVar9);
      }
    }
    FUN_0040d2b8(param_1,param_2,DAT_0066c68d);
    FUN_0040d174(param_1,param_2);
    uVar6 = extraout_var;
    uVar7 = extraout_var_05;
    if ((DAT_0066c750 != '\0') &&
       (iVar4 = FUN_00404ee8(&DAT_0040d774,DAT_0066c690), uVar6 = extraout_var_00,
       uVar7 = extraout_var_06, iVar4 != 0)) {
      if ((byte)(*DAT_0066c6a4 - 0x30U) < 10) {
        FUN_0040d33c(param_1,param_2);
        uVar6 = extraout_var_01;
        uVar7 = extraout_var_07;
      }
      else {
        do {
          while ((iVar4 = FUN_00404ba4(param_1), *param_2 <= iVar4 &&
                 (*(char *)(param_1 + -1 + *param_2) != ' '))) {
            *param_2 = *param_2 + 1;
          }
          FUN_0040d174(param_1,param_2);
          iVar4 = FUN_00404ba4(param_1);
          uVar6 = extraout_var_02;
          uVar7 = extraout_var_08;
          if (iVar4 < *param_2) break;
          puVar10 = &local_28;
          uVar5 = FUN_00404ba4(DAT_0066c69c);
          FUN_00404e04(param_1,*param_2,uVar5,puVar10);
          iVar4 = FUN_00409790(DAT_0066c69c,local_28);
          uVar6 = extraout_var_03;
          uVar7 = extraout_var_09;
          if (iVar4 == 0) break;
          puVar10 = &local_2c;
          uVar5 = FUN_00404ba4(DAT_0066c6a0);
          FUN_00404e04(param_1,*param_2,uVar5,puVar10);
          iVar4 = FUN_00409790(DAT_0066c6a0,local_2c);
          uVar6 = extraout_var_04;
          uVar7 = extraout_var_10;
        } while (iVar4 != 0);
      }
    }
    local_d = FUN_0040c144(uVar9,CONCAT22(uVar7,local_16),CONCAT22(uVar6,local_18),local_c);
  }
LAB_0040d734:
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0040d756;
  puStack_40 = (undefined1 *)0x40d74e;
  FUN_004048f8(&local_2c,4,puVar1);
  return;
}

