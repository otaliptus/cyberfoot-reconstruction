// Address: 00409a10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00409a10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00405260(param_1);
  for (iVar2 = 1; (iVar2 <= iVar1 && (*(ushort *)(param_1 + -2 + iVar2 * 2) < 0x21));
      iVar2 = iVar2 + 1) {
  }
  if (iVar1 < iVar2) {
    FUN_00404ff0(param_2);
  }
  else {
    for (; *(ushort *)(param_1 + -2 + iVar1 * 2) < 0x21; iVar1 = iVar1 + -1) {
    }
    FUN_004053fc(param_1,iVar2,(iVar1 - iVar2) + 1,param_2);
  }
  return;
}

