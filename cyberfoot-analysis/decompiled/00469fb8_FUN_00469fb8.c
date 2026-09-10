// Address: 00469fb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00469fb8(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00403c80(param_1);
  FUN_00469f58(param_1);
  FUN_0046a0f4(param_1);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x180) != 0)) {
    SetFocus(*(HWND *)(param_1 + 0x180));
  }
  return;
}

