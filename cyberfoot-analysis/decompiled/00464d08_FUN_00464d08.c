// Address: 00464d08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00464d08(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    puStack_10 = (undefined1 *)0x464d21;
    FUN_0042b624(param_1);
  }
  else {
    if (*(int *)(param_1 + 0x5c) == 0) {
      puStack_10 = (undefined1 *)0x464d39;
      iVar2 = FUN_0041e41c(DAT_0066cba4);
      puStack_14 = &LAB_00464d8d;
      uStack_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_18;
      puStack_10 = &stack0xfffffffc;
      if (3 < *(int *)(iVar2 + 8)) {
        puStack_10 = &stack0xfffffffc;
        FUN_00464b74();
      }
      uVar3 = (**(code **)(**(int **)(param_1 + 0x58) + 0x48))
                        (*(int **)(param_1 + 0x58),param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      FUN_0041dec0(iVar2,param_1);
      puVar1 = puStack_10;
      *in_FS_OFFSET = uStack_18;
      puStack_10 = (undefined1 *)0x464d94;
      puStack_14 = (undefined1 *)0x464d8c;
      FUN_0041e480(DAT_0066cba4,uStack_18,puVar1);
      return;
    }
    puStack_10 = (undefined1 *)0x464da2;
    FUN_0042b628(param_1,*(undefined4 *)(param_1 + 0x5c));
    puStack_10 = (undefined1 *)0x464daa;
    FUN_00464dfc(param_1);
  }
  return;
}

