// Address: 004543e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004543e8(int param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != *(int *)(param_1 + 0x214)) {
    *(int *)(param_1 + 0x214) = param_2;
    FUN_00456c14();
    cVar1 = FUN_00456cf4();
    if (cVar1 == '\x01') {
      FUN_00469fa0(param_1);
    }
    FUN_00454ec8(param_1);
  }
  return;
}

