// Address: 0056d564
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_Button4Click(int param_1)

{
  bool bVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBX;
  undefined1 *unaff_ESI;
  undefined1 **unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 **local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_c;
  
  local_1c = &stack0xfffffffc;
  iVar6 = 5;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_20 = &LAB_0056d6f2;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  iVar6 = DAT_006d1f00;
  bVar1 = false;
  local_28 = (undefined1 *)0x56d59e;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
  if (iVar4 < iVar6) {
    iVar6 = 0;
    DAT_006d1f00 = 0;
  }
  local_28 = (undefined1 *)0x56d5b9;
  FUN_00466208(*(undefined4 *)(param_1 + 1000),&stack0xfffffff0);
  if (unaff_EBX != 0) {
    local_28 = (undefined1 *)0x56d5d1;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
    if (iVar6 <= iVar4 + -1) {
      local_c = ((iVar4 + -1) - iVar6) + 1;
      do {
        local_28 = &stack0xffffffec;
        local_2c = &local_20;
        (**(code **)(**(int **)(param_1 + 0x2f8) + 0x100))(*(int **)(param_1 + 0x2f8),1,iVar6);
        local_2c = (undefined1 **)0x56d606;
        FUN_00404b6c(&local_1c,local_20);
        local_2c = (undefined1 **)0x56d611;
        FUN_0056d118(local_1c,&stack0xffffffe8);
        local_2c = unaff_EDI;
        FUN_00466208(*(undefined4 *)(param_1 + 1000),&local_24);
        uVar5 = FUN_00404ba4(local_24);
        ppuVar2 = local_2c;
        local_2c = (undefined1 **)0x56d635;
        FUN_00404e04(ppuVar2,0,uVar5);
        local_2c = (undefined1 **)0x56d647;
        local_28 = unaff_ESI;
        FUN_00466208(*(undefined4 *)(param_1 + 1000),&local_2c);
        ppuVar2 = local_2c;
        local_2c = (undefined1 **)0x56d652;
        FUN_0056d118(ppuVar2,&local_28);
        puVar3 = local_28;
        local_28 = (undefined1 *)0x56d65b;
        iVar4 = FUN_00409790(puVar3,puVar3);
        if (iVar4 == 0) {
          local_28 = (undefined1 *)0x56d66f;
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0x1b0))(*(int **)(param_1 + 0x2f8),iVar6);
          local_28 = (undefined1 *)0x56d67d;
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0xc4))();
          local_28 = (undefined1 *)0x56d68a;
          FUN_00466238(*(undefined4 *)(param_1 + 0x3ec),0);
          DAT_006d1f00 = iVar6 + 1;
          bVar1 = true;
          break;
        }
        iVar6 = iVar6 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  puVar3 = local_1c;
  if (!bVar1) {
    DAT_006d1f00 = 0;
  }
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_0056d6f9;
  local_20 = (undefined1 *)0x56d6c4;
  FUN_004048d4(&local_2c,local_24,puVar3);
  local_20 = (undefined1 *)0x56d6cc;
  FUN_004048d4(&local_28);
  local_20 = (undefined1 *)0x56d6d4;
  FUN_004048d4(&local_24);
  local_20 = (undefined1 *)0x56d6dc;
  FUN_00404ff0(&local_20);
  local_20 = (undefined1 *)0x56d6e9;
  FUN_004048f8(&local_1c,3);
  local_20 = (undefined1 *)0x56d6f1;
  FUN_004048d4(&stack0xfffffff0);
  return;
}

