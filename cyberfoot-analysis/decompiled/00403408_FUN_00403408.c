// Address: 00403408
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00403408(undefined4 *param_1,int param_2)

{
  DWORD DVar1;
  
  if (2 < *(ushort *)(param_1 + 1) - 0xd7b1) {
    FUN_00402984(0x67);
    return;
  }
  DVar1 = SetFilePointer((HANDLE)*param_1,param_1[2] * param_2,(PLONG)0x0,0);
  if (DVar1 != 0xffffffff) {
    return;
  }
  GetLastError();
  FUN_00402984();
  return;
}

