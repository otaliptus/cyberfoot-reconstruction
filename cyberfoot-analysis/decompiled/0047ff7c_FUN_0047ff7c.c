// Address: 0047ff7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047ff7c(int param_1)

{
  int iVar1;
  char cVar2;
  
  FUN_004682d4(param_1);
  iVar1 = *(int *)(param_1 + 0x220);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x220) = 0;
    cVar2 = FUN_00403c80(iVar1);
    if (cVar2 != '\0') {
      FUN_00482224(param_1,iVar1);
    }
  }
  return;
}

