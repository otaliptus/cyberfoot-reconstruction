// Address: 004d3da0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d3da0(uint param_1,undefined2 *param_2,undefined4 param_3,byte param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004d3e8f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004051d4(&local_8,param_3);
  uVar2 = FUN_00405260(local_8);
  if (uVar2 < param_1) {
    FUN_00405260(local_8);
    uVar3 = FUN_00405250(local_8);
    FUN_004d337c(param_2,uVar3,param_1);
  }
  else if ((param_4 & 4) == 0) {
    if ((param_4 & 1) != 0) {
      uVar2 = FUN_00405260(local_8);
      if (param_1 == uVar2) {
        FUN_00405260(local_8);
        uVar3 = FUN_00405250(local_8);
        FUN_004d337c(param_2,uVar3,param_1 - 1);
        goto LAB_004d3e79;
      }
    }
    FUN_00405260(local_8);
    if (param_1 != 0) {
      if ((param_4 & 2) == 0) {
        if ((param_4 & 8) != 0) {
          uVar3 = FUN_00405250(local_8);
          FUN_004d3d40(param_2,uVar3,param_1);
        }
      }
      else {
        *param_2 = 0;
      }
    }
  }
  else {
    uVar3 = FUN_00405250(local_8);
    FUN_004d3d28(param_2,uVar3,param_1);
  }
LAB_004d3e79:
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d3e96;
  puStack_1c = (undefined1 *)0x4d3e8e;
  FUN_00404ff0(&local_8,uStack_20,puVar1);
  return;
}

