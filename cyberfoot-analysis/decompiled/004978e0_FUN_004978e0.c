// Address: 004978e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004978e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1c);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(code **)(iVar1 + 8) = FUN_00497810;
  *(code **)(iVar1 + 0xc) = FUN_0049783c;
  *(code **)(iVar1 + 0x10) = FUN_00497884;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  return;
}

