// Address: 004a8b0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004a8b0c(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_44 [64];
  
  uVar2 = FUN_004a63ac(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x138),0);
  iVar3 = FUN_00403c34(uVar2,PTR_PTR_004a55e0);
  *(int *)(param_1 + 0x14) = iVar3;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar3 + 0x458);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x45c);
  FUN_004aa108(*(undefined4 *)(param_1 + 0xc),param_1 + 0x20,param_1 + 0x24);
  uVar2 = FUN_004027fc(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  FUN_0040803c(uVar2,*(undefined4 *)(param_1 + 0x20));
  uVar2 = FUN_004027fc(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  FUN_0040803c(uVar2,*(undefined4 *)(param_1 + 0x20));
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 2) != 0) {
    uVar2 = FUN_004027fc(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 4) != 0) {
    uVar2 = FUN_004027fc(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 8) != 0) {
    uVar2 = FUN_004027fc(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x34) = uVar2;
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 0x10) != 0) {
    uVar2 = FUN_004027fc(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x38) = uVar2;
  }
  FUN_004a5fa0(param_2,*(undefined1 *)(*(int *)(param_1 + 0xc) + 0x12d),
               *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x130),local_44);
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x134);
  if (cVar1 == '\0') {
    FUN_004a8fe0(param_1,param_2,local_44);
  }
  else if (cVar1 == '\x01') {
    FUN_004a9524(param_1,param_2,local_44);
  }
  FUN_004a5ff8(local_44);
  FUN_0040281c(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x20));
  FUN_0040281c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20));
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 2) != 0) {
    FUN_0040281c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x20));
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 4) != 0) {
    FUN_0040281c(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x20));
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 8) != 0) {
    FUN_0040281c(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x20));
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 0x10) != 0) {
    FUN_0040281c(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x20));
  }
  return 1;
}

