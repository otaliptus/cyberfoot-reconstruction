// Address: 004c4560
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_004c4560(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_30;
  byte local_2c [32];
  
  bVar1 = *PTR_DAT_0066b70c;
  while( true ) {
    bVar2 = *param_1;
    if (bVar2 == 0) {
      return 0;
    }
    puVar4 = &DAT_004c45c0;
    puVar5 = &local_30;
    for (iVar3 = 8; puVar5 = puVar5 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
    }
    local_2c[(int)(uint)bVar1 >> 3] = local_2c[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
    if ((local_2c[(int)(uint)bVar2 >> 3] >> (bVar2 & 7) & 1) == 0) break;
    param_1 = param_1 + 1;
  }
  return 1;
}

