// Address: 004d30d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d30d0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    iVar3 = FUN_00403c34(*(undefined4 *)(param_1 + 0x10),PTR_PTR_00472158);
    if (*(int *)(iVar3 + 0x6c) == *(int *)(iVar1 + 0x238)) {
      uVar2 = 1;
      goto LAB_004d30fd;
    }
  }
  uVar2 = 0;
LAB_004d30fd:
  *(undefined1 *)(iVar1 + 0x289) = uVar2;
  return;
}

