// Address: 006469c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_006469c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8));
  if (-1 < iVar1) {
    iVar1 = FUN_0065a250(iVar1,2,1);
    if (-1 < iVar1) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

