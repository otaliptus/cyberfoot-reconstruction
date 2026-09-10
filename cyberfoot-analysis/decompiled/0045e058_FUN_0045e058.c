// Address: 0045e058
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045e058(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x276)) {
    *(char *)(param_1 + 0x276) = param_2;
    if (param_2 == '\x01') {
      *(uint *)(param_1 + 0x50) = ~DAT_0045e094 & *(uint *)(param_1 + 0x50);
    }
    else {
      *(uint *)(param_1 + 0x50) = DAT_0045e094 | *(uint *)(param_1 + 0x50);
    }
    FUN_00469fa0(param_1);
  }
  return;
}

