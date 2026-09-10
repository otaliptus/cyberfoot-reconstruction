// Address: 004095ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004095ec(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = FUN_00404ba4(param_1);
  FUN_00404f30(param_2,iVar2);
  pbVar3 = (byte *)*param_2;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    bVar1 = *param_1;
    if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
      bVar1 = bVar1 + 0x20;
    }
    *pbVar3 = bVar1;
    param_1 = param_1 + 1;
    pbVar3 = pbVar3 + 1;
  }
  return;
}

