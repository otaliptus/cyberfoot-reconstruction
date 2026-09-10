// Address: 00580678
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00580678(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  
  *(undefined4 *)(param_1 + 0x228) = param_2;
  FUN_00429e64(param_2);
  bVar4 = FUN_004080c0();
  fVar2 = *(float *)(*(int *)(param_1 + 0x230) + 0x10);
  iVar1 = *(int *)(*(int *)(param_1 + 0x230) + 8);
  fVar3 = *(float *)(*(int *)(param_1 + 0x230) + 0xc);
  FUN_00429e64(param_2);
  bVar5 = FUN_004080c0();
  *(float *)(param_1 + 0x1a8) =
       (((float)iVar1 + (float)bVar4 * fVar2) / fVar3 + (float)bVar5) /
       (float)*(int *)(*(int *)(param_1 + 0x230) + 0x14);
  FUN_00429e64(param_2);
  bVar4 = FUN_004080c4();
  fVar2 = *(float *)(*(int *)(param_1 + 0x230) + 0x10);
  iVar1 = *(int *)(*(int *)(param_1 + 0x230) + 8);
  fVar3 = *(float *)(*(int *)(param_1 + 0x230) + 0xc);
  FUN_00429e64(param_2);
  bVar5 = FUN_004080c4();
  *(float *)(param_1 + 0x1ac) =
       (((float)iVar1 + (float)bVar4 * fVar2) / fVar3 + (float)bVar5) /
       (float)*(int *)(*(int *)(param_1 + 0x230) + 0x14);
  FUN_00429e64(param_2);
  bVar4 = FUN_004080c8();
  fVar2 = *(float *)(*(int *)(param_1 + 0x230) + 0x10);
  iVar1 = *(int *)(*(int *)(param_1 + 0x230) + 8);
  fVar3 = *(float *)(*(int *)(param_1 + 0x230) + 0xc);
  FUN_00429e64(param_2);
  bVar5 = FUN_004080c8();
  *(float *)(param_1 + 0x1b0) =
       (((float)iVar1 + (float)bVar4 * fVar2) / fVar3 + (float)bVar5) /
       (float)*(int *)(*(int *)(param_1 + 0x230) + 0x14);
  if (*(char *)(param_1 + 0x169) == '\0') {
    *(undefined1 *)(param_1 + 0x260) = 3;
  }
  FUN_00466754(param_1);
  return;
}

