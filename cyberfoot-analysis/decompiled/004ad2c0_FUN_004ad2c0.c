// Address: 004ad2c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ad2c0(int param_1,int param_2,int param_3,char param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_004ad385;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  local_8 = param_3;
  if (param_1 == -0x7ffdfff7) {
    puStack_20 = &stack0xfffffffc;
    FUN_00404b6c(&local_c,*(undefined4 *)(param_2 + 4),param_3,*(undefined4 *)(param_2 + 0x1c));
    uVar4 = local_c;
    FUN_00404b6c(&local_10,*(undefined4 *)(param_2 + 0xc));
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = local_10;
    FUN_00404b6c(&local_14,*(undefined4 *)(param_2 + 8));
    uVar2 = FUN_004ac6f0(PTR_DAT_004ac518,1,local_14,uVar2,uVar3);
    if (param_4 != '\0') {
      FUN_00405830(param_2,PTR_DAT_0041ad38);
    }
  }
  else {
    uVar4 = 0;
    uVar2 = FUN_004ac620(PTR_DAT_004ac4bc,1,0,0,param_1);
  }
  if (local_8 != 0) {
    FUN_00404250(uVar2);
    return;
  }
  FUN_00404250(uVar2);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uVar4;
  puStack_28 = &LAB_004ad38c;
  FUN_004048f8(&local_14,3,puVar1);
  return;
}

