// Address: 005a4354
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005a4354(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  iVar2 = 4;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  LOCK();
  UNLOCK();
  local_c = 0;
  local_24 = &LAB_005a451a;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  DAT_006d24f0 = 0;
  local_8 = param_1;
  if (param_2 == 1) {
    puStack_2c = (undefined1 *)0x5a43a2;
    local_20 = &stack0xfffffffc;
    FUN_0043bf7c(*(undefined4 *)(param_1 + 0x37c),1);
    puStack_2c = (undefined1 *)0x5a43af;
    FUN_00642c50(0x175,&stack0xffffffec);
    puStack_30 = &DAT_005a4530;
    uStack_34 = 0x5a43ce;
    FUN_00405194(&stack0xffffffe8,*(int *)PTR_DAT_0066af70 + local_c * 0x2f8);
    uStack_34 = unaff_ESI;
    FUN_006468f4(param_4,&stack0xffffffe4);
    FUN_00405330(&local_10,7);
    puStack_2c = (undefined1 *)0x5a440c;
    FUN_004e1414(*(undefined4 *)(local_8 + 0x39c),local_10);
    puStack_2c = (undefined1 *)0x5a4417;
    FUN_00645508(local_c,&local_20);
    if (local_20 == (undefined1 *)0x0) {
      puStack_30 = &LAB_005a4469;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      FUN_0043aa68(*(undefined4 *)(local_8 + 0x378),0);
      *in_FS_OFFSET = uStack_34;
    }
    else {
      puStack_2c = (undefined1 *)0x5a4428;
      FUN_00645508(local_c,&local_24);
      puStack_2c = (undefined1 *)0x5a443f;
      FUN_0042d6c0(*(undefined4 *)(*(int *)(local_8 + 0x378) + 0x168),local_24);
    }
    puStack_2c = (undefined1 *)0x5a4481;
    FUN_00650ec4(param_5,local_c,param_4);
    puVar1 = local_20;
  }
  else {
    puVar1 = &stack0xfffffffc;
    if (param_2 == 0) {
      puStack_2c = (undefined1 *)0x5a449a;
      FUN_0043bf7c(*(undefined4 *)(param_1 + 0x37c),1);
      puStack_30 = &LAB_005a44c2;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      FUN_0043aa68(*(undefined4 *)(local_8 + 0x378),0);
      puVar1 = puStack_2c;
      *in_FS_OFFSET = uStack_34;
      puStack_2c = (undefined1 *)0x5a44d9;
      FUN_00642c50(0x174,&local_28,puVar1);
      puStack_2c = (undefined1 *)0x5a44ea;
      FUN_004e1414(*(undefined4 *)(local_8 + 0x39c),local_28);
      puVar1 = local_20;
    }
  }
  local_20 = puVar1;
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005a4521;
  local_24 = (undefined1 *)0x5a44ff;
  FUN_00404ff0(&local_28,local_28,puVar1);
  local_24 = (undefined1 *)0x5a450c;
  FUN_004048f8(&local_24,2);
  local_24 = (undefined1 *)0x5a4519;
  FUN_00405008(&stack0xffffffe4,4);
  return;
}

