// Address: 0040304c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040304c(undefined *param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = *(ushort *)(param_1 + 4);
  if ((uVar1 < 0xd7b1) || (0xd7b3 < uVar1)) {
    if (param_1 != &DAT_0066c050) {
      FUN_00402984(0x67);
    }
  }
  else {
    if ((uVar1 & 0xd7b2) == 0xd7b2) {
      iVar2 = (**(code **)(param_1 + 0x1c))(param_1);
    }
    if (iVar2 == 0) {
      iVar2 = (**(code **)(param_1 + 0x24))(param_1);
    }
    if (iVar2 != 0) {
      FUN_00402984(iVar2);
    }
  }
  return iVar2;
}

