// Address: 0043bba0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043bba0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3 != param_2) {
    uVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x10),param_2);
    uVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x10),param_3);
    FUN_0041e168(*(undefined4 *)(param_1 + 0x10),param_2,uVar2);
    FUN_0041e168(*(undefined4 *)(param_1 + 0x10),param_3,uVar1);
  }
  return;
}

