// Address: 004c552c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c552c(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 *in_stack_ffffffc8;
  undefined4 uVar6;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined1 local_d;
  byte *local_c;
  undefined4 *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_004c562b;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  bVar1 = *param_1;
  local_8 = param_2;
  if ((bVar1 == 0) || (0x40 < bVar1)) {
    puStack_24 = &stack0xfffffffc;
    FUN_00406d44(PTR_PTR_0066b178,&local_14);
    uVar6 = 0x4c556c;
    FUN_004c2530(local_14);
    param_2 = in_stack_ffffffc8;
  }
  else {
    local_d = (param_1[1] & 0x80) != 0;
    uVar3 = (uint)bVar1;
    local_c = param_1 + 2;
    if ((param_1[1] & 0x3f) == 0) {
      iVar4 = uVar3 + 1;
      pbVar2 = local_c;
    }
    else {
      iVar4 = (int)(char)(bVar1 - (param_1[1] & 0x3f));
      pbVar2 = (byte *)0x0;
    }
    uVar6 = CONCAT31((int3)((uint)pbVar2 >> 8),local_d);
    FUN_004c53e4(local_c,uVar3,iVar4,param_2,uVar3 == (param_1[1] & 0x3f));
    if ((*(char *)*local_8 == '-') || (*(char *)*local_8 == '0')) {
      bVar5 = true;
      FUN_00404cf0(*local_8,&DAT_004c5644);
      if (!bVar5) {
        FUN_00404cf0(*local_8,&DAT_004c5650);
        if (!bVar5) {
          FUN_00404cf0(*local_8,&DAT_004c565c);
          if (!bVar5) goto LAB_004c5615;
        }
      }
      FUN_00404928(local_8,&DAT_004c566c);
    }
  }
LAB_004c5615:
  *in_FS_OFFSET = param_2;
  FUN_004048d4(&local_14,param_2,uVar6,&LAB_004c5632);
  return;
}

