// Address: 0063101c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm9_list1CellClick(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_00631109;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uVar4 = param_3 == 1;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if ((bool)uVar4) {
    (**(code **)(**(int **)(param_1 + 0x308) + 0x100))
              (*(int **)(param_1 + 0x308),1,param_4,&local_c);
    FUN_00405378(local_c,&DAT_00631120);
    if ((bool)uVar4) {
      (**(code **)(**(int **)(local_8 + 0x308) + 0x194))
                (*(int **)(local_8 + 0x308),1,param_4,&DAT_00631128);
      puVar1 = puStack_20;
    }
    else {
      (**(code **)(**(int **)(local_8 + 0x308) + 0x194))
                (*(int **)(local_8 + 0x308),1,param_4,&DAT_00631120);
      puVar1 = puStack_20;
    }
  }
  puStack_20 = puVar1;
  iVar2 = (**(code **)(**(int **)(local_8 + 0x308) + 0x11c))();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      (**(code **)(**(int **)(local_8 + 0x308) + 0x100))
                (*(int **)(local_8 + 0x308),1,iVar3,&local_10);
      FUN_00405378(local_10,&DAT_00631128);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00631110;
  puStack_24 = (undefined1 *)0x631108;
  FUN_00405008(&local_10,2,puVar1);
  return;
}

