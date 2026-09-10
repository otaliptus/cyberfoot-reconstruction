// Address: 0040c458
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040c458(short *param_1,ushort *param_2,ushort *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_4 < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 1;
  }
  *param_1 = *param_1 + (short)(param_4 / 0xc);
  *param_2 = *param_2 + (short)(param_4 % 0xc);
  iVar2 = CONCAT22((short)((uint)(param_4 / 0xc) >> 0x10),*param_2) + -1;
  if (0xb < (ushort)iVar2) {
    *param_1 = *param_1 + (short)uVar4;
    sVar1 = (short)uVar4 * -0xc;
    iVar2 = CONCAT22((short)((uint)uVar4 >> 0x10),sVar1);
    *param_2 = *param_2 + sVar1;
  }
  uVar3 = FUN_0040c108(CONCAT22((short)((uint)iVar2 >> 0x10),*param_1));
  if (*(ushort *)(&DAT_00662102 + (uint)*param_2 * 2 + (uVar3 & 0x7f) * 0x18) < *param_3) {
    *param_3 = *(ushort *)(&DAT_00662102 + (uint)*param_2 * 2 + (uVar3 & 0x7f) * 0x18);
  }
  return;
}

