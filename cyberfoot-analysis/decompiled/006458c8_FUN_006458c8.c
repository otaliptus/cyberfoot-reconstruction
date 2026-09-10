// Address: 006458c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006458c8(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00645c53;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_1 < 0x62) {
    if (param_1 == 0x61) {
      puStack_14 = &stack0xfffffffc;
      FUN_00642c50(0xe8,param_2);
      goto LAB_00645c3d;
    }
    if (param_1 < 0x3f) {
      if (param_1 == 0x3e) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xf8,param_2);
        goto LAB_00645c3d;
      }
      if (param_1 < 0x1e) {
        if (param_1 == 0x1d) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0xf4,param_2);
          goto LAB_00645c3d;
        }
        if (param_1 == 3) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0xe2,param_2);
          goto LAB_00645c3d;
        }
        if (param_1 == 0xb) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0xf6,param_2);
          goto LAB_00645c3d;
        }
        if (param_1 == 0x15) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0xec,param_2);
          goto LAB_00645c3d;
        }
      }
      else {
        if (param_1 == 0x1f) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0x116,param_2);
          goto LAB_00645c3d;
        }
        if (param_1 == 0x2a) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0x100,param_2);
          goto LAB_00645c3d;
        }
        if (param_1 == 0x2e) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0x104,param_2);
          goto LAB_00645c3d;
        }
      }
    }
    else if (param_1 < 0x4f) {
      if (param_1 == 0x4e) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xee,param_2);
        goto LAB_00645c3d;
      }
      if (param_1 == 0x41) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xe6,param_2);
        goto LAB_00645c3d;
      }
      if (param_1 == 0x44) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x114,param_2);
        goto LAB_00645c3d;
      }
      if (param_1 == 0x48) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xea,param_2);
        goto LAB_00645c3d;
      }
    }
    else {
      if (param_1 == 0x55) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xf0,param_2);
        goto LAB_00645c3d;
      }
      if (param_1 == 0x60) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x112,param_2);
        goto LAB_00645c3d;
      }
    }
  }
  else {
    if (0xab < param_1) {
      switch(param_1) {
      case 0xb3:
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x108,param_2);
        break;
      case 0xb4:
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xfc,param_2);
        break;
      default:
        goto switchD_006459eb_caseD_b5;
      case 0xc0:
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xfe,param_2);
        break;
      case 0xc1:
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x10a,param_2);
        break;
      case 0xc3:
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x10c,param_2);
        break;
      case 0xca:
        FUN_00404ff0(param_2);
      }
      goto LAB_00645c3d;
    }
    if (param_1 == 0xab) {
      puStack_14 = &stack0xfffffffc;
      FUN_00642c50(0x10e,param_2);
      goto LAB_00645c3d;
    }
    if (param_1 < 0x99) {
      if (param_1 == 0x98) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x110,param_2);
        goto LAB_00645c3d;
      }
      if (param_1 == 0x68) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xe4,param_2);
        goto LAB_00645c3d;
      }
      if (param_1 == 0x83) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xfa,param_2);
        goto LAB_00645c3d;
      }
      if (param_1 == 0x96) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x102,param_2);
        goto LAB_00645c3d;
      }
    }
    else {
      if (param_1 == 0x9a) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xf2,param_2);
        goto LAB_00645c3d;
      }
      if (param_1 == 0xa2) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x106,param_2);
        goto LAB_00645c3d;
      }
    }
  }
switchD_006459eb_caseD_b5:
  puStack_14 = &stack0xfffffffc;
  FUN_00642c50(0x118,&local_8);
  FUN_00405330(param_2,3);
LAB_00645c3d:
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00645c5a;
  puStack_18 = (undefined1 *)0x645c52;
  FUN_00404ff0(&local_8,uStack_1c,puVar1);
  return;
}

