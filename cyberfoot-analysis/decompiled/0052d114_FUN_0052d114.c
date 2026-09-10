// Address: 0052d114
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0052d114(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_9;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_0052d1be;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_2;
  iVar2 = FUN_0052ce44(param_1,*param_3);
  if (iVar2 < 1) {
    local_9 = 0;
  }
  else {
    local_9 = 1;
    uVar3 = FUN_00404ba4(param_1);
    FUN_00404e44(param_3,iVar2,uVar3);
    FUN_00404e04(*param_3,1,iVar2 + -1,&local_10);
    puVar4 = &local_14;
    uVar3 = FUN_00404ba4(*param_3);
    FUN_00404e04(*param_3,iVar2,uVar3,puVar4);
    FUN_00404c64(param_3,3);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0052d1c5;
  puStack_28 = (undefined1 *)0x52d1bd;
  FUN_004048f8(&local_14,2,puVar1);
  return;
}

