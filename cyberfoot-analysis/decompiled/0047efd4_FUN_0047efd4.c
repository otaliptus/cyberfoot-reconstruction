// Address: 0047efd4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047efd4(int param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  int local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined1 local_a;
  undefined1 local_9;
  int local_8;
  
  local_a = (undefined1)param_3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar3 = (uint)(*(char *)(param_1 + 0x18) == '\x01');
  local_9 = param_2;
  local_8 = param_1;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar1 = FUN_0047e8e8(param_1,param_2,param_3);
    iVar1 = *(int *)(local_8 + 0x10) - iVar1;
    *(int *)(local_8 + 0x14) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(local_8 + 0x14) = 0;
    }
  }
  local_26 = 0x1c;
  local_22 = 0x17;
  local_1e = 0;
  if (*(int *)(local_8 + 0x14) < 1) {
    local_1a = 0;
  }
  else {
    local_1a = *(undefined4 *)(local_8 + 0x10);
  }
  local_16 = FUN_0047e8e8(local_8,local_9,local_a);
  local_16 = local_16 + 1;
  local_12 = *(undefined4 *)(local_8 + 0xc);
  local_e = local_12;
  FUN_0047eecc(*(undefined1 *)(local_8 + 0x44));
  *(undefined1 *)(local_8 + 0x44) = 0;
  uVar5 = 0xffffffff;
  puVar4 = &local_26;
  uVar2 = FUN_0046cae0(*(undefined4 *)(local_8 + 4));
  (**(code **)PTR_DAT_0066b378)();
  FUN_0047ed50(local_8,*(undefined4 *)(local_8 + 0xc));
  iVar1 = FUN_0047e8e8(local_8,1,0,uVar2,uVar3,puVar4,uVar5);
  uVar3 = (iVar1 * 9) / 10;
  *(short *)(local_8 + 10) = (short)uVar3;
  if (*(char *)(local_8 + 0x1f) != '\0') {
    *(short *)(local_8 + 8) = (short)((ulonglong)(uVar3 & 0xffff) / 10);
  }
  return;
}

