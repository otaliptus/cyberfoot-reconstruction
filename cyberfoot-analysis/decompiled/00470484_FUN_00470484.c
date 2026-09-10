// Address: 00470484
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00470484(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  int aiStack_17f8 [1531];
  
  bVar5 = 0;
  if ((((*(byte *)(*(int *)(param_1 + 0x14) + 0x1c) & 1) == 0) && (*(int *)(param_1 + 100) != 0)) &&
     (iVar2 = FUN_0046b530(*(int *)(param_1 + 0x14)), 0 < iVar2)) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),aiStack_17f8 + 0x5f7)
    ;
    (**(code **)(**(int **)(param_1 + 0x14) + 0x8c))(*(int **)(param_1 + 0x14),aiStack_17f8 + 0x5f7)
    ;
    if ((param_2 != '\0') ||
       (cVar1 = FUN_00409658(aiStack_17f8 + 0x5f7,param_1 + 0x1d,0x10), cVar1 == '\0')) {
      piVar3 = (int *)(param_1 + 0x21 + (uint)bVar5 * -8);
      *(int *)(param_1 + 0x1d) = aiStack_17f8[0x5f7];
      piVar4 = piVar3 + (uint)bVar5 * -2 + 1;
      *piVar3 = aiStack_17f8[(uint)bVar5 * -2 + 0x5f8];
      *piVar4 = aiStack_17f8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x5f9];
      piVar4[(uint)bVar5 * -2 + 1] =
           (aiStack_17f8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x5f9)[(uint)bVar5 * -2 + 1];
      iVar2 = *(int *)(param_1 + 100);
      if (*(char *)(iVar2 + 0x10) == '\x01') {
        FUN_0046eeb8(iVar2,aiStack_17f8[0x5f9] - aiStack_17f8[0x5f7]);
        *(int *)(param_1 + 0x68) = aiStack_17f8[0x5fa] - aiStack_17f8[0x5f8];
      }
      else if (*(char *)(iVar2 + 0x10) == '\x02') {
        FUN_0046eeb8(iVar2,aiStack_17f8[0x5fa] - aiStack_17f8[0x5f8]);
        *(int *)(param_1 + 0x68) = aiStack_17f8[0x5f9] - aiStack_17f8[0x5f7];
      }
      iVar2 = FUN_0046b49c(*(undefined4 *)(param_1 + 0x14));
      if ((0 < iVar2) && (FUN_004708a0(param_1,0), *(int *)(param_1 + 0x6c) == 0)) {
        FUN_0046f244(param_1,0);
      }
    }
  }
  return;
}

