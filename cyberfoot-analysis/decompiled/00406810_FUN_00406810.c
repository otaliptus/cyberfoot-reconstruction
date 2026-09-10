// Address: 00406810
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00406810(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_00406874;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  FUN_004067a4(param_1[1]);
  *in_FS_OFFSET = uStack_14;
  puVar1 = DAT_0066203c;
  if (local_8 == DAT_0066203c) {
    DAT_0066203c = (undefined4 *)*local_8;
  }
  else {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((undefined4 *)*puVar1 == local_8) {
        *puVar1 = *local_8;
        return;
      }
    }
  }
  return;
}

