// Address: 00465100
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00465100(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  
  cVar1 = FUN_00472cb4(param_1);
  uVar3 = cVar1 == '\0';
  if (!(bool)uVar3) {
    iVar2 = FUN_00403c34(*(undefined4 *)(param_1 + 0x10),PTR_PTR_00472158);
    FUN_00404cf0(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x80),*(undefined4 *)(iVar2 + 0x7c));
    if ((bool)uVar3) {
      return 1;
    }
  }
  return 0;
}

