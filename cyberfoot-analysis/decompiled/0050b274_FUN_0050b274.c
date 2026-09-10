// Address: 0050b274
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050b274(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  while( true ) {
    iVar1 = FUN_0050ae9c(param_1);
    if ((iVar1 <= iVar2) || (*(int *)(param_1 + 0x30) <= iVar2)) break;
    iVar1 = FUN_0050b02c(param_1,iVar2);
    if (*(char *)(iVar1 + 0xa9) != '\0') {
      iVar1 = FUN_0050b02c(param_1,iVar2);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(iVar1 + 0xb0);
    }
    iVar2 = iVar2 + 1;
  }
  return;
}

