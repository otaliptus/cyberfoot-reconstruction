// Address: 004708a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004708a0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = *(int *)(*(int *)(param_1 + 100) + 8);
  }
  FUN_00470818(param_2);
  iVar1 = **(int **)(param_1 + 0x14);
  (**(code **)(iVar1 + 0x7c))(*(int **)(param_1 + 0x14),iVar1,&stack0xfffffffc);
  return;
}

