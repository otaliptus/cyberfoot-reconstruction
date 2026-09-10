// Address: 00470818
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00470818(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    iVar2 = FUN_0046ef68(param_1);
    if ((iVar2 == 0) && (param_1 != *(int *)(*(int *)(param_4 + -4) + 100))) {
      cVar1 = FUN_0046e998(param_1);
      if (cVar1 != '\0') {
        if (*(int *)(*(int *)(param_4 + -4) + 100) == *(int *)(param_1 + 0x14)) {
          FUN_0046eeb8(param_1,*(undefined4 *)(*(int *)(param_4 + -4) + 0x68));
        }
        else {
          uVar3 = FUN_0046ee90(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14));
          FUN_0046eeb8(param_1,uVar3);
        }
      }
    }
    FUN_0046ef90(param_1);
    FUN_00470818();
    FUN_0046ef68(param_1);
    FUN_00470818();
  }
  return;
}

