// Address: 004f06a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f06a4(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_004f077f;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_3;
  if (param_2 < 0) {
    FUN_004048d4(param_3);
  }
  else if (*(char *)(param_1 + 0x298) == '\0') {
    puStack_28 = &stack0xfffffffc;
    (**(code **)(**(int **)(param_1 + 0x2b4) + 0xc))
              (*(int **)(param_1 + 0x2b4),param_2,&local_c,param_3);
    uVar2 = local_c;
    FUN_0041f680(*(undefined4 *)(param_1 + 0x2b4),param_2,&local_10);
    iVar3 = FUN_00404ba4(local_10);
    FUN_00404e04(uVar2,iVar3 + 1,0x7fffffff,param_3);
  }
  else {
    puStack_28 = &stack0xfffffffc;
    (**(code **)(**(int **)(param_1 + 0x2b4) + 0xc))
              (*(int **)(param_1 + 0x2b4),param_2,&local_14,param_3);
    uVar2 = local_14;
    FUN_0041f680(*(undefined4 *)(param_1 + 0x2b4),param_2,&local_18);
    iVar3 = FUN_00404ba4(local_18);
    FUN_00404e04(uVar2,iVar3 + 2,0x7fffffff,param_3);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004f0786;
  puStack_2c = (undefined1 *)0x4f077e;
  FUN_004048f8(&local_18,4,puVar1);
  return;
}

