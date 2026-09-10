// Address: 00421d48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00421d48(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  local_c = 0;
  puStack_24 = &LAB_00421e57;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar6 = param_1[0xc];
  local_8 = param_1;
  if (iVar6 == 0) {
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_00421e5e;
    puStack_24 = (undefined1 *)0x421e56;
    FUN_004048d4(&local_c,uStack_28,&stack0xfffffffc);
    return;
  }
  puStack_30 = &LAB_00421e3a;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_10 = *(int *)(iVar6 + 8);
  if (-1 < local_10 + -1) {
    iVar6 = 0;
    puStack_2c = &stack0xfffffffc;
    puStack_20 = &stack0xfffffffc;
    do {
      puVar3 = (undefined4 *)FUN_0041e01c(local_8[0xc],iVar6);
      FUN_0040496c(&local_c,puVar3[5]);
      (**(code **)(*local_8 + 0x20))(local_8,&local_c);
      iVar4 = FUN_00421638(puVar3[2],local_c);
      FUN_0041e01c(local_8[0xc],iVar6);
      FUN_00421ccc();
      if (iVar4 == 0) {
        cVar2 = FUN_0042155c(puVar3);
        if (cVar2 == '\0') goto LAB_00421e12;
        uVar5 = FUN_0041e01c(local_8[0xc],iVar6);
        FUN_0041e394(DAT_0066c868,uVar5);
        FUN_0041e168(local_8[0xc],iVar6,0);
      }
      else {
LAB_00421e12:
        (**(code **)*puVar3)(puVar3,iVar4);
      }
      iVar6 = iVar6 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = (undefined1 *)0x421e41;
  puStack_30 = (undefined1 *)0x421e39;
  FUN_00421e8c(local_8,uStack_34,puVar1);
  return;
}

