// Address: 00430280
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00430280(int *param_1)

{
  int iVar1;
  
  if (param_1[0xb] == 0) {
    FUN_0043052c(param_1);
    if (param_1[0xb] == 0) {
      iVar1 = FUN_0042f01c(PTR_PTR_0042ee58,1,param_1);
      param_1[0xb] = iVar1;
      *(int **)(iVar1 + 0x2c) = param_1;
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(*param_1 + 0x10);
      *(int **)(iVar1 + 0x34) = param_1;
      *(code **)(iVar1 + 0x30) = FUN_0042ff0c;
    }
  }
  return param_1[0xb];
}

