// Address: 0058c760
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm55_GridCellColoring
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
               undefined4 *param_6,int param_7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_0058c892;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  local_8 = param_3;
  if ((-1 < param_7) && (puVar1 = &stack0xfffffffc, param_3 == 0)) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x30c) + 0x11c))();
    puVar1 = puStack_20;
    if (param_7 < iVar2) {
      (**(code **)(**(int **)(param_1 + 0x30c) + 0x100))
                (*(int **)(param_1 + 0x30c),local_8,param_7,&local_c);
      bVar3 = true;
      FUN_00405378(local_c);
      puVar1 = puStack_20;
      if (!bVar3) {
        FUN_0042a3a0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30c) + 0x208) + 0xc),0x800000);
        FUN_0042a66c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30c) + 0x208) + 0xc),DAT_0058c8a4
                    );
        *param_6 = 0xc1ffff;
        puVar1 = puStack_20;
      }
    }
  }
  puStack_20 = puVar1;
  if ((-1 < param_7) && (0 < local_8)) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x30c) + 0x11c))();
    if (param_7 < iVar2) {
      (**(code **)(**(int **)(param_1 + 0x30c) + 0x100))
                (*(int **)(param_1 + 0x30c),0,param_7,&local_10);
      bVar3 = true;
      FUN_00405378(local_10);
      if (!bVar3) {
        FUN_0042a3a0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30c) + 0x208) + 0xc),0x800000);
        FUN_0042a66c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30c) + 0x208) + 0xc),DAT_0058c8a4
                    );
        *param_6 = 0xc1ffff;
      }
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0058c899;
  puStack_24 = (undefined1 *)0x58c891;
  FUN_00405008(&local_10,2,puVar1);
  return;
}

