// Address: 005f5fb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f5fb4(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = (undefined1 *)0x5f5fca;
  local_8 = param_3;
  FUN_00405608(&local_8);
  puStack_1c = &LAB_005f6061;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (0 < param_2) {
    puStack_18 = &stack0xfffffffc;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x308) + 0x11c))();
    if (iVar2 < param_2 + -1) goto LAB_005f604b;
  }
  (**(code **)(**(int **)(param_1 + 0x308) + 0x1f0))(*(int **)(param_1 + 0x308),param_2);
  (**(code **)(**(int **)(param_1 + 0x308) + 0x194))(*(int **)(param_1 + 0x308),2,param_2,local_8);
  (**(code **)(**(int **)(param_1 + 0x308) + 0x194))
            (*(int **)(param_1 + 0x308),1,param_2,&DAT_005f6074);
  (**(code **)(**(int **)(param_1 + 0x308) + 0x194))
            (*(int **)(param_1 + 0x308),0,param_2,&DAT_005f607c);
LAB_005f604b:
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005f6068;
  puStack_1c = (undefined1 *)0x5f6060;
  FUN_00404ff0(&local_8,uStack_20,puVar1);
  return;
}

