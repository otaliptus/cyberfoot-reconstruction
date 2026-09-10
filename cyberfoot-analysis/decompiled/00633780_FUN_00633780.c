// Address: 00633780
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00633780(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_1c = &LAB_00633900;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004060a8(&local_8,PTR_DAT_00633758,1,0);
  iVar6 = 0;
  iVar5 = 0x16e;
  piVar4 = (int *)(PTR_DAT_0066b574 + 0x10);
  do {
    if (*piVar4 == 10) {
      iVar6 = iVar6 + 1;
      FUN_004060a8(&local_8,PTR_DAT_00633758,1,iVar6);
      local_8[iVar6 * 2 + -2] = piVar4[-2];
      local_8[iVar6 * 2 + -1] = piVar4[-1];
    }
    piVar4 = piVar4 + 6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar2 = FUN_006454a8(4,0x1d,*(int *)(PTR_DAT_0066ac78 + 0xc0) + -1);
  uVar3 = FUN_006454a8(6,0x1d,*(int *)(PTR_DAT_0066ac78 + 0xc0) + -1);
  FUN_0065a1c0(uVar2,uVar3,1,*local_8,local_8[1],0xffffffff,0xffffffff,0x1d,10);
  FUN_0065a1c0(uVar3,uVar2,2,local_8[2],local_8[3],0xffffffff,0xffffffff,0x1d,10);
  uVar2 = FUN_006454a8(4,3,*(int *)(PTR_DAT_0066ac78 + 0xc0) + -1);
  uVar3 = FUN_006454a8(6,3,*(int *)(PTR_DAT_0066ac78 + 0xc0) + -1);
  FUN_0065a1c0(uVar2,uVar3,1,*local_8,local_8[1],0xffffffff,0xffffffff,3,10);
  FUN_0065a1c0(uVar3,uVar2,2,local_8[2],local_8[3],0xffffffff,0xffffffff,3,10);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00633907;
  puStack_1c = (undefined1 *)0x6338ff;
  FUN_004061c8(&local_8,PTR_DAT_00633758,puVar1);
  return;
}

