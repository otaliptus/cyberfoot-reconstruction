// Address: 004c5040
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x004c5148) */

void FUN_004c5040(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  bool bVar7;
  byte bVar8;
  int *piVar9;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_3c [9];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  bVar8 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  puStack_4c = (undefined1 *)0x4c5064;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_4c = (undefined1 *)0x4c506c;
  FUN_00404d94(local_c);
  bVar7 = true;
  puStack_50 = &LAB_004c5176;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  FUN_00404cf0(local_c,&DAT_004c518c);
  if ((bVar7) || (local_c == 0)) {
    FUN_00406d44(PTR_PTR_0066b638,&local_14);
    FUN_004c2518(local_14);
  }
  bVar4 = *(byte *)((int)param_3 + 1) & 0x3f;
  if (bVar4 == 0) {
    bVar4 = 10;
  }
  pcVar2 = (char *)FUN_00404da4(local_8);
  bVar7 = *pcVar2 == '-';
  if (bVar7) {
    puVar5 = &local_8;
    iVar3 = FUN_00404ba4(local_8);
    FUN_00404e04(local_8,2,iVar3 + -1,puVar5);
  }
  pcVar2 = (char *)FUN_00404da4(local_c);
  if (*pcVar2 == '-') {
    bVar7 = !bVar7;
    piVar9 = &local_c;
    iVar3 = FUN_00404ba4(local_c);
    FUN_00404e04(local_c,2,iVar3 + -1,piVar9);
  }
  FUN_004c42ac(local_8,local_c,&local_18);
  FUN_004c2e10(local_18,bVar4,&local_10);
  FUN_004c2d5c(local_10,local_3c);
  puVar1 = puStack_4c;
  puVar5 = local_3c;
  puVar6 = param_3;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  if (bVar7) {
    *(byte *)((int)param_3 + 1) = *(byte *)((int)param_3 + 1) & 0x3f | 0x80;
  }
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_004c517d;
  puStack_50 = (undefined1 *)0x4c5175;
  FUN_004048f8(&local_18,5,puVar1);
  return;
}

