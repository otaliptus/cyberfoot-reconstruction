// Address: 00566450
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm79_XiButton3Click(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_00566571;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  FUN_00466208(*(undefined4 *)(param_1 + 0x328),&local_c);
  if (local_c != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x300) + 0x11c))();
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      local_8 = iVar2;
      do {
        puVar6 = &local_14;
        (**(code **)(**(int **)(param_1 + 0x300) + 0x100))
                  (*(int **)(param_1 + 0x300),1,iVar4,&local_18,puVar6);
        uVar5 = local_18;
        FUN_00466208(*(undefined4 *)(param_1 + 0x328),&local_1c);
        uVar3 = FUN_00404ba4(local_1c);
        FUN_004053fc(uVar5,0,uVar3,puVar6);
        FUN_00404b6c(&local_10,local_14);
        uVar5 = local_10;
        FUN_00466208(*(undefined4 *)(param_1 + 0x328),&local_20);
        iVar2 = FUN_00409790(uVar5,local_20);
        if (iVar2 == 0) {
          (**(code **)(**(int **)(param_1 + 0x300) + 0x1b0))(*(int **)(param_1 + 0x300),iVar4);
          (**(code **)(**(int **)(param_1 + 0x300) + 0xc4))();
          break;
        }
        iVar4 = iVar4 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00566578;
  puStack_34 = (undefined1 *)0x566553;
  FUN_004048f8(&local_20,2,puVar1);
  puStack_34 = (undefined1 *)0x566560;
  FUN_00405008(&local_18,2);
  puStack_34 = (undefined1 *)0x566568;
  FUN_004048d4(&local_10);
  puStack_34 = (undefined1 *)0x566570;
  FUN_004048d4(&local_c);
  return;
}

