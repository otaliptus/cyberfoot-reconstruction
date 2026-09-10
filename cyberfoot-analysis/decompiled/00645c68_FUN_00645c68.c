// Address: 00645c68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00645c68(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00645ff3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_1 < 0x62) {
    if (param_1 == 0x61) {
      puStack_14 = &stack0xfffffffc;
      FUN_00642c50(0xe7,param_2);
      goto LAB_00645fdd;
    }
    if (param_1 < 0x3f) {
      if (param_1 == 0x3e) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xf7,param_2);
        goto LAB_00645fdd;
      }
      if (param_1 < 0x1e) {
        if (param_1 == 0x1d) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0xf3,param_2);
          goto LAB_00645fdd;
        }
        if (param_1 == 3) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0xe1,param_2);
          goto LAB_00645fdd;
        }
        if (param_1 == 0xb) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0xf5,param_2);
          goto LAB_00645fdd;
        }
        if (param_1 == 0x15) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0xeb,param_2);
          goto LAB_00645fdd;
        }
      }
      else {
        if (param_1 == 0x1f) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0x115,param_2);
          goto LAB_00645fdd;
        }
        if (param_1 == 0x2a) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0xff,param_2);
          goto LAB_00645fdd;
        }
        if (param_1 == 0x2e) {
          puStack_14 = &stack0xfffffffc;
          FUN_00642c50(0x103,param_2);
          goto LAB_00645fdd;
        }
      }
    }
    else if (param_1 < 0x4f) {
      if (param_1 == 0x4e) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xed,param_2);
        goto LAB_00645fdd;
      }
      if (param_1 == 0x41) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xe5,param_2);
        goto LAB_00645fdd;
      }
      if (param_1 == 0x44) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x113,param_2);
        goto LAB_00645fdd;
      }
      if (param_1 == 0x48) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xe9,param_2);
        goto LAB_00645fdd;
      }
    }
    else {
      if (param_1 == 0x55) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xef,param_2);
        goto LAB_00645fdd;
      }
      if (param_1 == 0x60) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x111,param_2);
        goto LAB_00645fdd;
      }
    }
  }
  else {
    if (0xab < param_1) {
      switch(param_1) {
      case 0xb3:
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x107,param_2);
        break;
      case 0xb4:
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xfb,param_2);
        break;
      default:
        goto switchD_00645d8b_caseD_b5;
      case 0xc0:
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xfd,param_2);
        break;
      case 0xc1:
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x109,param_2);
        break;
      case 0xc3:
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x10b,param_2);
        break;
      case 0xca:
        FUN_00404ff0(param_2);
      }
      goto LAB_00645fdd;
    }
    if (param_1 == 0xab) {
      puStack_14 = &stack0xfffffffc;
      FUN_00642c50(0x10d,param_2);
      goto LAB_00645fdd;
    }
    if (param_1 < 0x99) {
      if (param_1 == 0x98) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x10f,param_2);
        goto LAB_00645fdd;
      }
      if (param_1 == 0x68) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xe3,param_2);
        goto LAB_00645fdd;
      }
      if (param_1 == 0x83) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xf9,param_2);
        goto LAB_00645fdd;
      }
      if (param_1 == 0x96) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x101,param_2);
        goto LAB_00645fdd;
      }
    }
    else {
      if (param_1 == 0x9a) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0xf1,param_2);
        goto LAB_00645fdd;
      }
      if (param_1 == 0xa2) {
        puStack_14 = &stack0xfffffffc;
        FUN_00642c50(0x105,param_2);
        goto LAB_00645fdd;
      }
    }
  }
switchD_00645d8b_caseD_b5:
  puStack_14 = &stack0xfffffffc;
  FUN_00642c50(0x117,&local_8);
  FUN_00405330(param_2,3);
LAB_00645fdd:
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00645ffa;
  puStack_18 = (undefined1 *)0x645ff2;
  FUN_00404ff0(&local_8,uStack_1c,puVar1);
  return;
}

