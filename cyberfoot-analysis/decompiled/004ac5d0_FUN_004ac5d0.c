// Address: 004ac5d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ac5d0(undefined4 param_1,undefined4 *param_2)

{
  byte *pbVar1;
  int iVar2;
  
  FUN_00404928(param_2,param_1);
  pbVar1 = (byte *)FUN_0040a57c(*param_2);
  while( true ) {
    iVar2 = FUN_00404ba4(*param_2);
    if ((iVar2 < 1) || ((0x20 < *pbVar1 && (*pbVar1 != 0x2e)))) break;
    iVar2 = FUN_00404da4(*param_2);
    FUN_00404f30(param_2,(int)pbVar1 - iVar2);
    pbVar1 = (byte *)FUN_0040a57c(*param_2);
  }
  return;
}

