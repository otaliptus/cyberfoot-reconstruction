// Address: 004274e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004274e0(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((char)param_2 == '\0') {
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xffef;
  }
  else {
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x10;
  }
  if (param_3 != '\0') {
    iVar1 = FUN_0042747c(param_1);
    if (-1 < iVar1 + -1) {
      iVar3 = 0;
      do {
        uVar2 = FUN_00427450(param_1,iVar3);
        FUN_004274e0(uVar2,param_2,1);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

