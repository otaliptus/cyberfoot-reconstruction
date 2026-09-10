// Address: 00411734
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00411734(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = &stack0xfffffffc;
  iVar3 = 8;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_18 = &LAB_00411979;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  if (param_1 < -0x7ffdfff5) {
    if (param_1 == -0x7ffdfff6) {
      local_20 = (undefined4 *)0x41180a;
      local_14 = &stack0xfffffffc;
      FUN_00406d44(PTR_PTR_0066adc0,&local_c);
      local_20 = (undefined4 *)0x411819;
      FUN_0040e370(PTR_DAT_00411050,1,local_c);
      local_20 = (undefined4 *)0x41181e;
      FUN_00404250();
      goto LAB_00411951;
    }
    if (param_1 < -0x7ffdfffa) {
      if (param_1 == -0x7ffdfffb) {
        local_20 = (undefined4 *)0x4117c8;
        local_14 = &stack0xfffffffc;
        FUN_004114ac();
        goto LAB_00411951;
      }
      if (param_1 == -0x7fffbfff) {
        local_20 = (undefined4 *)0x41187c;
        local_14 = &stack0xfffffffc;
        FUN_00406d44(PTR_PTR_0066b2f8,&local_18);
        local_20 = (undefined4 *)0x41188b;
        FUN_0040e370(PTR_DAT_004112b0,1,local_18);
        local_20 = (undefined4 *)0x411890;
        FUN_00404250();
        goto LAB_00411951;
      }
      if (param_1 == -0x7fff0001) {
        local_20 = (undefined4 *)0x4118eb;
        local_14 = &stack0xfffffffc;
        FUN_00406d44(PTR_PTR_0066adbc,&local_24);
        local_20 = (undefined4 *)0x4118fa;
        FUN_0040e370(PTR_DAT_0041137c,1,local_24);
        local_20 = (undefined4 *)0x4118ff;
        FUN_00404250();
        goto LAB_00411951;
      }
    }
    else {
      if (param_1 == -0x7ffdfff8) {
        local_20 = (undefined4 *)0x4117da;
        local_14 = &stack0xfffffffc;
        FUN_00406d44(PTR_PTR_0066b634,&local_8);
        local_20 = (undefined4 *)0x4117e9;
        FUN_0040e370(PTR_DAT_00411118,1,local_8);
        local_20 = (undefined4 *)0x4117ee;
        FUN_00404250();
        goto LAB_00411951;
      }
      if (param_1 == -0x7ffdfff7) {
        local_20 = (undefined4 *)0x4117f8;
        local_14 = &stack0xfffffffc;
        FUN_0041159c();
        goto LAB_00411951;
      }
    }
  }
  else {
    if (param_1 == -0x7ffdfff5) {
      local_20 = (undefined4 *)0x411830;
      FUN_00406d44(PTR_PTR_0066b4c0,&stack0xfffffff0);
      local_20 = (undefined4 *)0x41183f;
      FUN_0040e370(PTR_DAT_0041117c,1,unaff_EBX);
      local_20 = (undefined4 *)0x411844;
      FUN_00404250();
      goto LAB_00411951;
    }
    if (param_1 == -0x7ffdfff3) {
      local_20 = (undefined4 *)0x411856;
      local_14 = &stack0xfffffffc;
      FUN_00406d44(PTR_PTR_0066b774,&local_14);
      local_20 = (undefined4 *)0x411865;
      FUN_0040e370(PTR_DAT_004111e0,1,local_14);
      local_20 = (undefined4 *)0x41186a;
      FUN_00404250();
      goto LAB_00411951;
    }
    if (param_1 == -0x7ff8fff2) {
      local_20 = (undefined4 *)0x4118a2;
      local_14 = &stack0xfffffffc;
      FUN_00406d44(PTR_PTR_0066aef0,&local_1c);
      local_20 = (undefined4 *)0x4118b1;
      FUN_0040e370(PTR_DAT_00411314,1,local_1c);
      local_20 = (undefined4 *)0x4118b6;
      FUN_00404250();
      goto LAB_00411951;
    }
    if (param_1 == -0x7ff8ffa9) {
      local_20 = (undefined4 *)0x4118c8;
      local_14 = &stack0xfffffffc;
      FUN_00406d44(PTR_PTR_0066af20,&local_20);
      puVar1 = local_20;
      local_20 = (undefined4 *)0x4118d7;
      FUN_0040e370(PTR_DAT_004110b4,1,puVar1);
      local_20 = (undefined4 *)0x4118dc;
      FUN_00404250();
      goto LAB_00411951;
    }
  }
  local_3c = *(undefined4 *)PTR_PTR_0066b658;
  local_38 = 0xb;
  local_30 = 0;
  local_20 = (undefined4 *)0x411920;
  local_34 = param_1;
  local_14 = &stack0xfffffffc;
  FUN_0040db5c(param_1,&local_40);
  local_2c = local_40;
  local_20 = &local_3c;
  local_24 = 2;
  local_28 = 0x41193d;
  FUN_00406d44(PTR_PTR_0066b0d0,&local_44);
  local_28 = 0x41194c;
  FUN_0040e3ac(PTR_DAT_00408f58,1,local_44);
  local_28 = 0x411951;
  FUN_00404250();
LAB_00411951:
  puVar2 = local_14;
  *in_FS_OFFSET = local_1c;
  local_14 = &LAB_00411980;
  local_18 = (undefined1 *)0x41196b;
  FUN_004048f8(&local_44,2,puVar2);
  local_18 = (undefined1 *)0x411978;
  FUN_004048f8(&local_24,8);
  return;
}

