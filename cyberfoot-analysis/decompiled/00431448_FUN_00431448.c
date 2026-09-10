// Address: 00431448
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00431448(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(char *)(param_1 + 0x38)) {
    if (param_2 == '\0') {
      FUN_004313f8(param_1,0x20000000);
    }
    else {
      uVar1 = FUN_00430458(param_1);
      FUN_004313f8(param_1,uVar1);
    }
  }
  return;
}

