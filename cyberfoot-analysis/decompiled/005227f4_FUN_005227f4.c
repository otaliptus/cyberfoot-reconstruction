// Address: 005227f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005227f4(int *param_1)

{
  int iVar1;
  
  FUN_00524730(param_1);
  FUN_005236d4(param_1);
  FUN_0051aaf0(param_1[0xb]);
  FUN_0051a088(*(undefined4 *)(param_1[0xc] + 0x10));
  iVar1 = param_1[0xc];
  *(undefined2 *)(iVar1 + 10) = 0;
  *(undefined2 *)(iVar1 + 8) = 0;
  FUN_0051b090();
  (**(code **)(*param_1 + 0x38))(param_1,0);
  return;
}

