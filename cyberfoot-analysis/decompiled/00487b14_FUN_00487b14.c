// Address: 00487b14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487b14(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(char *)(param_1 + 0x88)) {
    *(char *)(param_1 + 0x88) = param_2;
    if (param_2 == '\0') {
      FUN_00403a84(*(undefined4 *)(param_1 + 0x84));
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    else {
      uVar1 = (**(code **)(PTR_PTR_006631e0 + 0x2c))(PTR_PTR_006631e0,1,param_1);
      *(undefined4 *)(param_1 + 0x84) = uVar1;
      FUN_004663a8(uVar1,*(undefined4 *)(param_1 + 0x5c));
    }
  }
  return;
}

