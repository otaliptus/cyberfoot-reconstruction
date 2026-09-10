// Address: 004a29cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a29cc(int param_1,int param_2,int param_3)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_18;
  uint local_14;
  ushort *local_10;
  
  local_14 = 0xffffffff;
  uVar2 = *(ushort *)(param_2 + 2);
  iVar7 = 0;
  iVar4 = 7;
  iVar3 = 4;
  if (uVar2 == 0) {
    iVar4 = 0x8a;
    iVar3 = 3;
  }
  *(undefined2 *)(param_2 + 6 + param_3 * 4) = 0xffff;
  local_10 = (ushort *)(param_2 + 6);
  local_18 = 0;
  uVar5 = (uint)uVar2;
  if (-1 < param_3) {
    do {
      iVar7 = iVar7 + 1;
      uVar6 = (uint)*local_10;
      if ((iVar4 <= iVar7) || (uVar6 != uVar5)) {
        if (iVar7 < iVar3) {
          psVar1 = (short *)(param_1 + 0xa7c + uVar5 * 4);
          *psVar1 = *psVar1 + (short)iVar7;
        }
        else if (uVar5 == 0) {
          if (iVar7 < 0xb) {
            *(short *)(param_1 + 0xac0) = *(short *)(param_1 + 0xac0) + 1;
          }
          else {
            *(short *)(param_1 + 0xac4) = *(short *)(param_1 + 0xac4) + 1;
          }
        }
        else {
          if (uVar5 != local_14) {
            psVar1 = (short *)(param_1 + 0xa7c + uVar5 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
        }
        iVar7 = 0;
        local_14 = uVar5;
        if (uVar6 == 0) {
          iVar4 = 0x8a;
          iVar3 = 3;
        }
        else if (uVar6 == uVar5) {
          iVar4 = 6;
          iVar3 = 3;
        }
        else {
          iVar4 = 7;
          iVar3 = 4;
        }
      }
      local_18 = local_18 + 1;
      local_10 = local_10 + 2;
      uVar5 = uVar6;
    } while (local_18 <= param_3);
  }
  return;
}

