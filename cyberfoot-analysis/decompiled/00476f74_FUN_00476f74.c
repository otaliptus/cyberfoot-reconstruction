// Address: 00476f74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00476f74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004272a8(param_1);
  iVar1 = FUN_00478b34(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00478b34(param_1);
    FUN_00403c80(param_1,uVar2,1);
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    FUN_00476fb0(param_1);
  }
  return;
}

