// Address: 0051ded0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051ded0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar5;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  int local_c;
  int local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_20 = 0;
  puStack_38 = &LAB_0051e05c;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_c = *(int *)(param_1 + 8);
  puVar5 = &stack0xfffffffc;
  local_8 = param_1;
  if (local_c == 0) {
    puStack_40 = (undefined1 *)0x51df0d;
    cVar2 = FUN_0051d25c(param_1);
    puVar5 = puStack_34;
    if (cVar2 == '\0') {
      puStack_44 = &LAB_0051e02b;
      uStack_48 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_48;
      uStack_4c = 0;
      uStack_50 = 0;
      puStack_54 = (undefined1 *)0x0;
      puStack_58 = local_1c;
      puStack_5c = (undefined1 *)0x51df38;
      puStack_40 = &stack0xfffffffc;
      FUN_0041c990(0,0,0);
      puStack_54 = local_1c;
      puStack_58 = (undefined1 *)0x51df49;
      FUN_00406d44(&PTR_DAT_00516774,&local_20);
      puStack_58 = (undefined1 *)local_20;
      puStack_5c = (undefined1 *)0x51df61;
      FUN_00403c80(*(undefined4 *)(local_8 + 4),local_8,0);
      puStack_60 = &LAB_0051e01a;
      uStack_64 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_64;
      puStack_5c = &stack0xfffffffc;
      cVar2 = FUN_00524238(*(undefined4 *)(local_8 + 4));
      if (cVar2 == '\0') {
        uVar3 = FUN_0051db04(local_8);
        *(undefined4 *)(local_8 + 8) = uVar3;
      }
      else {
        uVar3 = FUN_0051d564(local_8);
        *(undefined4 *)(local_8 + 8) = uVar3;
      }
      puVar5 = puStack_5c;
      local_c = *(undefined4 *)(local_8 + 8);
      *in_FS_OFFSET = uStack_64;
      puStack_5c = &DAT_0051e021;
      puStack_60 = (undefined1 *)0x51dfb7;
      iVar4 = FUN_0040288c(0,uStack_64,puVar5);
      if (iVar4 == 0) {
        puStack_60 = (undefined1 *)0x64;
      }
      else {
        puStack_60 = (undefined1 *)0x0;
      }
      iVar4 = *(int *)(local_8 + 4);
      uStack_64 = CONCAT31((int3)((uint)local_8 >> 8),*(undefined1 *)(iVar4 + 0x22));
      FUN_0041c990(0,0,0,local_1c,0);
      puVar5 = local_1c;
      FUN_00406d44(&PTR_DAT_00516774,&local_24);
      FUN_00403c80(iVar4,local_8,2,local_24,puVar5);
      piVar1 = *(int **)(local_8 + 4);
      if (*(char *)((int)piVar1 + 0x22) != '\0') {
        (**(code **)(*piVar1 + 0x10))(piVar1,local_8);
      }
      return;
    }
  }
  puStack_34 = puVar5;
  puVar5 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0051e063;
  puStack_38 = (undefined1 *)0x51e05b;
  FUN_004048f8(&local_24,2,puVar5);
  return;
}

