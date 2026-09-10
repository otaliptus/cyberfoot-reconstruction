// Address: 004bc7fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bc7fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 undefined1 *param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
                 undefined2 param_9)

{
  undefined1 *puVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined4 uStack_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  undefined4 local_8;
  
  local_24 = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  uStack_14 = 9;
  do {
    local_c = 0;
    uStack_14 = uStack_14 + -1;
  } while (uStack_14 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_004bc99d;
  local_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = param_5;
  local_34 = param_4;
  local_38 = (undefined1 *)0x4bc83b;
  local_8 = uStack_14;
  FUN_0040c388((int)&local_8 + 2,&local_8,(int)&local_c + 2);
  local_30 = param_5;
  local_34 = param_4;
  local_38 = (undefined1 *)((int)&uStack_14 + 2);
  local_3c = (undefined1 *)0x4bc853;
  FUN_0040c0ac(&local_c,&local_e,&local_10);
  local_34 = (undefined1 *)0x4bc862;
  local_30 = &stack0xfffffffc;
  FUN_004bc7a8(CONCAT22(extraout_var,local_8._2_2_),param_1,&local_24);
  puVar1 = local_30;
  local_30 = local_24;
  local_34 = (undefined1 *)0x4bc876;
  FUN_00404abc(&local_28,*PTR_DAT_0066aedc,puVar1);
  local_34 = local_28;
  local_3c = (undefined1 *)0x4bc888;
  local_38 = &stack0xfffffffc;
  FUN_004bc7a8(CONCAT22(extraout_var_00,(undefined2)local_8),param_2,&local_2c);
  puVar1 = local_38;
  local_38 = local_2c;
  local_3c = (undefined1 *)0x4bc89c;
  FUN_00404abc(&local_30,*PTR_DAT_0066aedc,puVar1);
  local_3c = local_30;
  local_44 = (undefined1 *)0x4bc8ae;
  local_40 = &stack0xfffffffc;
  FUN_004bc7a8(CONCAT22(extraout_var_01,local_c._2_2_),0,&local_34);
  local_40 = local_34;
  local_44 = &LAB_004bc9b8;
  local_4c = (undefined1 *)0x4bc8c8;
  local_48 = &stack0xfffffffc;
  FUN_004bc7a8(CONCAT22(extraout_var_02,(undefined2)local_c),CONCAT22(extraout_var_06,param_9),
               &local_38);
  puVar1 = local_48;
  local_48 = local_38;
  local_4c = (undefined1 *)0x4bc8dc;
  FUN_00404abc(&local_3c,*PTR_DAT_0066ac84,puVar1);
  local_4c = local_3c;
  local_54 = (undefined1 *)0x4bc8f0;
  local_50 = &stack0xfffffffc;
  FUN_004bc7a8(CONCAT22(extraout_var_03,local_e),CONCAT22(extraout_var_07,param_8),&local_40);
  puVar1 = local_50;
  local_50 = local_40;
  local_54 = (undefined1 *)0x4bc904;
  FUN_00404abc(&local_44,*PTR_DAT_0066ac84,puVar1);
  local_54 = local_44;
  FUN_004bc7a8(CONCAT22(extraout_var_04,local_10),CONCAT22(extraout_var_08,param_7),&local_48);
  FUN_00404abc(&local_4c,*PTR_DAT_0066b70c,puVar4,local_48);
  FUN_004bc7a8(CONCAT22(extraout_var_05,uStack_14._2_2_),CONCAT22(extraout_var_09,param_6),&local_50
               ,&stack0xfffffffc,local_4c);
  puVar4 = local_50;
  FUN_00404c64(&stack0xffffffe0,0xd,puVar3);
  puVar3 = &stack0xffffffe4;
  uVar2 = 0;
  FUN_00406d44(PTR_LAB_0066ad2c,&local_54);
  FUN_0040e3ac(PTR_DAT_00408d90,1,local_54,uVar2,puVar3);
  FUN_00404250();
  *in_FS_OFFSET = uVar2;
  FUN_004048f8(&local_54,0xe,puVar4,&LAB_004bc9a4);
  return;
}

