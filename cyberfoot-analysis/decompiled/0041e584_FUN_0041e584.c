// Address: 0041e584
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041e584(int param_1,uint param_2,char param_3)

{
  byte *pbVar1;
  
  if (*(uint *)(param_1 + 4) <= param_2) {
    if ((int)param_2 < 0) {
      FUN_0040e42c(PTR_DAT_0041b56c,1,PTR_PTR_0066b5c8);
      FUN_00404250();
      return;
    }
    FUN_0041e4e0(param_1,param_2 + 1);
  }
  if (param_3 != '\0') {
    pbVar1 = (byte *)(*(int *)(param_1 + 8) + ((int)param_2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (param_2 & 7);
    return;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 8) + ((int)param_2 >> 3));
  *pbVar1 = *pbVar1 & ~('\x01' << (param_2 & 7));
  return;
}

