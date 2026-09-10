// Address: 005f7970
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f7970(int param_1)

{
  undefined4 **ppuVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int *in_FS_OFFSET;
  undefined1 uVar5;
  bool bVar6;
  undefined4 **local_2c;
  undefined1 **local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_18 = &stack0xfffffffc;
  iVar4 = 5;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_1c = &LAB_005f7b38;
  local_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_20;
  local_24 = &local_8;
  uVar5 = 1;
  local_28 = (undefined1 **)0x5f79a7;
  (**(code **)(**(int **)(param_1 + 0x308) + 0x100))(*(int **)(param_1 + 0x308),0,0);
  local_28 = (undefined1 **)0x5f79b4;
  FUN_00405378(local_8,&LAB_005f7b4c);
  if ((bool)uVar5) {
    local_28 = &local_c;
    local_2c = (undefined4 **)0x5f79cf;
    (**(code **)(**(int **)(param_1 + 0x308) + 0x100))(*(int **)(param_1 + 0x308),0,1);
    bVar6 = true;
    local_2c = (undefined4 **)0x5f79d9;
    FUN_00405378(local_c);
    if (!bVar6) {
      local_2c = (undefined4 **)&stack0xffffffec;
      (**(code **)(**(int **)(param_1 + 0x308) + 0x100))(*(int **)(param_1 + 0x308),0,1);
      FUN_00404b6c(&stack0xfffffff0,unaff_ESI);
      uVar3 = FUN_00409ff8(unaff_EBX);
      FUN_005f7c28(param_1,uVar3);
      (**(code **)(**(int **)(param_1 + 0x308) + 0x1b0))(*(int **)(param_1 + 0x308),1);
    }
  }
  else {
    local_28 = &local_18;
    local_2c = (undefined4 **)0x5f7a42;
    (**(code **)(**(int **)(param_1 + 0x308) + 0x100))(*(int **)(param_1 + 0x308),0,0);
    bVar6 = true;
    local_2c = (undefined4 **)0x5f7a4c;
    FUN_00405378(local_18);
    if (!bVar6) {
      local_2c = (undefined4 **)&local_20;
      (**(code **)(**(int **)(param_1 + 0x308) + 0x100))(*(int **)(param_1 + 0x308),0,0);
      local_2c = (undefined4 **)0x5f7a73;
      FUN_00404b6c(&local_1c,local_20);
      local_2c = (undefined4 **)0x5f7a7b;
      iVar4 = FUN_00409ff8(local_1c);
      if (-1 < iVar4) {
        local_2c = &local_24;
        (**(code **)(**(int **)(param_1 + 0x308) + 0x100))(*(int **)(param_1 + 0x308),0,0);
        bVar6 = true;
        local_2c = (undefined4 **)0x5f7a9f;
        FUN_00405378(local_24);
        if (!bVar6) {
          local_2c = (undefined4 **)0x5f7ab1;
          (**(code **)(**(int **)(param_1 + 0x308) + 0x1b0))(*(int **)(param_1 + 0x308),0);
          local_2c = &local_2c;
          (**(code **)(**(int **)(param_1 + 0x308) + 0x100))(*(int **)(param_1 + 0x308),0,0);
          ppuVar1 = local_2c;
          local_2c = (undefined4 **)0x5f7ad2;
          FUN_00404b6c(&local_28,ppuVar1);
          local_2c = (undefined4 **)0x5f7ada;
          uVar3 = FUN_00409ff8(local_28);
          local_2c = (undefined4 **)0x5f7ae3;
          FUN_005f7c28(param_1,uVar3);
        }
      }
    }
  }
  puVar2 = local_20;
  *in_FS_OFFSET = (int)local_28;
  local_20 = &LAB_005f7b3f;
  local_24 = (undefined4 *)0x5f7af8;
  FUN_00404ff0(&local_2c,local_28,puVar2);
  local_24 = (undefined4 *)0x5f7b00;
  FUN_004048d4(&local_28);
  local_24 = (undefined4 *)0x5f7b0d;
  FUN_00405008(&local_24,2);
  local_24 = (undefined4 *)0x5f7b15;
  FUN_004048d4(&local_1c);
  local_24 = (undefined4 *)0x5f7b22;
  FUN_00405008(&local_18,2);
  local_24 = (undefined4 *)0x5f7b2a;
  FUN_004048d4(&stack0xfffffff0);
  local_24 = (undefined4 *)0x5f7b37;
  FUN_00405008(&local_c,2);
  return;
}

