// Address: 004dc20c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dc20c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    FUN_00478f0c(param_1);
    uVar1 = thunk_FUN_0047910c(param_1);
    FUN_004dbf48(param_1,uVar1);
    thunk_FUN_0047910c(param_1);
    FUN_004dbfb0();
  }
  return;
}

