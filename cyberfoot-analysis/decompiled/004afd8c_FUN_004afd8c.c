// Address: 004afd8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004afd8c(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  char local_14 [8];
  undefined2 *local_c;
  undefined2 *local_8;
  
  puStack_20 = (undefined1 *)0x4afdaa;
  local_c = param_3;
  local_8 = param_2;
  FUN_004032a8(local_14,8,0);
  puStack_20 = (undefined1 *)0x0;
  puStack_24 = (undefined1 *)0x4afdba;
  piVar3 = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,param_1);
  puStack_24 = &LAB_004afe4a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  (**(code **)(*piVar3 + 0xc))(piVar3,local_14,8);
  iVar5 = 8;
  pcVar4 = local_14;
  pcVar6 = &DAT_00669584;
  do {
    if (*pcVar4 != *pcVar6) {
      FUN_004042fc();
      return;
    }
    pcVar6 = pcVar6 + 1;
    pcVar4 = pcVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  (**(code **)(*piVar3 + 0x14))(piVar3,0x12,0);
  uVar2 = FUN_004afbfc(piVar3);
  *local_8 = uVar2;
  (**(code **)(*piVar3 + 0x14))(piVar3,0x16,0);
  uVar2 = FUN_004afbfc(piVar3);
  puVar1 = puStack_20;
  *local_c = uVar2;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x4afe51;
  puStack_24 = (undefined1 *)0x4afe49;
  FUN_00403a84(piVar3,uStack_28,puVar1);
  return;
}

