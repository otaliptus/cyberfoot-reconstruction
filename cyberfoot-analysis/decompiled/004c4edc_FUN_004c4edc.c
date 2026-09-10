// Address: 004c4edc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x004c4f97) */

void FUN_004c4edc(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  byte bVar7;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_34 [9];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar7 = 0;
  local_10 = 0;
  puStack_44 = (undefined1 *)0x4c4efa;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_44 = (undefined1 *)0x4c4f02;
  FUN_00404d94(local_c);
  puStack_48 = &LAB_004c4fc5;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  pcVar2 = (char *)FUN_00404da4(local_8);
  bVar6 = *pcVar2 == '-';
  if (bVar6) {
    puVar4 = &local_8;
    iVar3 = FUN_00404ba4(local_8);
    FUN_00404e04(local_8,2,iVar3 + -1,puVar4);
  }
  pcVar2 = (char *)FUN_00404da4(local_c);
  if (*pcVar2 == '-') {
    bVar6 = !bVar6;
    puVar4 = &local_c;
    iVar3 = FUN_00404ba4(local_c);
    FUN_00404e04(local_c,2,iVar3 + -1,puVar4);
  }
  FUN_004c3bcc(local_8,local_c,&local_10);
  FUN_004c2d5c(local_10,local_34);
  puVar1 = puStack_44;
  puVar4 = local_34;
  puVar5 = param_3;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
  if (bVar6) {
    *(byte *)((int)param_3 + 1) = *(byte *)((int)param_3 + 1) & 0x3f | 0x80;
  }
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_004c4fcc;
  puStack_48 = (undefined1 *)0x4c4fc4;
  FUN_004048f8(&local_10,3,puVar1);
  return;
}

