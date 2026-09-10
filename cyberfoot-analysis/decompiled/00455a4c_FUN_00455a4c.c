// Address: 00455a4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00455a4c(int param_1,char param_2)

{
  char cVar1;
  
  if (param_2 != *(char *)(param_1 + 0x289)) {
    *(char *)(param_1 + 0x289) = param_2;
    if (param_2 == '\x01') {
      *(uint *)(param_1 + 0x50) = ~DAT_00455a90 & *(uint *)(param_1 + 0x50);
    }
    else {
      *(uint *)(param_1 + 0x50) = DAT_00455a90 | *(uint *)(param_1 + 0x50);
    }
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      FUN_00469fa0(param_1);
    }
  }
  return;
}

