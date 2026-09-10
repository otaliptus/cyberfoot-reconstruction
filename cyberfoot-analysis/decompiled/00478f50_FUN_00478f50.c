// Address: 00478f50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00478f50(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  char cVar2;
  
  if ((param_4 != '\0') && ((*(int *)(param_1 + 0x34) != 0 || (*(int *)(param_1 + 0x6c) != 0)))) {
    FUN_00476fb0(param_1);
  }
  if (*(int *)(param_1 + 100) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    cVar2 = FUN_00403c10(uVar1,PTR_PTR_00475ac4);
    if (cVar2 != '\0') {
      FUN_0047ac28(uVar1);
    }
  }
  else {
    FUN_00478f50(*(int *)(param_1 + 100),param_1,param_3,0);
  }
  return;
}

