// Address: 004143d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004143d8(undefined2 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  puStack_28 = &stack0xfffffffc;
  switch(*param_1) {
  case 0:
    break;
  case 1:
    if (DAT_00662450 != '\0') {
      puStack_28 = (undefined1 *)0x41446e;
      FUN_00411500(1,4);
    }
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  default:
    puStack_2c = &LAB_0041453d;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    FUN_00414040(param_1);
    *in_FS_OFFSET = uStack_30;
    break;
  case 0xb:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
  }
  return;
}

