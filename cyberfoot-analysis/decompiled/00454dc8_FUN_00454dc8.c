// Address: 00454dc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00454dc8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x24c) == '\0') {
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      FUN_00454ccc(param_1,*(undefined4 *)(param_1 + 0x230));
    }
  }
  else {
    if (*(int *)(param_1 + 0x230) != 0) {
      uVar2 = FUN_00473bd0(*(int *)(param_1 + 0x230));
      FUN_00454e44(param_1,uVar2);
    }
    if (*(int *)(param_1 + 0x238) != 0) {
      uVar2 = FUN_00473bd0(*(int *)(param_1 + 0x238));
      FUN_00454e70(param_1,uVar2);
    }
    if (*(int *)(param_1 + 0x240) != 0) {
      uVar2 = FUN_00473bd0(*(int *)(param_1 + 0x240));
      FUN_00454e9c(param_1,uVar2);
      return;
    }
  }
  return;
}

