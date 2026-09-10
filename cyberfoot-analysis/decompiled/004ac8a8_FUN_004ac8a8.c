// Address: 004ac8a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ac8a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 auStackY_1810 [1511];
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 **ppuVar7;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_4c;
  undefined4 local_48;
  CHAR local_44 [16];
  undefined4 local_34;
  undefined4 auStack_30 [3];
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  DWORD local_8;
  
  bVar4 = 0;
  local_48 = 0;
  local_4c = 0;
  puStack_5c = (undefined1 *)0x4ac8cd;
  FUN_00405628(&local_14,PTR_DAT_0041acac);
  puStack_60 = &LAB_004ac9ec;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  puStack_5c = &stack0xfffffffc;
  if (DAT_006694ac == (code *)0x0) {
    puStack_5c = &stack0xfffffffc;
    FUN_0040e42c(PTR_DAT_00408738,1,PTR_LAB_0066ace4);
    FUN_00404250();
  }
  FUN_004032a8(local_24,0x10,0);
  local_20 = FUN_00405250(param_1);
  local_34 = DAT_004ac9fc;
  auStack_30[(uint)bVar4 * -2] = (&DAT_004aca00)[(uint)bVar4 * -2];
  auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       (&DAT_004aca04)[(uint)bVar4 * -2 + (uint)bVar4 * -2];
  (auStack_30 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       (&DAT_004aca04 + (uint)bVar4 * -2 + (uint)bVar4 * -2)[(uint)bVar4 * -2 + 1];
  local_14 = &local_34;
  FUN_00406880(&local_10);
  local_c = 0;
  iVar1 = FUN_00405260(param_1);
  if (iVar1 < 1) {
    uVar3 = 0x15;
  }
  else {
    local_8 = 0x10;
    BVar2 = GetComputerNameA(local_44,&local_8);
    if (BVar2 != 0) {
      FUN_00404b6c(&local_48,param_1);
      uVar3 = local_48;
      FUN_00404b54(&local_4c,local_44,0x10);
      iVar1 = FUN_00409790(local_4c,uVar3);
      if (iVar1 == 0) {
        uVar3 = 0x15;
        goto LAB_004ac998;
      }
    }
    uVar3 = 0x10;
  }
LAB_004ac998:
  ppuVar7 = &local_14;
  uVar6 = 1;
  puVar5 = local_24;
  (*DAT_006694ac)();
  FUN_004ac7a4();
  FUN_004ac7a4(local_c);
  FUN_00406898(param_3,local_10);
  *in_FS_OFFSET = param_2;
  FUN_004048f8(&local_4c,2,uVar3,&LAB_004ac9f3,puVar5,uVar6,ppuVar7);
  FUN_004056f8(&local_14,PTR_DAT_0041acac);
  return;
}

