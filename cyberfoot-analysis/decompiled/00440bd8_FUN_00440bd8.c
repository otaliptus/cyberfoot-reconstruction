// Address: 00440bd8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00440bd8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  float10 in_ST0;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  undefined8 local_14;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_00440c7d;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  uStack_34 = 0;
  piStack_38 = &local_18;
  puStack_3c = (undefined1 *)0x440c0c;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3);
  local_14 = (double)CONCAT44(param_5,param_4);
  if (local_18 != 0) {
    puStack_40 = &LAB_00440c42;
    iStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_44;
    puStack_3c = &stack0xfffffffc;
    FUN_0040da04(local_18);
    local_14 = (double)in_ST0;
    *in_FS_OFFSET = iStack_44;
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = (int)piStack_38;
  puStack_30 = &LAB_00440c84;
  uStack_34 = 0x440c7c;
  FUN_004048d4(&local_18,piStack_38,puVar1);
  return;
}

