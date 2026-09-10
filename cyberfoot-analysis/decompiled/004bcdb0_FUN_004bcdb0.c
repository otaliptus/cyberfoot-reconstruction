// Address: 004bcdb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bcdb0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1b4;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1ac;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_1ac = &stack0xfffffffc;
  local_10 = 0;
  puStack_1b0 = &LAB_004bce28;
  uStack_1b4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1b4;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = param_2 + 3;
  }
  DAT_0067aae0 = (int)uVar2 >> 2;
  DAT_0067aae4 = param_2 & 0x80000003;
  if ((int)DAT_0067aae4 < 0) {
    DAT_0067aae4 = (DAT_0067aae4 - 1 | 0xfffffffc) + 1;
  }
  local_c = param_2;
  local_8 = param_1;
  FUN_00404f30(&local_10,param_2);
  FUN_004bcce0(param_3,param_5);
  puVar1 = puStack_1ac;
  *in_FS_OFFSET = uStack_1b4;
  puStack_1ac = &LAB_004bce2f;
  puStack_1b0 = (undefined1 *)0x4bce27;
  FUN_004048d4(&local_10,uStack_1b4,puVar1);
  return;
}

