// Address: 0047ffb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047ffb8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  FUN_004656d8(param_1,param_2,param_3);
  if ((char)param_3 == '\0') {
    cVar2 = FUN_00403c10(param_2,PTR_PTR_00471d98);
    if (cVar2 == '\0') {
      if (((((*(byte *)(param_1 + 0x1c) & 1) == 0) && (*(int *)(param_1 + 0x248) == 0)) &&
          (param_1 == *(int *)(param_2 + 4))) &&
         (cVar2 = FUN_00403c10(param_2,PTR_PTR_00475ac4), cVar2 != '\0')) {
        FUN_0048161c(param_1,param_2);
      }
    }
    else {
      if (*(int *)(param_1 + 0x2f0) == 0) {
        uVar3 = FUN_00403a54(PTR_PTR_0041b73c,1);
        *(undefined4 *)(param_1 + 0x2f0) = uVar3;
      }
      FUN_0041dec0(*(undefined4 *)(param_1 + 0x2f0),param_2);
    }
  }
  else if ((char)param_3 == '\x01') {
    iVar1 = *(int *)(param_1 + 0x2f0);
    if ((iVar1 == 0) || (cVar2 = FUN_00403c10(param_2,PTR_PTR_00471d98), cVar2 == '\0')) {
      if (param_2 == *(int *)(param_1 + 0x248)) {
        FUN_0048161c(param_1,0);
      }
      if (param_2 == *(int *)(param_1 + 600)) {
        FUN_004815f4(param_1,0);
      }
      if (param_2 == *(int *)(param_1 + 0x260)) {
        FUN_004815d0(param_1,0);
      }
    }
    else {
      FUN_0041e1b8(iVar1,param_2);
    }
  }
  if (*(int *)(param_1 + 0x250) != 0) {
    (**(code **)(**(int **)(param_1 + 0x250) + 0x10))(*(int **)(param_1 + 0x250),param_2,param_3);
  }
  return;
}

