// Address: 00657ac8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00657ac8(int param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  int aiStack_1ff0 [2041];
  
  puVar1 = PTR_DAT_0066ac7c;
  bVar7 = 0;
  iVar2 = 5;
  piVar4 = aiStack_1ff0 + 0x7f4;
  do {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066ac7c);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar3 = 0;
    do {
      if (param_1 == *(int *)(*(int *)puVar1 + 8 + iVar3 * 0x18)) {
        if (*(int *)(*(int *)puVar1 + iVar3 * 0x18) == 0xd) {
          if (*(int *)(*(int *)puVar1 + 0xc + iVar3 * 0x18) == 1) {
            aiStack_1ff0[0x7f4] = aiStack_1ff0[0x7f4] + 1;
          }
          else if (*(int *)(*(int *)puVar1 + 0xc + iVar3 * 0x18) == 2) {
            aiStack_1ff0[0x7f5] = aiStack_1ff0[0x7f5] + 1;
          }
          else if (*(int *)(*(int *)puVar1 + 0xc + iVar3 * 0x18) == 3) {
            aiStack_1ff0[0x7f6] = aiStack_1ff0[0x7f6] + 1;
          }
        }
        if (*(int *)(*(int *)puVar1 + iVar3 * 0x18) == 0x12) {
          aiStack_1ff0[0x7f7] = aiStack_1ff0[0x7f7] + 1;
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  piVar5 = param_2 + (uint)bVar7 * -2 + 1;
  *param_2 = aiStack_1ff0[0x7f4];
  piVar6 = piVar5 + (uint)bVar7 * -2 + 1;
  piVar4 = aiStack_1ff0 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x7f6;
  *piVar5 = aiStack_1ff0[(uint)bVar7 * -2 + 0x7f5];
  *piVar6 = *piVar4;
  piVar6[(uint)bVar7 * -2 + 1] = piVar4[(uint)bVar7 * -2 + 1];
  (piVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
       (piVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  return;
}

