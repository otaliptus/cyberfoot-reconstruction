// Address: 004811d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004811d8(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(char *)(param_1 + 0x229)) {
    *(char *)(param_1 + 0x229) = param_2;
    if ((param_2 == '\x02') || (param_2 == '\x05')) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    FUN_0047f36c(param_1,uVar1);
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      FUN_00469fa0(param_1);
    }
  }
  return;
}

