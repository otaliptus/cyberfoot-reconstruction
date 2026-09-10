// Address: 00470b14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00470b14(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != *(int *)(param_4 + -4)) &&
     (*(char *)(*(int *)(param_1 + 0x14) + 0x10) ==
      *(char *)(*(int *)(*(int *)(param_4 + -4) + 0x14) + 0x10))) {
    iVar1 = FUN_0046ee90(param_1);
    iVar2 = FUN_0046ee90(*(undefined4 *)(param_4 + -4));
    if ((iVar2 < iVar1) &&
       ((*(int *)(param_1 + 4) == 0 ||
        ((*(int *)(param_1 + 4) != 0 && (*(char *)(*(int *)(param_1 + 4) + 0x57) != '\0')))))) {
      uVar3 = FUN_0046ee90(param_1);
      uVar3 = FUN_00432334(*(undefined4 *)(param_4 + -8),uVar3);
      *(undefined4 *)(param_4 + -8) = uVar3;
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00470b14();
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00470b14();
  }
  return;
}

