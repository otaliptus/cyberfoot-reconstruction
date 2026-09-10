// Address: 004e30dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e30dc(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_004e315e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_3;
  if (param_2 < 0) {
    FUN_004048d4(param_3);
  }
  else {
    puStack_20 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xc))(param_1,param_2,&local_c,param_3);
    uVar2 = local_c;
    FUN_0041f680(param_1,param_2,&local_10);
    iVar3 = FUN_00404ba4(local_10);
    FUN_00404e04(uVar2,iVar3 + 2,0x7fffffff,param_3);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004e3165;
  puStack_24 = (undefined1 *)0x4e315d;
  FUN_004048f8(&local_10,2,puVar1);
  return;
}

