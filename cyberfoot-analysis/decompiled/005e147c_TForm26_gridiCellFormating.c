// Address: 005e147c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm26_gridiCellFormating
               (int param_1,undefined4 param_2,undefined4 param_3,byte param_4,undefined1 *param_5,
               undefined4 *param_6,int param_7)

{
  int iVar1;
  int *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 local_28;
  int *piStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 4;
  do {
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_20 = &LAB_005e1556;
  piStack_24 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&piStack_24;
  if ((param_4 & 8) == 0) {
    local_28 = 0x5e14bb;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x310) + 0x11c))();
    if (param_7 < iVar1) {
      local_28 = 0x5e14d0;
      FUN_0050e4dc(*(undefined4 *)(param_1 + 0x310),"nxinfo1i");
      local_28 = 0x5e14d5;
      iVar1 = FUN_0050a2cc();
      uVar2 = iVar1 == 0;
      if ((bool)uVar2) {
        piStack_24 = &local_8;
        FUN_00416244(&stack0xffffffe8,param_7,0xfc);
        FUN_00416478(&local_28,"nximg1i");
        FUN_0050e448(*(undefined4 *)(param_1 + 0x310),&local_28,&stack0xffffffe8);
        FUN_00405378(local_8,&DAT_005e1590);
        if ((bool)uVar2) {
          *param_6 = 0x800000;
          *param_5 = DAT_005e1594;
        }
      }
    }
  }
  *in_FS_OFFSET = (int)piStack_24;
  puStack_1c = &LAB_005e155d;
  puStack_20 = (undefined1 *)0x5e154d;
  FUN_00405744(&local_28,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x5e1555;
  FUN_00404ff0(&local_8);
  return;
}

