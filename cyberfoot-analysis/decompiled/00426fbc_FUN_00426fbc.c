// Address: 00426fbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00426fbc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_00403a54(PTR_PTR_0041b73c,1);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  FUN_0041dec0(*(undefined4 *)(param_1 + 0x10),param_2);
  *(int *)(param_2 + 4) = param_1;
  return;
}

