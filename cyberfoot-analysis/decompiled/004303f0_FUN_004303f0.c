// Address: 004303f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004303f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0042ff0c(param_1,param_1);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((param_2 < 0) || (*(int *)(iVar1 + 0x20) <= param_2)) {
    FUN_0042b850(PTR_PTR_0066b4e4);
  }
  FUN_004304a8(param_1);
  GdiFlush();
  if (0 < *(int *)(iVar1 + 0x38)) {
    param_2 = (*(int *)(iVar1 + 0x38) - param_2) + -1;
  }
  iVar2 = FUN_0042bb30(*(undefined4 *)(iVar1 + 0x34),*(undefined2 *)(iVar1 + 0x3e),0x20);
  return iVar2 * param_2 + *(int *)(iVar1 + 0x2c);
}

