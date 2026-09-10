// Address: 00406990
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00406990(int param_1,uint param_2,int param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  if (param_3 != 0) {
    uVar5 = 0;
    uVar2 = 0;
    if (param_1 == 0) {
      if (param_4 != 0) {
        do {
          uVar1 = *(ushort *)(param_3 + uVar2 * 2);
          uVar2 = uVar2 + 1;
          if (0x7f < uVar1) {
            if (0x7ff < uVar1) {
              uVar5 = uVar5 + 1;
            }
            uVar5 = uVar5 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar2 < param_4);
      }
    }
    else {
      while ((uVar2 < param_4 && (uVar5 < param_2))) {
        uVar1 = *(ushort *)(param_3 + uVar2 * 2);
        uVar2 = uVar2 + 1;
        bVar3 = (byte)uVar1;
        if (uVar1 < 0x80) {
          *(byte *)(param_1 + uVar5) = bVar3;
          uVar5 = uVar5 + 1;
        }
        else if (uVar1 < 0x800) {
          if (param_2 < uVar5 + 2) break;
          *(byte *)(param_1 + uVar5) = (byte)(uVar1 >> 6) | 0xc0;
          *(byte *)(param_1 + 1 + uVar5) = bVar3 & 0x3f | 0x80;
          uVar5 = uVar5 + 2;
        }
        else {
          if (param_2 < uVar5 + 3) break;
          *(byte *)(param_1 + uVar5) = (byte)(uVar1 >> 0xc) | 0xe0;
          *(byte *)(param_1 + 1 + uVar5) = (byte)(uVar1 >> 6) & 0x3f | 0x80;
          *(byte *)(param_1 + 2 + uVar5) = bVar3 & 0x3f | 0x80;
          uVar5 = uVar5 + 3;
        }
      }
      if (param_2 <= uVar5) {
        uVar5 = param_2 - 1;
      }
      *(undefined1 *)(param_1 + uVar5) = 0;
    }
    iVar4 = uVar5 + 1;
  }
  return iVar4;
}

