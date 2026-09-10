// Address: 00569120
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_contatitulares(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_005691bd;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = 0;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
  if (0 < iVar2) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
    if (-1 < iVar2 + -1) {
      uVar3 = iVar2 == 0;
      local_8 = 0;
      do {
        (**(code **)(**(int **)(param_1 + 0x33c) + 0x100))
                  (*(int **)(param_1 + 0x33c),1,local_8,&local_10);
        FUN_00405378(local_10,&LAB_005691d4);
        if ((bool)uVar3) {
          local_c = local_c + 1;
        }
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
        uVar3 = iVar2 == 0;
      } while (!(bool)uVar3);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005691c4;
  puStack_24 = (undefined1 *)0x5691bc;
  FUN_00404ff0(&local_10,uStack_28,puVar1);
  return;
}

