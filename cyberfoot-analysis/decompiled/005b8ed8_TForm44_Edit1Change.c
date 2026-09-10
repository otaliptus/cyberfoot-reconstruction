// Address: 005b8ed8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm44_Edit1Change(int param_1)

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
  local_1c = &LAB_005b905e;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  local_24 = 0x5b8f07;
  FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_c);
  if (local_c == 0) {
    local_24 = 0x5b8f1a;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),0);
    local_24 = 0x5b8f27;
    (**(code **)(**(int **)(param_1 + 0x344) + 100))(*(int **)(param_1 + 0x344),0);
  }
  else {
    local_24 = 0x5b8f39;
    (**(code **)(**(int **)(param_1 + 0x344) + 100))(*(int **)(param_1 + 0x344),1);
    local_24 = 0x5b8f47;
    FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_10);
    if (local_10 != 0) {
      local_24 = 0x5b8f5b;
      FUN_00466208(*(undefined4 *)(param_1 + 0x300),&stack0xffffffec);
      local_24 = 0x5b8f66;
      FUN_0040343c(unaff_EBX,&local_8);
    }
    if (local_8 == 0) {
      local_24 = 0x5b8fa6;
      (**(code **)(**(int **)(param_1 + 0x344) + 100))(*(int **)(param_1 + 0x344),1);
      local_24 = 0x5b8fb4;
      FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_1c);
      local_24 = 0x5b8fbc;
      iVar3 = FUN_00409ff8(local_1c);
      if (iVar3 < 1) {
        local_24 = 0x5b8fcc;
        FUN_00409dd8(1000,&local_20);
        local_24 = 0x5b8fda;
        FUN_00466238(*(undefined4 *)(param_1 + 0x30c),local_20);
        local_24 = 0x5b8fe7;
        (**(code **)(**(int **)(param_1 + 0x344) + 100))(*(int **)(param_1 + 0x344),0);
      }
      else {
        local_24 = 0x5b8ff7;
        FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_28);
        local_24 = 0x5b8fff;
        iVar3 = FUN_00409ff8(local_28);
        local_24 = 0x5b900d;
        FUN_006468f4(iVar3 * 1000,&local_24);
        uVar1 = local_24;
        local_24 = 0x5b901b;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x324),uVar1);
      }
    }
    else {
      local_24 = 0x5b8f79;
      FUN_00409dd8(1000,&local_18);
      local_24 = 0x5b8f87;
      FUN_00466238(*(undefined4 *)(param_1 + 0x300),local_18);
      local_24 = 0x5b8f94;
      (**(code **)(**(int **)(param_1 + 0x344) + 100))(*(int **)(param_1 + 0x344),0);
    }
  }
  puVar2 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_005b9065;
  local_1c = (undefined1 *)0x5b9030;
  FUN_004048d4(&local_28,local_20,puVar2);
  local_1c = (undefined1 *)0x5b9038;
  FUN_00404ff0(&local_24);
  local_1c = (undefined1 *)0x5b9040;
  FUN_004048d4(&local_20);
  local_1c = (undefined1 *)0x5b9048;
  FUN_004048d4(&local_1c);
  local_1c = (undefined1 *)0x5b9050;
  FUN_004048d4(&local_18);
  local_1c = (undefined1 *)0x5b905d;
  FUN_004048f8(&stack0xffffffec,3);
  return;
}

