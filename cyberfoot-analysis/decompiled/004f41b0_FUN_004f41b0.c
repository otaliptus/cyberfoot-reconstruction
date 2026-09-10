// Address: 004f41b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f41b0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  uVar2 = true;
  puStack_1c = &LAB_004f422a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00405378(param_2,&DAT_004f423c);
  if (!(bool)uVar2) {
    FUN_00404b6c(&local_c,param_2);
    FUN_004095ec(local_c,&local_8);
    FUN_00404cf0(local_8,&LAB_004f4248);
    if (!(bool)uVar2) {
      uVar2 = 0;
      goto LAB_004f4203;
    }
  }
  uVar2 = 1;
LAB_004f4203:
  *(undefined1 *)(param_1 + 0x20) = uVar2;
  FUN_004f7210(param_1,param_2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004f4231;
  puStack_1c = (undefined1 *)0x4f4229;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

