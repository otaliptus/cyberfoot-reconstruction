// Address: 004320b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004320b4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_10 = *(undefined4 **)(param_1 + 4);
  if (local_10 == (undefined4 *)0x0) {
    return;
  }
  puStack_14 = (undefined *)0x4320d0;
  local_c = local_10;
  local_8 = param_1;
  FUN_00431ee8(param_1);
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(undefined4 *)(local_8 + 4) = *local_10;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &DAT_00432106;
  uStack_18 = 0x4320fe;
  FUN_00431ef4(local_8,uStack_1c,&stack0xfffffffc);
  return;
}

