// Address: 004c4c28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c4c28(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte local_2a [2];
  byte local_28 [32];
  byte *local_8;
  
  pbVar3 = local_2a;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pbVar3 = *param_1;
    param_1 = param_1 + 1;
    pbVar3 = pbVar3 + 4;
  }
  *(undefined2 *)pbVar3 = *(undefined2 *)param_1;
  pbVar3 = local_2a;
  pbVar4 = param_2;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pbVar4 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
  }
  *(undefined2 *)pbVar4 = *(undefined2 *)pbVar3;
  if ((local_2a[0] & 1) != 0) {
    local_8 = param_2 + 2;
    *local_8 = 0;
    *param_2 = local_2a[0] + 1;
    FUN_004c4a3c(&local_8,local_2a + 2,local_2a[0]);
  }
  uVar1 = (uint)(*param_2 >> 1);
  if (uVar1 < 0x20) {
    do {
      param_2[uVar1 + 2] = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x20);
  }
  return;
}

