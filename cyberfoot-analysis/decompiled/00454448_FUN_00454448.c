// Address: 00454448
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00454448(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_103c;
  undefined1 *puStack_1038;
  undefined1 *puStack_1034;
  int local_1024;
  undefined1 local_1020;
  undefined1 auStack_101f [27];
  int iStack_1004;
  int local_20;
  undefined4 local_1c;
  byte local_18;
  byte local_17;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1034 = &stack0xfffffffc;
  local_1024 = 0;
  local_c = 0;
  puStack_1038 = &LAB_00454613;
  uStack_103c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_103c;
  iStack_1004 = param_1;
  local_8 = param_2;
  iVar3 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x218),param_3);
  cVar2 = FUN_00403c10(iVar3,PTR_PTR_004481e0);
  local_14 = iVar3;
  if (cVar2 == '\0') {
    FUN_004032a8(&local_20,0x14,0);
    local_17 = DAT_00662e02;
    local_20 = *(int *)(iVar3 + 0x48);
    local_1c = 0xffffffff;
    if ((*(char *)(iVar3 + 0x57) == '\0') && ((*(byte *)(iVar3 + 0x1c) & 0x10) == 0)) {
      local_18 = local_18 | DAT_00662df2;
    }
    local_10 = 0xffffffff;
  }
  else {
    FUN_004032a8(&local_20,0x14,0);
    if ((byte)(*(byte *)(iVar3 + 0x17d) - 3) < 2) {
      local_20 = *(int *)(iVar3 + 0x48);
    }
    else {
      local_20 = *(int *)(iVar3 + 0x16c);
      if (local_20 < 0) {
        local_20 = -2;
      }
    }
    local_17 = (&DAT_00662dfc)[(*(byte *)(iVar3 + 0x17d) & 0x7f) * 2];
    local_1c = param_3;
    if ((*(char *)(iVar3 + 0x169) != '\0') && (iVar4 = FUN_004498ac(), 0x40046 < iVar4)) {
      local_17 = local_17 | 0x10;
    }
    local_18 = FUN_004538b4(iVar3);
    if (*(char *)(iVar3 + 0x16b) != '\0') {
      local_17 = local_17 | 4;
    }
    if (*(char *)(param_1 + 0x227) == '\0') {
      local_10 = 0xffffffff;
    }
    else {
      FUN_00466208(iVar3,&local_1024);
      if (local_1024 == 0) {
        FUN_0040496c(&local_c,&DAT_00454630);
      }
      else {
        FUN_00466208(iVar3,&local_c);
      }
      FUN_0040a7f8(&local_1020,local_c);
      iVar3 = FUN_00404ba4(local_c);
      auStack_101f[iVar3] = 0;
      local_10 = FUN_004673cc(param_1,0x41c,0,&local_1020);
    }
  }
  FUN_004673cc(param_1,local_8,param_4,&local_20);
  puVar1 = puStack_1034;
  *in_FS_OFFSET = uStack_103c;
  puStack_1034 = &LAB_0045461a;
  puStack_1038 = (undefined1 *)0x45460a;
  FUN_004048d4(&local_1024,uStack_103c,puVar1);
  puStack_1038 = (undefined1 *)0x454612;
  FUN_004048d4(&local_c);
  return;
}

