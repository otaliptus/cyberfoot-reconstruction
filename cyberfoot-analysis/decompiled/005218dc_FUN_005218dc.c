// Address: 005218dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005218dc(int param_1,undefined4 param_2,undefined4 param_3,code *param_4,undefined4 param_5
                 )

{
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      (*param_4)(param_5);
    }
    else {
      FUN_00426d5c();
    }
  }
  return;
}

