// Address: 004e4b8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e4b8c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *in_FS_OFFSET;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  uStack_28 = param_6;
  puStack_30 = (undefined1 *)0x4e4bab;
  uStack_2c = param_1;
  iVar1 = (*DAT_0067aefc)();
  if (iVar1 != 0) {
    puStack_34 = &LAB_004e4bf5;
    iStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_38;
    puVar3 = &local_18;
    puVar2 = &local_18;
    puStack_30 = &stack0xfffffffc;
    local_8 = iVar1;
    (*DAT_0067af04)();
    *in_FS_OFFSET = iVar1;
    (*DAT_0067af00)(local_8,iVar1,param_5,local_8,0x4e4bfc,param_4,puVar2,puVar3);
    return;
  }
  return;
}

