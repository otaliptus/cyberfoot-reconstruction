// Address: 004f81d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004f81d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),param_2);
  if (*(char *)(iVar1 + 0x7e) == '\0') {
    iVar1 = FUN_004f5b04(*(undefined4 *)(param_1 + 0x598),param_2,param_3);
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
  }
  else {
    uVar2 = FUN_0050dd4c(param_1,param_2,param_3);
  }
  return uVar2;
}

