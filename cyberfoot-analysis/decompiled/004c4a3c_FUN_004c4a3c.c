// Address: 004c4a3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c4a3c(int *param_1,byte *param_2,byte param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint local_10;
  
  local_10 = (uint)param_3;
  bVar2 = *(byte *)*param_1;
  for (iVar3 = 0; iVar3 < (int)local_10; iVar3 = iVar3 + 2) {
    bVar1 = *param_2;
    *(byte *)*param_1 = bVar2 << 4 | bVar1 >> 4;
    *param_1 = *param_1 + 1;
    param_2 = param_2 + 1;
    bVar2 = bVar1;
  }
  return;
}

