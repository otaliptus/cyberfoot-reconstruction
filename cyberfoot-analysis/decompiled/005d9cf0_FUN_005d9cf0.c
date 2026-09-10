// Address: 005d9cf0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005d9cf0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 **ppuVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined1 **ppuStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 5;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  puStack_24 = &LAB_005d9dc1;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  ppuStack_2c = (undefined1 **)0x5d9d1f;
  FUN_00645508(param_2,&local_8);
  if (local_8 != 0) {
    ppuStack_2c = (undefined1 **)0x5d9d31;
    piVar3 = (int *)FUN_004aa034(PTR_LAB_004a5420,1);
    ppuStack_2c = (undefined1 **)0x5d9d3d;
    FUN_00645508(param_2,&local_c);
    if (local_c != 0) {
      ppuStack_2c = (undefined1 **)0x5d9d4d;
      FUN_00645508(param_2,&local_10);
      ppuStack_2c = (undefined1 **)0x5d9d57;
      (**(code **)(*piVar3 + 0x4c))(piVar3,local_10);
    }
    piVar1 = *(int **)(param_1 + 0x2fc);
    ppuStack_2c = (undefined1 **)0x5d9d67;
    iVar4 = (**(code **)(*piVar1 + 0x11c))();
    ppuStack_2c = (undefined1 **)0x5d9d74;
    FUN_00416244(&local_20,iVar4 + -1,0xfc);
    ppuStack_2c = &local_20;
    local_30 = 0x5d9d85;
    FUN_00416478(&local_30,"nximg2");
    ppuVar2 = ppuStack_2c;
    ppuStack_2c = (undefined1 **)0x5d9d90;
    iVar4 = FUN_004f77e4(piVar1,&local_30,ppuVar2);
    *(int **)(iVar4 + 8) = piVar3;
  }
  *in_FS_OFFSET = uStack_28;
  local_20 = &LAB_005d9dc8;
  puStack_24 = (undefined1 *)0x5d9db3;
  FUN_00405744(&local_30,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x5d9dc0;
  FUN_004048f8(&local_10,3);
  return;
}

