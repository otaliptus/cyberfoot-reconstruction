// Address: 0055798c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055798c(undefined4 param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint nNumerator;
  
  uVar4 = FUN_00429e64(param_1);
  bVar1 = FUN_004080c0(uVar4);
  bVar2 = FUN_004080c4(uVar4);
  bVar3 = FUN_004080c8(uVar4);
  nNumerator = (uint)param_2;
  iVar5 = MulDiv(0xff - (uint)bVar1,nNumerator,100);
  iVar6 = MulDiv(0xff - (uint)bVar2,nNumerator,100);
  iVar7 = MulDiv(0xff - (uint)bVar3,nNumerator,100);
  FUN_004080a4(bVar1 + (char)iVar5,bVar2 + (char)iVar6,bVar3 + (char)iVar7);
  return;
}

