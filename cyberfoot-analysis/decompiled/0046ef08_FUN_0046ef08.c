// Address: 0046ef08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046ef08(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  
  iVar1 = *(int *)(param_1 + 8);
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar2 = FUN_0046ee90(iVar1);
    iVar3 = FUN_0046e9cc(iVar1);
    if (iVar2 < iVar3) {
LAB_0046ef3c:
      FUN_0046eb78(param_1);
      FUN_0046f244(*(undefined4 *)(param_1 + 0x1c),param_1,extraout_ECX,&LAB_00470a18,
                   *(undefined4 *)(param_1 + 0x1c));
    }
    else {
      iVar2 = FUN_0046ee90(iVar1);
      iVar3 = FUN_0046ea14(param_1);
      if (iVar3 < iVar2) goto LAB_0046ef3c;
    }
    FUN_0046ef08(iVar1);
    iVar1 = *(int *)(iVar1 + 0xc);
  } while( true );
}

