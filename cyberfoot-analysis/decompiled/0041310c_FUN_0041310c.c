// Address: 0041310c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0041310c(undefined2 *param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  switch(*param_1) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    if (DAT_00662450 != '\0') {
      puStack_18 = &UNK_00413173;
      FUN_00411500(1,0x12);
    }
    uVar1 = 0;
    break;
  default:
    puStack_1c = &LAB_004131c1;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    uVar1 = FUN_00412a6c(param_1);
    if (0xffff < uVar1) {
      thunk_FUN_00402958();
    }
    *in_FS_OFFSET = uStack_20;
    break;
  case 0xb:
    uVar1 = (uint)(ushort)param_1[4];
    break;
  case 0x11:
    uVar1 = (uint)*(byte *)(param_1 + 4);
    break;
  case 0x12:
    uVar1 = (uint)(ushort)param_1[4];
  }
  return uVar1;
}

