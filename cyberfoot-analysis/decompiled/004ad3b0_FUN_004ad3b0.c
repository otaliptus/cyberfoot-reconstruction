// Address: 004ad3b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ad3b0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_stack_00000000;
  int *in_stack_00000004;
  byte *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000018;
  undefined *puVar3;
  undefined4 uVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 local_34 [32];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  uint local_8;
  
  local_c = (uint)in_stack_00000008[1];
  for (uVar2 = local_c; uVar2 != 0; uVar2 = uVar2 - 1) {
  }
  local_14 = &stack0xffffffc0;
  local_8 = (uint)in_stack_00000008[2];
  for (uVar2 = local_8; uVar2 != 0; uVar2 = uVar2 - 1) {
  }
  uVar2 = (uint)*in_stack_00000008;
  if ((uVar2 == 4) &&
     ((local_8 = local_8 + 1, in_stack_00000008[3] == 9 || (in_stack_00000008[3] == 0xd)))) {
    uVar2 = 8;
  }
  local_10 = &stack0xffffffc0;
  uVar7 = 0;
  puVar6 = local_34;
  uVar4 = 0;
  FUN_004ad3a0();
  ppuVar5 = &local_14;
  puVar3 = &DAT_00662590;
  iVar1 = (**(code **)(*in_stack_00000004 + 0x18))();
  if (iVar1 != 0) {
    FUN_004ad2c0(iVar1,local_34,in_stack_00000000,in_stack_00000004,in_stack_0000000c,puVar3,uVar4,
                 uVar2,ppuVar5,in_stack_00000018,puVar6,uVar7);
    return;
  }
  return;
}

