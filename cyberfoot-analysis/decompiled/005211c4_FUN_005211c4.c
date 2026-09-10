// Address: 005211c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005211c4(int param_1,int *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_005212ac;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  uVar2 = FUN_005169dc(param_2);
  puVar1 = puStack_1c;
  while (uVar2 = uVar2 & 0xff, uVar2 != 0) {
    puStack_1c = puVar1;
    uVar3 = FUN_005169dc(param_2);
    iVar5 = uVar2 - 1;
    if ((uVar3 & 7) == 1) {
      if (iVar5 < 2) {
        FUN_00406d44(&PTR_DAT_005166dc,&local_c);
        FUN_00516934(local_c);
      }
      FUN_005169f8(param_2,local_8 + 0x18,2);
      iVar5 = uVar2 - 3;
      uVar4 = extraout_var_00;
    }
    else {
      uVar4 = extraout_var;
      if ((uVar3 & 7) == 2) {
        if (iVar5 < 4) {
          FUN_00406d44(&PTR_DAT_005166dc,&local_10);
          FUN_00516934(local_10);
        }
        FUN_005169f8(param_2,local_8 + 0x1c,4);
        iVar5 = uVar2 - 5;
        uVar4 = extraout_var_01;
      }
    }
    if (0 < iVar5) {
      (**(code **)(*param_2 + 0x14))(param_2,iVar5,CONCAT22(uVar4,1));
    }
    uVar2 = FUN_005169dc(param_2);
    puVar1 = puStack_1c;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005212b3;
  puStack_20 = (undefined1 *)0x5212ab;
  FUN_004048f8(&local_10,2,puVar1);
  return;
}

