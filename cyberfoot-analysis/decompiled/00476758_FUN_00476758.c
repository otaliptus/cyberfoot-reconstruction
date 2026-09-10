// Address: 00476758
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00476758(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00472c3c(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00403c34(*(undefined4 *)(param_1 + 0x10),PTR_PTR_00472158);
    cVar1 = FUN_0047b710(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x30),
                         *(undefined4 *)(iVar2 + 100));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

