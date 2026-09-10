// Address: 00477080
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00477080(undefined4 param_1,int param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00478b4c(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      if (iVar3 < param_2) {
        iVar2 = FUN_00478b5c(param_1,iVar3);
        if (param_3 < *(byte *)(iVar2 + 0x3f)) {
          FUN_00476188(PTR_PTR_0066ae64);
        }
      }
      else {
        iVar2 = FUN_00478b5c(param_1,iVar3);
        if (*(byte *)(iVar2 + 0x3f) < param_3) {
          iVar2 = FUN_00478b5c(param_1,iVar3);
          *(byte *)(iVar2 + 0x3f) = param_3;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

