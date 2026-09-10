// Address: 0051b090
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051b090(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  
  bVar3 = 0;
  if ((0 < *(int *)(*(int *)(param_1 + 0x10) + 8)) &&
     (bVar3 = 0x80, *(char *)(*(int *)(param_1 + 0x10) + 0x10) != '\0')) {
    bVar3 = 0x88;
  }
  bVar1 = FUN_00522898(*(undefined4 *)(param_1 + 4));
  cVar2 = FUN_005228f4(*(undefined4 *)(param_1 + 4));
  *(byte *)(param_1 + 0xc) = bVar3 | (bVar1 & 7) << 4 | cVar2 - 1U & 7;
  return;
}

