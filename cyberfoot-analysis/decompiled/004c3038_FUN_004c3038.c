// Address: 004c3038
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c3038(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5
                 ,int *param_6,int param_7,int param_8,undefined4 *param_9)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined1 **ppuVar6;
  undefined1 *in_stack_ffffffd0;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar4 = 4;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  LOCK();
  UNLOCK();
  local_20 = (undefined1 *)0x4c3065;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  local_20 = (undefined1 *)0x4c306d;
  FUN_00404d94(local_c);
  local_24 = &LAB_004c31d0;
  local_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  uVar5 = CONCAT31((int3)((uint)PTR_DAT_0066b70c >> 8),*PTR_DAT_0066b70c);
  *param_4 = 0;
  local_20 = &stack0xfffffffc;
  iVar4 = FUN_004c2f84(local_8,local_c);
  if (iVar4 < 2) {
    FUN_00404928(param_9,local_8);
    FUN_00404928(0,local_c);
    *param_6 = param_7;
    *param_5 = param_8;
  }
  else {
    FUN_00404928(0,local_8);
    FUN_00404928(param_9,local_c);
    *param_6 = param_8;
    *param_5 = param_7;
  }
  FUN_00404abc(&stack0xffffffec,uVar5);
  iVar4 = FUN_00404ee8(unaff_EBX,uRam00000000);
  FUN_00404abc(&stack0xffffffe8,uVar5);
  iVar2 = FUN_00404ee8(unaff_ESI,*param_9);
  if ((iVar4 == 0) && (iVar2 == 0)) {
    *param_4 = -0xff;
  }
  else {
    if (0 < iVar4) {
      uVar3 = (uint)DAT_004c31e0;
      in_stack_ffffffd0 = &stack0xffffffe4;
      FUN_00404abc(&local_20,uVar5);
      FUN_0040f7c8(uRam00000000,local_20,0,in_stack_ffffffd0,uVar3);
      FUN_00404928(0,unaff_EDI);
      *param_4 = *param_6 - iVar4;
      *param_6 = *param_6 + -1;
    }
    if (0 < iVar2) {
      uVar3 = (uint)DAT_004c31e0;
      ppuVar6 = &local_24;
      FUN_00404abc(&local_28,uVar5);
      FUN_0040f7c8(*param_9,local_28,0,ppuVar6,uVar3);
      FUN_00404928(param_9,local_24);
      *param_4 = *param_4 + (*param_5 - iVar2);
      *param_5 = *param_5 + -1;
    }
  }
  puVar1 = local_28;
  *in_FS_OFFSET = (int)in_stack_ffffffd0;
  local_28 = &LAB_004c31d7;
  FUN_004048f8(&local_28,6,puVar1);
  FUN_004048f8(&local_c,2);
  return;
}

