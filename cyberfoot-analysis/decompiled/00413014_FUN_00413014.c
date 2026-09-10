// Address: 00413014
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00413014(undefined2 *param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  switch(*param_1) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    if (DAT_00662450 != '\0') {
      puStack_18 = (undefined1 *)0x413085;
      FUN_00411500(1,2);
    }
    uVar1 = 0;
    break;
  case 2:
    uVar1 = (uint)(ushort)param_1[4];
    break;
  default:
    puStack_1c = &LAB_004130e8;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    uVar1 = FUN_00412a6c(param_1);
    if (0xffff < uVar1 + 0x8000) {
      thunk_FUN_00402958();
    }
    *in_FS_OFFSET = uStack_20;
    break;
  case 0xb:
    uVar1 = (uint)(ushort)param_1[4];
    break;
  case 0x10:
    uVar1 = (uint)*(char *)(param_1 + 4);
    break;
  case 0x11:
    uVar1 = (uint)*(byte *)(param_1 + 4);
  }
  return uVar1;
}

