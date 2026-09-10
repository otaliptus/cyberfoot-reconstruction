// Address: 004ebd38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ebd38(int param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 uStack_c;
  int local_8;
  
  puStack_64 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_14 = *param_2;
  local_10 = param_2[1];
  uStack_c = param_2[2];
  local_8 = param_2[3];
  puStack_68 = &LAB_004ebf3d;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  iVar1 = *(int *)(param_1 + 0x208);
  cVar2 = FUN_004e4b0c();
  if (cVar2 == '\0') {
    FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xff00000f);
  }
  else {
    uVar3 = FUN_004e53d0(PTR_DAT_004e5160,0xff00001c,0xff000005,0xf9);
    FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),uVar3);
  }
  FUN_0042af8c(iVar1,&local_14);
  FUN_0042a3a0(*(undefined4 *)(iVar1 + 0xc),0xff000008);
  FUN_004eb2fc(param_1,*(undefined2 *)(param_1 + 0x27a),&local_1c);
  puVar7 = &DAT_004ebf50;
  uVar8 = local_1c;
  FUN_00409dd8(*(undefined2 *)(param_1 + 0x2a8),&local_24);
  FUN_004051d4(&local_20,local_24);
  uVar3 = local_20;
  FUN_00405330(&local_18,3);
  uVar6 = 0;
  FUN_004e63b0(*(undefined4 *)(param_1 + 0x208),&local_14,2,0,local_18,uVar3,puVar7,uVar8);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xff000008);
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000008);
  iVar5 = local_8 - local_10 >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((local_8 - local_10 & 1U) != 0);
  }
  iVar5 = iVar5 + local_10;
  FUN_004070b8(0xf,iVar5 + -4,&local_44);
  local_3c = local_44;
  local_38 = local_40;
  FUN_004070b8(0xf,iVar5 + 4,&local_4c);
  local_34 = local_4c;
  local_30 = local_48;
  FUN_004070b8(0xb,iVar5,&local_54);
  local_2c = local_54;
  local_28 = local_50;
  FUN_0042b0e8(iVar1,&local_3c,2);
  iVar4 = FUN_00465c0c(param_1);
  FUN_004070b8(iVar4 + -0xf,iVar5 + -4,&local_44);
  local_3c = local_44;
  local_38 = local_40;
  iVar4 = FUN_00465c0c(param_1);
  FUN_004070b8(iVar4 + -0xf,iVar5 + 4,&local_4c);
  local_34 = local_4c;
  local_30 = local_48;
  iVar4 = FUN_00465c0c(param_1);
  FUN_004070b8(iVar4 + -0xb,iVar5,&local_54);
  local_2c = local_54;
  local_28 = local_50;
  FUN_0042b0e8(iVar1,&local_3c,2);
  *in_FS_OFFSET = uVar6;
  FUN_004048d4(&local_24,uVar6,uVar3,&LAB_004ebf44);
  FUN_00405008(&local_20,3);
  return;
}

