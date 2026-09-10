// Address: 004d7fac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d7fac(int *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_9 [3];
  short local_6;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_24 = &LAB_004d80f7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_6 = 0;
  uVar2 = (**(code **)*param_1)();
  uVar3 = FUN_004208d4(param_1);
  if (extraout_EDX - extraout_EDX_00 == (uint)(uVar2 < uVar3)) {
    if (uVar2 - uVar3 < 2) goto LAB_004d809f;
  }
  else if ((int)((extraout_EDX - extraout_EDX_00) - (uint)(uVar2 < uVar3)) < 0) goto LAB_004d809f;
  iVar4 = (**(code **)(*param_1 + 0xc))(param_1,&local_6,2);
  if ((local_6 != -0x101) && (local_6 != -2)) {
    local_6 = 0;
    (**(code **)(*param_1 + 0x14))(param_1,-iVar4,CONCAT22(extraout_var,1));
    uVar2 = (**(code **)*param_1)();
    uVar3 = FUN_004208d4(param_1);
    uVar5 = extraout_EDX_01 - extraout_EDX_02 == (uint)(uVar2 < uVar3);
    if ((bool)uVar5) {
      uVar5 = uVar2 - uVar3 == 3;
      if (uVar2 - uVar3 < 3) goto LAB_004d809f;
    }
    else if ((int)((extraout_EDX_01 - extraout_EDX_02) - (uint)(uVar2 < uVar3)) < 0)
    goto LAB_004d809f;
    iVar4 = (**(code **)(*param_1 + 0xc))(param_1,local_9,3);
    FUN_00404b54(&local_10,local_9,3);
    FUN_00404cf0(local_10,&DAT_004d8110);
    if (!(bool)uVar5) {
      (**(code **)(*param_1 + 0x14))(param_1,-iVar4,CONCAT22(extraout_var_00,1));
    }
  }
LAB_004d809f:
  if ((local_6 != -0x101) && (local_6 != -2)) {
    FUN_00404b54(&local_14,local_9,3);
    FUN_00404cf0(local_14,&DAT_004d8110);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004d80fe;
  puStack_24 = (undefined1 *)0x4d80f6;
  FUN_004048f8(&local_14,2,puVar1);
  return;
}

