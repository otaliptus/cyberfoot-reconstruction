// Address: 00402d10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

DWORD FUN_00402d10(undefined4 *param_1)

{
  char cVar1;
  DWORD DVar2;
  
  *(undefined2 *)(param_1 + 1) = 0xd7b0;
  cVar1 = FUN_00402d00(*param_1);
  if (cVar1 == '\0') {
    DVar2 = GetLastError();
    return DVar2;
  }
  return 0;
}

