// Address: 0044d864
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044d864(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = FUN_0041edb0(*(undefined4 *)(param_1 + 4));
  if (-1 < iVar1 + -1) {
    unaff_ESI = 0;
    do {
      iVar2 = FUN_0041edb8(*(undefined4 *)(param_1 + 4),unaff_ESI);
      if (*(int *)(iVar2 + 0x24) < 0) break;
      unaff_ESI = unaff_ESI + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_0041edb0(*(undefined4 *)(param_1 + 4));
  FUN_0041ea2c(param_1,unaff_ESI != iVar1);
  FUN_0044d768();
  return;
}

