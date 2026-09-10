// Address: 005968b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm27_gfindDblClick(int param_1)

{
  int *piVar1;
  undefined1 **ppuVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_2c [4];
  undefined4 uStack_28;
  undefined1 **ppuStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  iVar5 = 5;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_1c = &LAB_005969cb;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  ppuStack_24 = (undefined1 **)0x5968df;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x344) + 0x11c))();
  if (iVar5 != 0) {
    ppuStack_24 = (undefined1 **)0x5968f5;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x344) + 0x138))();
    if (-1 < iVar5) {
      ppuStack_24 = (undefined1 **)&local_c;
      piVar1 = *(int **)(param_1 + 0x344);
      uStack_28 = 0x596911;
      uVar4 = (**(code **)(*piVar1 + 0x138))();
      ppuStack_24 = (undefined1 **)0x59691d;
      FUN_00416244(&local_1c,uVar4,0xfc);
      ppuStack_24 = &local_1c;
      uStack_28 = 0x59692e;
      FUN_00416478(local_2c,&DAT_005969e0);
      ppuVar2 = ppuStack_24;
      ppuStack_24 = (undefined1 **)0x596939;
      FUN_0050e448(piVar1,local_2c,ppuVar2);
      ppuStack_24 = (undefined1 **)0x596944;
      FUN_00404b6c(&local_8,local_c);
      ppuStack_24 = (undefined1 **)0x59694c;
      iVar5 = FUN_00409ff8(local_8);
      *(undefined4 *)PTR_DAT_0066b2b4 =
           *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar5 * 0x130);
      ppuStack_24 = (undefined1 **)0x596968;
      cVar3 = FUN_00651f8c();
      if (cVar3 == '\0') {
        ppuStack_24 = (undefined1 **)0x596976;
        FUN_00483bc4(DAT_006d2268);
      }
      ppuStack_24 = (undefined1 **)0x59698e;
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00596c58,PTR_DAT_0066ad70);
      ppuStack_24 = (undefined1 **)0x59699a;
      FUN_00483d6c(*(undefined4 *)PTR_DAT_0066ad70);
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005969d2;
  local_1c = (undefined1 *)0x5969ba;
  FUN_00405744(local_2c,PTR_DAT_004010f8,2);
  local_1c = (undefined1 *)0x5969c2;
  FUN_00404ff0(&local_c);
  local_1c = (undefined1 *)0x5969ca;
  FUN_004048d4(&local_8);
  return;
}

