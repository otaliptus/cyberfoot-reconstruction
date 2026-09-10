// Address: 005d5868
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d5868(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  puVar2 = PTR_DAT_0066af70;
  puVar1 = PTR_DAT_0066ac78;
  uVar3 = FUN_005d5ad8(0x1d,param_2,param_3,param_3);
  *(undefined4 *)(puVar1 + 0x4bc) = uVar3;
  uVar3 = FUN_005d5ad8(0x34);
  *(undefined4 *)(puVar1 + 0x4c0) = uVar3;
  uVar3 = FUN_005d5ad8(0x83);
  *(undefined4 *)(puVar1 + 0x4c4) = uVar3;
  uVar3 = FUN_005d5ad8(0x24);
  *(undefined4 *)(puVar1 + 0x4c8) = uVar3;
  uVar3 = FUN_005d5ad8(0x41);
  *(undefined4 *)(puVar1 + 0x4cc) = uVar3;
  uVar3 = FUN_005d5ad8(0x55);
  *(undefined4 *)(puVar1 + 0x4d0) = uVar3;
  uVar3 = FUN_005d5ad8(0x2a);
  *(undefined4 *)(puVar1 + 0x4d4) = uVar3;
  uVar3 = FUN_005d5ad8(0xe);
  *(undefined4 *)(puVar1 + 0x4d8) = uVar3;
  uVar3 = FUN_005d5ad8(0x2e);
  *(undefined4 *)(puVar1 + 0x4dc) = uVar3;
  uVar3 = FUN_005d5ad8(0x4e);
  *(undefined4 *)(puVar1 + 0x4e0) = uVar3;
  uVar3 = FUN_005d5ad8(0x32);
  *(undefined4 *)(puVar1 + 0x4e4) = uVar3;
  uVar3 = FUN_005d5ad8(0x6b);
  *(undefined4 *)(puVar1 + 0x4e8) = uVar3;
  uVar3 = FUN_005d5ad8(0xc3);
  *(undefined4 *)(puVar1 + 0x4ec) = uVar3;
  uVar3 = FUN_005d5ad8(0x33);
  *(undefined4 *)(puVar1 + 0x4f0) = uVar3;
  uVar3 = FUN_005d5ad8(0x61);
  *(undefined4 *)(puVar1 + 0x4f4) = uVar3;
  uVar3 = FUN_005d5ad8(0x68);
  *(undefined4 *)(puVar1 + 0x4f8) = uVar3;
  uVar3 = FUN_005d5ad8(0xb4);
  *(undefined4 *)(puVar1 + 0x4fc) = uVar3;
  uVar3 = FUN_005d5ad8(0x3c);
  *(undefined4 *)(puVar1 + 0x500) = uVar3;
  uVar3 = FUN_005d5ad8(0x48);
  *(undefined4 *)(puVar1 + 0x504) = uVar3;
  uVar3 = FUN_005d5ad8(0x56);
  *(undefined4 *)(puVar1 + 0x508) = uVar3;
  uVar3 = FUN_005d5ad8(0xb);
  *(undefined4 *)(puVar1 + 0x50c) = uVar3;
  uVar3 = FUN_005d5ad8(0x1b);
  *(undefined4 *)(puVar1 + 0x510) = uVar3;
  uVar3 = FUN_005d5ad8(0x62);
  *(undefined4 *)(puVar1 + 0x514) = uVar3;
  uVar3 = FUN_005d5ad8(0x8d);
  *(undefined4 *)(puVar1 + 0x518) = uVar3;
  uVar3 = FUN_005d5ad8(3);
  *(undefined4 *)(puVar1 + 0x51c) = uVar3;
  uVar3 = FUN_005d5ad8(0x9a);
  *(undefined4 *)(puVar1 + 0x520) = uVar3;
  uVar3 = FUN_005d5ad8(0x4b);
  *(undefined4 *)(puVar1 + 0x524) = uVar3;
  uVar3 = FUN_005d5ad8(0x44);
  *(undefined4 *)(puVar1 + 0x528) = uVar3;
  uVar3 = FUN_005d5ad8(0x15);
  *(undefined4 *)(puVar1 + 0x52c) = uVar3;
  uVar3 = FUN_005d5ad8(10);
  *(undefined4 *)(puVar1 + 0x530) = uVar3;
  uVar3 = FUN_005d5ad8(0xa2);
  *(undefined4 *)(puVar1 + 0x534) = uVar3;
  uVar3 = FUN_005d5ad8(0x31);
  *(undefined4 *)(puVar1 + 0x538) = uVar3;
  iVar5 = 1;
  piVar7 = (int *)(puVar1 + 0x4bc);
  do {
    iVar6 = 1;
    piVar4 = piVar7;
    do {
      *(int *)(*(int *)puVar2 + 0x5c + *piVar4 * 0x2f8) = iVar6;
      *(int *)(*(int *)puVar2 + 0x94 + *piVar4 * 0x2f8) = iVar5;
      *(undefined1 *)(*(int *)puVar2 + 0x215 + *piVar4 * 0x2f8) = 1;
      _DAT_006d3340 = _DAT_006d3340 + 1;
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar6 != 5);
    iVar5 = iVar5 + 1;
    piVar7 = piVar7 + 4;
  } while (iVar5 != 9);
  puVar1[0x709] = 0;
  return;
}

