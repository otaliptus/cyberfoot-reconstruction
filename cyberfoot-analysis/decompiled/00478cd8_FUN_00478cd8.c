// Address: 00478cd8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00478cd8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_3 + 100) != 0) {
    FUN_00476188(PTR_PTR_0066b788);
  }
  if (param_1[0x17] == 0) {
    iVar1 = FUN_00403a54(PTR_PTR_0041b73c,1);
    param_1[0x17] = iVar1;
  }
  iVar1 = param_2 + -1;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1[0x17] + 8))) {
    iVar2 = FUN_0041e01c(param_1[0x17],iVar1);
    if (*(byte *)(param_3 + 0x3f) < *(byte *)(iVar2 + 0x3f)) {
      iVar1 = FUN_0041e01c(param_1[0x17],iVar1);
      FUN_00478af0(param_3,*(undefined1 *)(iVar1 + 0x3f));
    }
  }
  FUN_00477080(param_1,param_2,*(undefined1 *)(param_3 + 0x3f));
  FUN_0041e098(param_1[0x17],param_2,param_3);
  *(int **)(param_3 + 100) = param_1;
  *(int **)(param_3 + 0x84) = param_1;
  *(code **)(param_3 + 0x80) = FUN_00478f50;
  if (param_1[0xd] != 0) {
    FUN_00476fb0(param_1);
  }
  iVar1 = FUN_00478b4c(param_1);
  (**(code **)(*param_1 + 0x3c))(param_1,iVar1 == 1);
  return;
}

