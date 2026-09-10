// Address: 004c53e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c53e4(int param_1,short param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_c;
  
  puStack_2c = (undefined1 *)0x4c5402;
  iVar3 = FUN_0040952c(param_2 + 3);
  puStack_30 = &LAB_004c54d3;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  cVar1 = *PTR_DAT_0066b70c;
  local_c = 0;
  iVar5 = 0;
  puStack_2c = &stack0xfffffffc;
  while (0 < param_2) {
    uVar4 = FUN_004c5368(*(byte *)(param_1 + iVar5) >> 4);
    if (0 < param_2) {
      FUN_004c5368(CONCAT31((int3)((uint)uVar4 >> 8),*(undefined1 *)(param_1 + iVar5)) & 0xffffff0f)
      ;
    }
    iVar5 = iVar5 + 1;
  }
  while (((('\0' < param_3 && (param_3 < '\0')) && (1 < local_c)) &&
         (*(char *)(iVar3 + -1 + local_c) == '0'))) {
    local_c = local_c + -1;
    *(undefined1 *)(iVar3 + local_c) = 0;
  }
  if (*(char *)(iVar3 + -1 + local_c) == cVar1) {
    local_c = local_c + -1;
  }
  *(undefined1 *)(iVar3 + local_c) = 0;
  FUN_004049c4(param_4,iVar3,local_c);
  puVar2 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004c54da;
  puStack_30 = (undefined1 *)0x4c54d2;
  FUN_0040281c(iVar3,param_2 + 2,puVar2);
  return;
}

