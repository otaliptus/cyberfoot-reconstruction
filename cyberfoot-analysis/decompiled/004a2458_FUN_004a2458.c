// Address: 004a2458
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a2458(int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0xb5c + param_3 * 4);
  puVar1 = (ushort *)(param_2 + iVar2 * 4);
  while (iVar4 = param_3 * 2, iVar4 <= *(int *)(param_1 + 0x1450)) {
    if ((iVar4 < *(int *)(param_1 + 0x1450)) &&
       ((*(ushort *)(param_2 + *(int *)(param_1 + 0xb60 + param_3 * 8) * 4) <
         *(ushort *)(param_2 + *(int *)(param_1 + 0xb5c + param_3 * 8) * 4) ||
        ((*(short *)(param_2 + *(int *)(param_1 + 0xb60 + param_3 * 8) * 4) ==
          *(short *)(param_2 + *(int *)(param_1 + 0xb5c + param_3 * 8) * 4) &&
         (*(byte *)(param_1 + 0x1458 + *(int *)(param_1 + 0xb60 + param_3 * 8)) <=
          *(byte *)(param_1 + 0x1458 + *(int *)(param_1 + 0xb5c + param_3 * 8)))))))) {
      iVar4 = iVar4 + 1;
    }
    if ((*puVar1 < *(ushort *)(param_2 + *(int *)(param_1 + 0xb5c + iVar4 * 4) * 4)) ||
       ((iVar3 = *(int *)(param_1 + 0xb5c + iVar4 * 4), *(ushort *)(param_2 + iVar3 * 4) == *puVar1
        && (*(byte *)(param_1 + 0x1458 + iVar2) <= *(byte *)(param_1 + 0x1458 + iVar3))))) break;
    *(undefined4 *)(param_1 + 0xb5c + param_3 * 4) = *(undefined4 *)(param_1 + 0xb5c + iVar4 * 4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xb5c + param_3 * 4) = iVar2;
  return;
}

