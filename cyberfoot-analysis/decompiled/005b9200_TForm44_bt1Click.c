// Address: 005b9200
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm44_bt1Click(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [16];
  undefined1 local_30 [4];
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  local_10 = 7;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_20 = &LAB_005b93f8;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x5b9230;
  cVar3 = (**(code **)(**(int **)(param_1 + 0x304) + 200))();
  if (cVar3 == '\0') {
    puStack_28 = (undefined1 *)0x5b92de;
    FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_10);
    if (local_10 == 0) {
      puStack_28 = (undefined1 *)0x5b92f4;
      FUN_00466238(*(undefined4 *)(param_1 + 0x30c),&DAT_005b9410);
    }
    *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + DAT_006d2b10 * 0x130) = 1;
    puStack_28 = (undefined1 *)0x5b9316;
    FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&stack0xffffffec);
    puStack_28 = (undefined1 *)0x5b931e;
    iVar4 = FUN_00409ff8(unaff_EBX);
    *(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x48 + DAT_006d2b10 * 0x130) =
         (longlong)ROUND((float)(iVar4 * 1000) * _DAT_005b9414);
    puStack_28 = (undefined1 *)0x5b9352;
    FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_20);
    puStack_28 = (undefined1 *)0x5b935a;
    iVar4 = FUN_00409ff8(local_20);
    puStack_28 = (undefined1 *)0x5b9368;
    FUN_0064d948(iVar4 * 1000,&local_1c);
    puStack_28 = local_1c;
    piVar1 = *(int **)(*(int *)PTR_DAT_0066b054 + 0x334);
    uStack_2c = 0x5b9383;
    uVar5 = (**(code **)(*piVar1 + 0x138))();
    puStack_28 = (undefined1 *)0x5b938f;
    FUN_00416244(local_30,uVar5,0xfc);
    puStack_28 = local_30;
    uStack_2c = 0x5b93a0;
    FUN_00416478(local_40,"passe");
    puVar2 = puStack_28;
    puStack_28 = (undefined1 *)0x5b93b0;
    FUN_0050e9b8(piVar1,local_40,puVar2);
    puStack_28 = (undefined1 *)0x5b93ba;
    FUN_00483bc4(DAT_006d2b0c);
  }
  else {
    *(int *)PTR_DAT_0066ad44 = DAT_006d2b10;
    puStack_28 = (undefined1 *)0x5b9253;
    FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_8);
    if (local_8 == 0) {
      puStack_28 = (undefined1 *)0x5b9269;
      FUN_00466238(*(undefined4 *)(param_1 + 0x300),&DAT_005b9410);
    }
    puStack_28 = (undefined1 *)0x5b9277;
    FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_c);
    puStack_28 = (undefined1 *)0x5b927f;
    iVar4 = FUN_00409ff8(local_c);
    *(int *)PTR_DAT_0066b0a4 = iVar4 * 1000;
    *PTR_DAT_0066b668 = 1;
    *PTR_DAT_0066af24 = 1;
    puStack_28 = (undefined1 *)0x5b92a7;
    FUN_00483bc4(DAT_006d2b0c);
    puStack_28 = (undefined1 *)0x5b92bf;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005a2804,PTR_DAT_0066b0b0);
    puStack_28 = (undefined1 *)0x5b92cb;
    FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b0b0);
  }
  *in_FS_OFFSET = uStack_24;
  local_1c = &LAB_005b93ff;
  local_20 = (undefined1 *)0x5b93da;
  FUN_00405744(local_40,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5b93e2;
  FUN_004048d4(&local_20);
  local_20 = (undefined1 *)0x5b93ea;
  FUN_00404ff0(&local_1c);
  local_20 = (undefined1 *)0x5b93f7;
  FUN_004048f8(&stack0xffffffec,4);
  return;
}

