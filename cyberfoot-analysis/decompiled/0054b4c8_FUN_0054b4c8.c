// Address: 0054b4c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054b4c8(int param_1,undefined4 param_2,LONG *param_3,uint param_4)

{
  undefined3 uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined1 local_58 [16];
  tagRECT local_48;
  LONG local_38;
  LONG LStack_34;
  LONG LStack_30;
  LONG LStack_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_68 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_28 = 0;
  local_48.left = *param_3;
  local_48.top = param_3[1];
  local_48.right = param_3[2];
  local_48.bottom = param_3[3];
  puStack_6c = &LAB_0054b694;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  local_38 = local_48.left;
  LStack_34 = local_48.top;
  LStack_30 = local_48.right;
  LStack_2c = local_48.bottom;
  local_8 = param_2;
  if ((param_4 & 1) == 0) {
    FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x208) + 0x14),*(undefined4 *)(param_1 + 0x70));
    FUN_0042a88c(*(undefined4 *)(*(int *)(param_1 + 0x208) + 0x10),*(undefined4 *)(param_1 + 0x70));
    FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x208) + 0xc),
                 *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18));
    uVar2 = *(undefined4 *)(param_1 + 0x2b0);
  }
  else {
    puStack_68 = &stack0xfffffffc;
    FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x208) + 0x14),0xff00000d);
    FUN_0042a88c(*(undefined4 *)(*(int *)(param_1 + 0x208) + 0x10),0xff00000d);
    FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x208) + 0xc),0xff00000e);
    uVar2 = 0xff00000e;
  }
  FUN_0042b158(*(undefined4 *)(param_1 + 0x208),local_48.left,local_48.top,local_48.bottom,
               local_48.right);
  OffsetRect(&local_48,2,0);
  FUN_0054ce04(param_1,local_8,&local_28);
  uVar1 = (undefined3)((uint)*(undefined4 *)(param_1 + 0x2f0) >> 8);
  puVar4 = local_58;
  uVar3 = *(undefined4 *)(param_1 + 0x2ec);
  FUN_0054a8f0(*(undefined4 *)(param_1 + 0x208),local_28,&local_48,uVar3,
               *(undefined4 *)(param_1 + 0x2f8),puVar4,local_24,local_20,local_1c,local_18,&local_14
               ,&local_10,&local_c,*(undefined4 *)(param_1 + 0x2f4),0x1fffffff,0x1fffffff,uVar2,0,
               0x3ff00000,CONCAT31(uVar1,*(undefined1 *)(param_1 + 0x2e8)) ^ 1,0,1,
               CONCAT31(uVar1,(param_4 & 1) != 0),0,0,0,*(undefined4 *)(param_1 + 0x2f0),0xffffffff,
               0xffffffff,0,0,*(undefined4 *)(param_1 + 0x2b8));
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x208) + 0x14),*(undefined4 *)(param_1 + 0x70));
  FUN_0042a88c(*(undefined4 *)(*(int *)(param_1 + 0x208) + 0x10),*(undefined4 *)(param_1 + 0x70));
  *in_FS_OFFSET = uVar3;
  FUN_00404ff0(&local_28,uVar3,puVar4,&LAB_0054b69b);
  FUN_00405008(&local_14,3);
  return;
}

