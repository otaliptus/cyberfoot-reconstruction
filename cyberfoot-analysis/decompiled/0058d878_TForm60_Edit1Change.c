// Address: 0058d878
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm60_Edit1Change(int param_1)

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
  local_1c = &LAB_0058da3d;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  local_24 = 0x58d8a7;
  FUN_00466208(*(undefined4 *)(param_1 + 0x304),&local_c);
  if (local_c == 0) {
    local_24 = 0x58d8ba;
    FUN_00466238(*(undefined4 *)(param_1 + 0x314),0);
    local_24 = 0x58d8c7;
    (**(code **)(**(int **)(param_1 + 800) + 100))(*(int **)(param_1 + 800),0);
  }
  else {
    local_24 = 0x58d8da;
    FUN_00466208(*(undefined4 *)(param_1 + 0x304),&local_10);
    if (local_10 != 0) {
      local_24 = 0x58d8ee;
      FUN_00466208(*(undefined4 *)(param_1 + 0x304),&stack0xffffffec);
      local_24 = 0x58d8f9;
      FUN_0040343c(unaff_EBX,&local_8);
    }
    if (local_8 == 0) {
      local_24 = 0x58d91f;
      FUN_00466208(*(undefined4 *)(param_1 + 0x304),&local_18);
      local_24 = 0x58d927;
      iVar3 = FUN_00409ff8(local_18);
      if (iVar3 < 1) {
        local_24 = 0x58d937;
        (**(code **)(**(int **)(param_1 + 800) + 100))(*(int **)(param_1 + 800),0);
      }
      else {
        local_24 = 0x58d94a;
        FUN_00466208(*(undefined4 *)(param_1 + 0x304),&local_24);
        uVar1 = local_24;
        local_24 = 0x58d952;
        iVar3 = FUN_00409ff8(uVar1);
        local_24 = 0x58d960;
        FUN_006468f4(iVar3 * 1000,&local_20);
        local_24 = 0x58d96b;
        FUN_00404b6c(&local_1c,local_20);
        local_24 = 0x58d979;
        FUN_00466238(*(undefined4 *)(param_1 + 0x314),local_1c);
        local_24 = 0x58d987;
        FUN_00466208(*(undefined4 *)(param_1 + 0x304),&local_28);
        local_24 = 0x58d98f;
        iVar3 = FUN_00409ff8(local_28);
        *(int *)PTR_DAT_0066acb8 = iVar3 * 1000;
        if ((float)*(int *)PTR_DAT_0066acb8 * _DAT_0058da4c <=
            (float)*(longlong *)
                    (*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)) {
          local_24 = 0x58d9f5;
          (**(code **)(**(int **)(param_1 + 800) + 100))
                    (*(int **)(param_1 + 800),
                     CONCAT31((int3)((uint)*(int *)PTR_DAT_0066af70 >> 8),1));
          local_24 = 0x58da05;
          FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x314) + 0x68),0);
        }
        else {
          local_24 = 0x58d9d3;
          (**(code **)(**(int **)(param_1 + 800) + 100))(*(int **)(param_1 + 800),0);
          local_24 = 0x58d9e6;
          FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x314) + 0x68),0xff);
        }
      }
    }
    else {
      local_24 = 0x58d90c;
      (**(code **)(**(int **)(param_1 + 800) + 100))(*(int **)(param_1 + 800),0);
    }
  }
  puVar2 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_0058da44;
  local_1c = (undefined1 *)0x58da1f;
  FUN_004048f8(&local_28,2,puVar2);
  local_1c = (undefined1 *)0x58da27;
  FUN_00404ff0(&local_20);
  local_1c = (undefined1 *)0x58da2f;
  FUN_004048d4(&local_1c);
  local_1c = (undefined1 *)0x58da3c;
  FUN_004048f8(&local_18,4);
  return;
}

