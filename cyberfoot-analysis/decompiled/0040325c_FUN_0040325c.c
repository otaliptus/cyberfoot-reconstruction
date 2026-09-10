// Address: 0040325c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0040325c(undefined4 *param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(ushort *)(param_1 + 1) < 0xd7b1) || (0xd7b3 < *(ushort *)(param_1 + 1))) {
    FUN_00402984(0x67);
  }
  else {
    DVar1 = GetFileSize((HANDLE)*param_1,(LPDWORD)0x0);
    if (DVar1 == 0xffffffff) {
      FUN_00402994();
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = DVar1 / (uint)param_1[2];
    }
  }
  return uVar2;
}

