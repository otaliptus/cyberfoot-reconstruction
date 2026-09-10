// Address: 004eb184
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eb184(int param_1,int param_2,int param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined2 extraout_var;
  uint uVar4;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  int iVar5;
  undefined2 local_28;
  uint local_18;
  uint local_14;
  
  iVar5 = param_3 * 7 + param_2;
  FUN_004bc4dc(*(undefined2 *)(param_1 + 0x2a8),*(undefined2 *)(param_1 + 0x27a));
  iVar3 = FUN_004ebf64(param_1);
  if (iVar5 < iVar3 + -1) {
    local_14 = (uint)*(ushort *)(param_1 + 0x2a8);
    local_18 = (uint)*(ushort *)(param_1 + 0x27a);
    FUN_004eb4e8(param_1,&local_14,&local_18);
    FUN_004bc4f4(CONCAT22(extraout_var,(undefined2)local_14),
                 CONCAT22(extraout_var_03,(undefined2)local_18));
    iVar3 = FUN_004ebf64(param_1);
    sVar2 = FUN_004bc3f4(local_14 & 0xffff,CONCAT22(extraout_var_04,(undefined2)local_18));
    iVar3 = iVar3 - (param_2 + 1);
    FUN_0040c20c(local_14 & 0xffff,CONCAT22((short)((uint)iVar3 >> 0x10),(undefined2)local_18),
                 sVar2 - (short)iVar3);
  }
  else {
    uVar4 = FUN_004bc3f4(CONCAT22((short)((uint)(iVar3 + -1) >> 0x10),
                                  *(undefined2 *)(param_1 + 0x2a8)),
                         CONCAT22(extraout_var_02,*(undefined2 *)(param_1 + 0x27a)));
    if ((int)((uVar4 & 0xffff) + iVar3) < iVar5 + 2) {
      local_14 = (uint)*(ushort *)(param_1 + 0x2a8);
      local_18 = (uint)*(ushort *)(param_1 + 0x27a);
      FUN_004eb4e8(param_1,&local_14,&local_18);
      uVar4 = FUN_004bc3f4(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 0x2a8)),
                           CONCAT22(extraout_var_05,*(undefined2 *)(param_1 + 0x27a)));
      iVar3 = (iVar5 - (iVar3 + (uVar4 & 0xffff))) + 2;
      FUN_0040c20c(CONCAT22((short)((uint)iVar3 >> 0x10),(undefined2)local_14),
                   CONCAT22(extraout_var_06,(undefined2)local_18),iVar3);
    }
    else {
      local_28 = (undefined2)param_3;
      iVar1 = CONCAT22(extraout_var_01,local_28) * 7;
      FUN_0040c20c(CONCAT22(extraout_var_01,*(undefined2 *)(param_1 + 0x2a8)),
                   CONCAT22((short)((uint)(iVar5 + 2) >> 0x10),*(undefined2 *)(param_1 + 0x27a)),
                   CONCAT22((short)((uint)iVar1 >> 0x10),
                            (short)iVar1 + ((short)param_2 - (short)iVar3) + 2));
    }
  }
  return;
}

