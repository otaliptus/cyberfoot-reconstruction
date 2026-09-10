// Address: 00478f0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00478f0c(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_1;
  if ((*(int *)(param_1 + 100) == 0) &&
     (cVar1 = FUN_00403c10(*(undefined4 *)(param_1 + 4),PTR_PTR_004759d0), cVar1 != '\0')) {
    iVar2 = 0;
  }
  if (*(short *)(param_1 + 0x82) != 0) {
    (**(code **)(param_1 + 0x80))(*(undefined4 *)(param_1 + 0x84),param_1,iVar2,param_2);
  }
  return;
}

