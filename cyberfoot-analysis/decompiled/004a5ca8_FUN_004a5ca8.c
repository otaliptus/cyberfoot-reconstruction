// Address: 004a5ca8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004a5ca8(uint param_1,byte param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = (uint)param_2 - (param_3 & 0xff);
  uVar5 = (int)uVar1 >> 0x1f;
  iVar2 = (uVar1 ^ uVar5) - uVar5;
  uVar1 = (param_1 & 0xff) - (param_3 & 0xff);
  uVar5 = (int)uVar1 >> 0x1f;
  iVar3 = (uVar1 ^ uVar5) - uVar5;
  uVar1 = (param_1 & 0xff) + (uint)param_2 + (param_3 & 0xff) * -2;
  uVar5 = (int)uVar1 >> 0x1f;
  iVar4 = (uVar1 ^ uVar5) - uVar5;
  if (((iVar3 < iVar2) || (iVar4 < iVar2)) && (param_1 = param_3, iVar3 <= iVar4)) {
    param_1 = CONCAT31((int3)((uint)iVar4 >> 8),param_2);
  }
  return param_1;
}

