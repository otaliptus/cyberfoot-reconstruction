// Address: 00585204
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00585204(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_14 [16];
  
  FUN_0041c990(*(undefined4 *)(param_1 + 0x184),*(undefined4 *)(param_1 + 0x184),
               *(undefined4 *)(param_1 + 0x188),local_14,*(undefined4 *)(param_1 + 0x18c));
  uVar4 = *(undefined4 *)(param_1 + 0x200);
  uVar2 = 1;
  uVar3 = uVar4;
  uVar1 = FUN_00430280(*(undefined4 *)(param_1 + 0x1f8));
  FUN_0043a3e0(uVar1,local_14,uVar4,uVar2,uVar3);
  FUN_0041c990(*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 400),
               *(undefined4 *)(param_1 + 0x194),local_14,*(undefined4 *)(param_1 + 0x198));
  if (*(char *)(param_1 + 0x210) != '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x1dc);
    uVar3 = *(undefined4 *)(param_1 + 0x214);
    uVar1 = FUN_00430280(*(undefined4 *)(param_1 + 0x1f8));
    FUN_0043a3e0(uVar1,local_14,*(undefined4 *)(param_1 + 0x1d8),uVar3,uVar4);
  }
  FUN_0041c990(*(undefined4 *)(param_1 + 0x19c),*(undefined4 *)(param_1 + 0x19c),
               *(undefined4 *)(param_1 + 0x1a0),local_14,*(undefined4 *)(param_1 + 0x1a4));
  if (*(char *)(param_1 + 0x211) != '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x1e4);
    uVar3 = *(undefined4 *)(param_1 + 0x214);
    uVar1 = FUN_00430280(*(undefined4 *)(param_1 + 0x1f8));
    FUN_0043a3e0(uVar1,local_14,*(undefined4 *)(param_1 + 0x1e0),uVar3,uVar4);
  }
  return;
}

