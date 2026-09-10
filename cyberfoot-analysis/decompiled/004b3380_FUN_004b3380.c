// Address: 004b3380
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b3380(int param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_EDX;
  
  *(undefined4 *)(param_1 + 0x50) = param_2;
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x28))();
  if (extraout_EDX == 0) {
    if (iVar1 == 0) {
      return;
    }
  }
  else if (extraout_EDX < 1) {
    return;
  }
  FUN_004b2910(param_1);
  if (*(short *)(param_1 + 0x5a) != 0) {
    (**(code **)(param_1 + 0x58))(*(undefined4 *)(param_1 + 0x5c),param_1);
  }
  return;
}

