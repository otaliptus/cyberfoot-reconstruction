// Address: 0064d948
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064d948(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 **local_2c;
  undefined1 *local_28;
  undefined1 **local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined1 *local_18;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = &stack0xfffffffc;
  iVar2 = 10;
  do {
    local_8 = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_1c = (undefined4 *)&LAB_0064db9c;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  if (param_1 < 1000000) {
    if (param_1 - 10000U < 90000) {
      local_24 = (undefined1 **)&local_8;
      local_28 = (undefined1 *)0x64d9c5;
      local_18 = &stack0xfffffffc;
      FUN_00409dd8(param_1,&local_c);
      local_28 = (undefined1 *)0x64d9d7;
      FUN_00404e04(local_c,1,2);
      local_24 = (undefined1 **)0x64d9e4;
      FUN_00404bac(&local_8,&DAT_0064dbb4);
      local_24 = (undefined1 **)0x64d9ee;
      FUN_004051d4(param_2,local_8);
      goto LAB_0064db81;
    }
    if (param_1 - 100000U < 900000) {
      local_24 = (undefined1 **)&stack0xfffffff0;
      local_28 = (undefined1 *)0x64da01;
      local_18 = &stack0xfffffffc;
      FUN_00409dd8(param_1,&stack0xffffffec);
      local_28 = (undefined1 *)0x64da13;
      FUN_00404e04(unaff_ESI,1,3);
      local_24 = (undefined1 **)0x64da20;
      FUN_00404bac(&stack0xfffffff0,&DAT_0064dbb4);
      local_24 = (undefined1 **)0x64da2a;
      FUN_004051d4(param_2,unaff_EBX);
      goto LAB_0064db81;
    }
  }
  else {
    if (param_1 - 1000000U < 9000000) {
      local_24 = (undefined1 **)&local_1c;
      local_28 = (undefined1 *)0x64da3d;
      FUN_00409dd8(param_1,&local_20);
      local_28 = (undefined1 *)0x64da4f;
      FUN_00404e04(local_20,1,1);
      local_24 = (undefined1 **)local_1c;
      local_28 = &LAB_0064dbc0;
      local_2c = &local_24;
      local_30 = (undefined4 *)0x64da65;
      FUN_00409dd8(param_1,&local_28);
      local_30 = (undefined4 *)0x64da77;
      FUN_00404e04(local_28,2,3);
      local_2c = (undefined4 **)local_24;
      local_30 = (undefined4 *)&DAT_0064dbb4;
      local_34 = 0x64da8c;
      FUN_00404c64(&local_18,4);
      local_24 = (undefined1 **)0x64da96;
      FUN_004051d4(param_2,local_18);
      goto LAB_0064db81;
    }
    if (param_1 - 10000000U < 90000000) {
      local_24 = (undefined1 **)&local_30;
      local_28 = (undefined1 *)0x64daa9;
      local_18 = &stack0xfffffffc;
      FUN_00409dd8(param_1,&local_34);
      local_28 = (undefined1 *)0x64dabb;
      FUN_00404e04(local_34,1,2);
      local_24 = (undefined1 **)local_30;
      local_28 = &LAB_0064dbc0;
      local_2c = &local_38;
      local_30 = (undefined4 *)0x64dad1;
      FUN_00409dd8(param_1,&local_3c);
      local_30 = (undefined4 *)0x64dae3;
      FUN_00404e04(local_3c,3,3);
      local_2c = (undefined4 **)local_38;
      local_30 = (undefined4 *)&DAT_0064dbb4;
      local_34 = 0x64daf8;
      FUN_00404c64(&local_2c,4);
      local_24 = (undefined1 **)0x64db02;
      FUN_004051d4(param_2,local_2c);
      goto LAB_0064db81;
    }
    if (param_1 + 0xfa0a1f00U < 900000000) {
      local_24 = (undefined1 **)&local_44;
      local_28 = (undefined1 *)0x64db12;
      local_18 = &stack0xfffffffc;
      FUN_00409dd8(param_1,&local_48);
      local_28 = (undefined1 *)0x64db24;
      FUN_00404e04(local_48,1,3);
      local_24 = (undefined1 **)local_44;
      local_28 = &LAB_0064dbc0;
      local_2c = &local_4c;
      local_30 = (undefined4 *)0x64db3a;
      FUN_00409dd8(param_1,&local_50);
      local_30 = (undefined4 *)0x64db4c;
      FUN_00404e04(local_50,4,3);
      local_2c = (undefined4 **)local_4c;
      local_30 = (undefined4 *)&DAT_0064dbb4;
      local_34 = 0x64db61;
      FUN_00404c64(&local_40,4);
      local_24 = (undefined1 **)0x64db6b;
      FUN_004051d4(param_2,local_40);
      goto LAB_0064db81;
    }
  }
  local_24 = (undefined1 **)0x64db77;
  local_18 = &stack0xfffffffc;
  FUN_00409dd8(param_1,&local_54);
  local_24 = (undefined1 **)0x64db81;
  FUN_004051d4(param_2,local_54);
LAB_0064db81:
  puVar1 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_0064dba3;
  local_1c = (undefined4 *)0x64db9b;
  FUN_004048f8(&local_54,0x14,puVar1);
  return;
}

