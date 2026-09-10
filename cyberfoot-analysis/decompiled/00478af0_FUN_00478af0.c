// Address: 00478af0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00478af0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((char)param_2 != *(char *)(param_1 + 0x3f)) {
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 != 0) {
      uVar2 = FUN_00478eb0(iVar1,param_1);
      FUN_00477080(iVar1,uVar2,param_2);
    }
    *(char *)(param_1 + 0x3f) = (char)param_2;
    if ((*(char *)(param_1 + 0x38) != '\0') && (*(char *)(param_1 + 0x3d) != '\0')) {
      FUN_004789dc(param_1);
    }
  }
  return;
}

