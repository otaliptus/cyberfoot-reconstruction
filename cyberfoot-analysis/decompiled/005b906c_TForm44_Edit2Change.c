// Address: 005b906c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm44_Edit2Change(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = &stack0xfffffffc;
  local_10 = 4;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_1c = &LAB_005b91f2;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  local_24 = 0x5b909b;
  FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_c);
  if (local_c == 0) {
    local_24 = 0x5b90ae;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x334),0);
    local_24 = 0x5b90bb;
    (**(code **)(**(int **)(param_1 + 0x344) + 100))(*(int **)(param_1 + 0x344),0);
  }
  else {
    local_24 = 0x5b90cd;
    (**(code **)(**(int **)(param_1 + 0x344) + 100))(*(int **)(param_1 + 0x344),1);
    local_24 = 0x5b90db;
    FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_10);
    if (local_10 != 0) {
      local_24 = 0x5b90ef;
      FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&stack0xffffffec);
      local_24 = 0x5b90fa;
      FUN_0040343c(unaff_EBX,&local_8);
    }
    if (local_8 == 0) {
      local_24 = 0x5b913a;
      (**(code **)(**(int **)(param_1 + 0x344) + 100))(*(int **)(param_1 + 0x344),1);
      local_24 = 0x5b9148;
      FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_1c);
      local_24 = 0x5b9150;
      iVar3 = FUN_00409ff8(local_1c);
      if (iVar3 < 1) {
        local_24 = 0x5b9160;
        FUN_00409dd8(1000,&local_20);
        local_24 = 0x5b916e;
        FUN_00466238(*(undefined4 *)(param_1 + 0x30c),local_20);
        local_24 = 0x5b917b;
        (**(code **)(**(int **)(param_1 + 0x344) + 100))(*(int **)(param_1 + 0x344),0);
      }
      else {
        local_24 = 0x5b918b;
        FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_28);
        local_24 = 0x5b9193;
        iVar3 = FUN_00409ff8(local_28);
        local_24 = 0x5b91a1;
        FUN_006468f4(iVar3 * 1000,&local_24);
        uVar1 = local_24;
        local_24 = 0x5b91af;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x334),uVar1);
      }
    }
    else {
      local_24 = 0x5b910d;
      FUN_00409dd8(1000,&local_18);
      local_24 = 0x5b911b;
      FUN_00466238(*(undefined4 *)(param_1 + 0x30c),local_18);
      local_24 = 0x5b9128;
      (**(code **)(**(int **)(param_1 + 0x344) + 100))(*(int **)(param_1 + 0x344),0);
    }
  }
  puVar2 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_005b91f9;
  local_1c = (undefined1 *)0x5b91c4;
  FUN_004048d4(&local_28,local_20,puVar2);
  local_1c = (undefined1 *)0x5b91cc;
  FUN_00404ff0(&local_24);
  local_1c = (undefined1 *)0x5b91d4;
  FUN_004048d4(&local_20);
  local_1c = (undefined1 *)0x5b91dc;
  FUN_004048d4(&local_1c);
  local_1c = (undefined1 *)0x5b91e4;
  FUN_004048d4(&local_18);
  local_1c = (undefined1 *)0x5b91f1;
  FUN_004048f8(&stack0xffffffec,3);
  return;
}

