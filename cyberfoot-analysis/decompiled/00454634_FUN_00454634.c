// Address: 00454634
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00454634(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_104c;
  undefined1 *puStack_1048;
  undefined1 *puStack_1044;
  int local_1034;
  undefined1 local_1030;
  undefined1 auStack_102f [43];
  int iStack_1004;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  int local_24;
  undefined1 local_20;
  byte local_1f;
  undefined2 local_1e;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1044 = &stack0xfffffffc;
  local_1034 = 0;
  local_10 = 0;
  puStack_1048 = &LAB_004547fb;
  uStack_104c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_104c;
  iStack_1004 = param_1;
  local_c = param_3;
  local_8 = param_2;
  iVar3 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x218),param_3);
  FUN_004032a8(&local_30,0x20,0);
  local_30 = 0x20;
  cVar2 = FUN_00403c10(iVar3,PTR_PTR_004481e0);
  local_1c = iVar3;
  if (cVar2 == '\0') {
    local_2c = 0x7e;
    local_1f = DAT_00662e02;
    local_1e = *(undefined2 *)(iVar3 + 0x48);
    local_28 = 0xffffffff;
    local_18 = (undefined1 *)0x0;
    local_14 = 0;
  }
  else {
    local_2c = 0x7c;
    if (1 < (byte)(*(byte *)(iVar3 + 0x17d) - 3)) {
      local_2c = 0x7d;
      local_24 = *(int *)(iVar3 + 0x16c);
      if (local_24 < 0) {
        local_24 = -2;
      }
    }
    local_28 = local_c;
    local_1e = *(undefined2 *)(iVar3 + 0x48);
    local_1f = (&DAT_00662dfc)[(*(byte *)(iVar3 + 0x17d) & 0x7f) * 2];
    if (*(char *)(iVar3 + 0x169) != '\0') {
      local_1f = local_1f | 0x10;
    }
    if (*(char *)(iVar3 + 0x16b) != '\0') {
      local_1f = local_1f | 4;
    }
    local_20 = FUN_004538b4(iVar3);
    if (*(char *)(param_1 + 0x227) == '\0') {
      local_18 = (undefined1 *)0x0;
      local_14 = 0;
    }
    else {
      FUN_00466208(iVar3,&local_1034);
      if (local_1034 == 0) {
        FUN_0040496c(&local_10,&DAT_00454818);
      }
      else {
        FUN_00466208(iVar3,&local_10);
      }
      FUN_0040a7f8(&local_1030,local_10);
      iVar3 = FUN_00404ba4(local_10);
      auStack_102f[iVar3] = 0;
      local_18 = &local_1030;
      local_14 = FUN_00404ba4(local_10);
      local_2c = local_2c | 2;
    }
  }
  FUN_004673cc(param_1,local_8,param_4,&local_30);
  puVar1 = puStack_1044;
  *in_FS_OFFSET = uStack_104c;
  puStack_1044 = &LAB_00454802;
  puStack_1048 = (undefined1 *)0x4547f2;
  FUN_004048d4(&local_1034,uStack_104c,puVar1);
  puStack_1048 = (undefined1 *)0x4547fa;
  FUN_004048d4(&local_10);
  return;
}

