// Address: 0040320c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0040320c(undefined4 *param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  if ((*(ushort *)(param_1 + 1) < 0xd7b1) || (0xd7b3 < *(ushort *)(param_1 + 1))) {
    FUN_00402984(0x67);
    uVar2 = 0xffffffff;
  }
  else {
    DVar1 = SetFilePointer((HANDLE)*param_1,0,(PLONG)0x0,1);
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

