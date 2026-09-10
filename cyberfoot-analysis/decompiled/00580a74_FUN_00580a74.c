// Address: 00580a74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00580a74(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(int *)(param_1 + 0x20c) = param_2;
  if (param_2 == -0xfffff1) {
    *(undefined4 *)(param_1 + 0x1e8) = 0xff000014;
    *(undefined4 *)(param_1 + 0x1ec) = 0xff000010;
    *(undefined4 *)(param_1 + 0x1f0) = 0xff000016;
    *(undefined4 *)(param_1 + 500) = 0xff000015;
  }
  else {
    FUN_00429e64(param_2);
    bVar1 = FUN_004080c8();
    uVar2 = FUN_00584770(param_1,bVar1 + 0x40);
    FUN_00429e64(param_2);
    bVar1 = FUN_004080c4();
    uVar3 = FUN_00584770(param_1,bVar1 + 0x40);
    FUN_00429e64(param_2);
    bVar1 = FUN_004080c0();
    uVar4 = FUN_00584770(param_1,bVar1 + 0x40);
    uVar2 = FUN_004080a4(uVar4,uVar3,uVar2);
    *(undefined4 *)(param_1 + 0x1e8) = uVar2;
    FUN_00429e64(param_2);
    bVar1 = FUN_004080c8();
    uVar2 = FUN_00584770(param_1,bVar1 - 0x40);
    FUN_00429e64(param_2);
    bVar1 = FUN_004080c4();
    uVar3 = FUN_00584770(param_1,bVar1 - 0x40);
    FUN_00429e64(param_2);
    bVar1 = FUN_004080c0();
    uVar4 = FUN_00584770(param_1,bVar1 - 0x40);
    uVar2 = FUN_004080a4(uVar4,uVar3,uVar2);
    *(undefined4 *)(param_1 + 0x1ec) = uVar2;
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x1e8);
    *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x1ec);
  }
  if (*(char *)(param_1 + 0x169) == '\0') {
    *(undefined1 *)(param_1 + 0x260) = 3;
  }
  FUN_00584518(param_1);
  FUN_00466754(param_1);
  return;
}

