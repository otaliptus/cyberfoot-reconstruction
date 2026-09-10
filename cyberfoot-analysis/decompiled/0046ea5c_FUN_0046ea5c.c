// Address: 0046ea5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0046ea5c(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = param_1;
  while (iVar4 = iVar1, iVar4 != *(int *)(*(int *)(param_1 + 0x1c) + 100)) {
    iVar1 = *(int *)(iVar4 + 0x14);
    if ((param_2 == *(char *)(iVar1 + 0x10)) && (*(int *)(iVar4 + 0x18) != 0)) {
      uVar3 = FUN_0046ee90(*(undefined4 *)(iVar4 + 0x18));
      return uVar3;
    }
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
  (**(code **)(*piVar2 + 0x44))(piVar2,&uStack_18);
  piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
  (**(code **)(*piVar2 + 0x8c))(piVar2,&uStack_18);
  if (param_2 == '\x01') {
    return uStack_14;
  }
  if (param_2 == '\x02') {
    return uStack_18;
  }
  return 0;
}

