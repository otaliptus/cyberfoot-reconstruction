// Address: 0046762c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046762c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 0xc) {
    uVar2 = FUN_0040a9a8(param_2[2]);
    FUN_0040a9d4(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = uVar2;
    FUN_00465da8(param_1,*param_2,param_2[1],param_2[2]);
  }
  else if (iVar1 == 0xd) {
    puVar3 = *(undefined **)(param_1 + 100);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = &DAT_004676b0;
    }
    FUN_0040a7c4(param_2[2],puVar3,param_2[1] + -1);
    iVar1 = FUN_0040a760();
    param_2[3] = iVar1;
  }
  else if (iVar1 == 0xe) {
    if (*(int *)(param_1 + 100) == 0) {
      param_2[3] = 0;
    }
    else {
      iVar1 = FUN_0040a760(*(int *)(param_1 + 100));
      param_2[3] = iVar1;
    }
  }
  return;
}

