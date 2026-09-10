// Address: 00466128
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00466128(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x57)) {
    FUN_00403c80(param_1);
    *(char *)(param_1 + 0x57) = param_2;
    FUN_004673cc(param_1,0xb00b,param_2,0);
    FUN_00403c80(param_1);
  }
  return;
}

