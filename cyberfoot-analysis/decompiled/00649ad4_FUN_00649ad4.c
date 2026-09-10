// Address: 00649ad4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00649ad4(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0066b770;
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b770);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      if (param_1 == *(int *)(*(int *)puVar1 + iVar3 * 0x30)) {
        *(undefined4 *)(*(int *)puVar1 + iVar3 * 0x30) = 0xffffffff;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

