// Address: 0058826c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm91_Edit1Change(int param_1)

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
  local_1c = &LAB_00588443;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  local_24 = 0x58829b;
  FUN_00466208(*(undefined4 *)(param_1 + 0x358),&local_c);
  if (local_c == 0) {
    local_24 = 0x5882ae;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x35c),0);
    local_24 = 0x5882bb;
    (**(code **)(**(int **)(param_1 + 0x378) + 100))(*(int **)(param_1 + 0x378),0);
  }
  else {
    local_24 = 0x5882ce;
    FUN_00466208(*(undefined4 *)(param_1 + 0x358),&local_10);
    if (local_10 != 0) {
      local_24 = 0x5882e2;
      FUN_00466208(*(undefined4 *)(param_1 + 0x358),&stack0xffffffec);
      local_24 = 0x5882ed;
      FUN_0040343c(unaff_EBX,&local_8);
    }
    local_24 = 0x5882fa;
    FUN_00466128(*(undefined4 *)(param_1 + 0x35c),1);
    if (local_8 == 0) {
      local_24 = 0x588320;
      FUN_00466208(*(undefined4 *)(param_1 + 0x358),&local_18);
      local_24 = 0x588328;
      iVar3 = FUN_00409ff8(local_18);
      if (iVar3 < 1) {
        local_24 = 0x588338;
        (**(code **)(**(int **)(param_1 + 0x378) + 100))(*(int **)(param_1 + 0x378),0);
      }
      else {
        local_24 = 0x58834b;
        FUN_00466208(*(undefined4 *)(param_1 + 0x358),&local_24);
        uVar1 = local_24;
        local_24 = 0x588353;
        iVar3 = FUN_00409ff8(uVar1);
        local_24 = 0x588361;
        FUN_006468f4(iVar3 * 1000,&local_20);
        local_24 = 0x588371;
        FUN_004052cc(&local_1c,&DAT_00588454,local_20);
        local_24 = 0x58837f;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x35c),local_1c);
        local_24 = 0x58838d;
        FUN_00466208(*(undefined4 *)(param_1 + 0x358),&local_28);
        local_24 = 0x588395;
        iVar3 = FUN_00409ff8(local_28);
        *(int *)PTR_DAT_0066acb8 = iVar3 * 1000;
        if ((float)*(int *)PTR_DAT_0066acb8 * _DAT_00588458 <=
            (float)*(longlong *)
                    (*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)) {
          local_24 = 0x5883fb;
          (**(code **)(**(int **)(param_1 + 0x378) + 100))
                    (*(int **)(param_1 + 0x378),
                     CONCAT31((int3)((uint)*(int *)PTR_DAT_0066af70 >> 8),1));
          local_24 = 0x58840e;
          FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x35c) + 0x68),0xffffff);
        }
        else {
          local_24 = 0x5883d9;
          (**(code **)(**(int **)(param_1 + 0x378) + 100))(*(int **)(param_1 + 0x378),0);
          local_24 = 0x5883ec;
          FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x35c) + 0x68),0xff);
        }
      }
    }
    else {
      local_24 = 0x58830d;
      (**(code **)(**(int **)(param_1 + 0x378) + 100))(*(int **)(param_1 + 0x378),0);
    }
  }
  puVar2 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_0058844a;
  local_1c = (undefined1 *)0x588428;
  FUN_004048f8(&local_28,2,puVar2);
  local_1c = (undefined1 *)0x588435;
  FUN_00405008(&local_20,2);
  local_1c = (undefined1 *)0x588442;
  FUN_004048f8(&local_18,4);
  return;
}

