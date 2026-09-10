// Address: 0046beec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046beec(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if ((cVar1 == '\0') && (param_1[0xc] != 0)) {
    FUN_004694f0(param_1,0);
  }
  cVar1 = FUN_0046cde4(param_1);
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 7) & 0x10) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x50))();
    EnableWindow((HWND)param_1[0x60],-(uint)(cVar1 != '\0'));
  }
  return;
}

