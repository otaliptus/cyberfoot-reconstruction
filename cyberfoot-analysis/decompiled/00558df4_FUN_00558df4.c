// Address: 00558df4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00558df4(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined1 param_7,int param_8,undefined4 *param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffe98;
  undefined4 in_stack_fffffea0;
  undefined1 *puVar5;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_38 = *param_9;
  local_34 = param_9[1];
  local_30 = param_9[2];
  local_2c = param_9[3];
  puStack_68 = (undefined1 *)0x558e20;
  FUN_00404d94(param_8);
  puStack_6c = &LAB_00558fd6;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  puStack_68 = &stack0xfffffffc;
  if (param_8 != 0) {
    puStack_68 = &stack0xfffffffc;
    uVar1 = FUN_00402c38();
    puVar5 = local_48;
    uVar2 = FUN_00402c38();
    uVar3 = FUN_00402c38();
    uVar4 = FUN_00402c38();
    FUN_00407174(uVar4,uVar3,uVar2,puVar5,uVar1);
    FUN_00557074(param_2,*(undefined4 *)(param_3 + 0x10),param_8,2,*(undefined4 *)(param_1 + 0xa4),0
                 ,local_58,local_18,local_14,&local_20,&local_1c,&local_10,&local_c,&local_8,
                 *(undefined4 *)(param_3 + 0x18),0x1fffffff,0x1fffffff,*(undefined4 *)(param_3 + 8),
                 0,0x3ff00000,1,0,0,0,0,1,0,*(undefined4 *)(param_3 + 0xc),0xffffffff,0xffffffff,0,0
                 ,*(undefined4 *)(param_1 + 0xa0),local_48);
    if (*(char *)(param_3 + 0x28) == '\t') {
      local_24 = (float)*(int *)(param_3 + 0x30);
      local_28 = (float)*(int *)(param_3 + 0x2c);
    }
    else {
      FUN_00557af4(&local_24,&local_28,&local_38,*(char *)(param_3 + 0x28),local_20,local_1c);
    }
    puVar5 = local_48;
    uVar1 = FUN_00402c38();
    uVar2 = FUN_00402c38();
    FUN_00407174(uVar2,uVar1,local_1c,puVar5,local_20);
    in_stack_fffffea0 = 0;
    in_stack_fffffe98 = 2;
    FUN_00557074(param_2,*(undefined4 *)(param_3 + 0x10),param_8,2,*(undefined4 *)(param_1 + 0xa4),0
                 ,local_58,local_18,local_14,&local_20,&local_1c,&local_10,&local_c,&local_8,
                 *(undefined4 *)(param_3 + 0x18),0x1fffffff,0x1fffffff,*(undefined4 *)(param_3 + 8),
                 0,0x3ff00000,1,0,0,0,0,0,
                 CONCAT31((int3)((uint)*(undefined4 *)(param_3 + 0xc) >> 8),param_7),
                 *(undefined4 *)(param_3 + 0xc),0xffffffff,0xffffffff,param_5,param_6,
                 *(undefined4 *)(param_1 + 0xa0),local_48);
    FUN_00404928(param_4,local_8);
  }
  *in_FS_OFFSET = in_stack_fffffe98;
  FUN_004048f8(&local_10,3,in_stack_fffffea0,&LAB_00558fdd);
  FUN_004048d4(&param_8);
  return;
}

