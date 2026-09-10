// Address: 0041a058
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041a058(undefined4 *param_1,uint param_2,char param_3,int *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  char local_9;
  uint local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_0041a10c;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_9 = param_3;
  local_8 = param_2;
  FUN_004048d4(param_4);
  uVar2 = local_8;
  iVar3 = FUN_00419c28(*(undefined4 *)*param_1);
  local_10 = **(undefined4 **)(iVar3 + 1);
  uVar4 = 0;
  do {
    bVar5 = uVar4 < 0x1f;
    if (uVar4 < 0x20) {
      bVar5 = (uVar2 >> (uVar4 & 0x1f) & 1) != 0;
    }
    if (bVar5) {
      if (*param_4 != 0) {
        FUN_00404bac(param_4,&DAT_0041a124);
      }
      FUN_00419c34(local_10,uVar4,&local_14);
      FUN_00404bac(param_4,local_14);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x20);
  if (local_9 != '\0') {
    FUN_00404c64(param_4,3);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0041a113;
  puStack_28 = (undefined1 *)0x41a10b;
  FUN_004048d4(&local_14,uStack_2c,puVar1);
  return;
}

