// Address: 00406a6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00406a6c(int param_1,uint param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int local_14;
  
  if (param_3 == 0) {
    local_14 = 0;
  }
  else {
    uVar3 = 0;
    uVar5 = 0;
    if (param_1 == 0) {
      if (param_4 != 0) {
        do {
          uVar6 = uVar5 + 1;
          if ((*(byte *)(param_3 + uVar5) & 0x80) != 0) {
            if (param_4 <= uVar6) {
              return -1;
            }
            if ((*(byte *)(param_3 + uVar5) & 0x20) != 0) {
              pbVar1 = (byte *)(param_3 + uVar6);
              uVar6 = uVar5 + 2;
              if ((*pbVar1 & 0xc0) != 0x80) {
                return -1;
              }
              if (param_4 <= uVar6) {
                return -1;
              }
            }
            pbVar1 = (byte *)(param_3 + uVar6);
            uVar6 = uVar6 + 1;
            if ((*pbVar1 & 0xc0) != 0x80) {
              return -1;
            }
          }
          uVar3 = uVar3 + 1;
          uVar5 = uVar6;
        } while (uVar6 < param_4);
      }
    }
    else {
      for (; (uVar5 < param_4 && (uVar3 < param_2)); uVar3 = uVar3 + 1) {
        bVar2 = *(byte *)(param_3 + uVar5);
        uVar6 = uVar5 + 1;
        if ((bVar2 & 0x80) == 0) {
          *(ushort *)(param_1 + uVar3 * 2) = (ushort)bVar2;
        }
        else {
          if (param_4 <= uVar6) {
            return -1;
          }
          uVar4 = bVar2 & 0x3f;
          if ((bVar2 & 0x20) != 0) {
            pbVar1 = (byte *)(param_3 + uVar6);
            uVar6 = uVar5 + 2;
            if ((*pbVar1 & 0xc0) != 0x80) {
              return -1;
            }
            if (param_4 <= uVar6) {
              return -1;
            }
            uVar4 = (ushort)(*pbVar1 & 0x3f) | uVar4 << 6;
          }
          pbVar1 = (byte *)(param_3 + uVar6);
          uVar6 = uVar6 + 1;
          if ((*pbVar1 & 0xc0) != 0x80) {
            return -1;
          }
          *(ushort *)(param_1 + uVar3 * 2) = (ushort)(*pbVar1 & 0x3f) | uVar4 << 6;
        }
        uVar5 = uVar6;
      }
      if (param_2 <= uVar3) {
        uVar3 = param_2 - 1;
      }
      *(undefined2 *)(param_1 + uVar3 * 2) = 0;
    }
    local_14 = uVar3 + 1;
  }
  return local_14;
}

