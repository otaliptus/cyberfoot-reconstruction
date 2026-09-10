// Address: 00473488
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00473488(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = FUN_00403a54(PTR_PTR_00472000,1);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x90);
}

