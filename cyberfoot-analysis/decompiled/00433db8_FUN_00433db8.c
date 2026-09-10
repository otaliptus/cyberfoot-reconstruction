// Address: 00433db8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00433db8(int param_1,int *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
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
  puStack_24 = &LAB_00433eb9;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_3;
  iVar3 = FUN_00433d08(PTR_LAB_00433a28,1,param_2);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  FUN_0043277c(*(int *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x10) + 8),iVar3);
  (**(code **)(*param_2 + 0x24))(param_2,*(undefined4 *)(iVar3 + 8));
  uVar4 = FUN_00406880(&local_c);
  cVar2 = FUN_0040fe70(param_2,&DAT_00433ec8,uVar4);
  if (cVar2 != '\0') {
    iVar3 = FUN_00433d08(PTR_LAB_00433a28,1,local_c);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
    FUN_0043277c(*(int *)(param_1 + 0x14),*(undefined4 *)(*(int *)(param_1 + 0x14) + 8),iVar3);
  }
  uVar4 = FUN_00406880(&local_10);
  cVar2 = FUN_0040fe70(param_2,&DAT_00433ec8,uVar4);
  if (cVar2 != '\0') {
    iVar3 = FUN_00433d08(PTR_LAB_00433a28,1,local_10);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
    FUN_0043277c(*(int *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x18) + 8),iVar3);
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (param_1 != 0) {
    param_1 = param_1 + 8;
  }
  FUN_004068c4(local_8,param_1,&DAT_00433ec8);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00433ec0;
  puStack_24 = (undefined1 *)0x433eb0;
  FUN_00406880(&local_10,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x433eb8;
  FUN_00406880(&local_c);
  return;
}

