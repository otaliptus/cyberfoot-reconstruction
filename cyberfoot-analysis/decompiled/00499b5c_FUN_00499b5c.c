// Address: 00499b5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00499b5c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x24);
  *(undefined4 **)(param_1 + 0x148) = puVar1;
  *puVar1 = FUN_0049993c;
  puVar1[1] = FUN_00499ad8;
  puVar1[2] = FUN_00499b00;
  puVar1[4] = 0;
  FUN_004990f4(param_1);
  if (*(int *)(param_1 + 0xa8) == 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 1;
  }
  else {
    FUN_004992b8(param_1);
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    *(undefined4 *)(param_1 + 0xb4) = 1;
  }
  if (param_2 == 0) {
    puVar1[5] = 0;
  }
  else if (*(int *)(param_1 + 0xb4) == 0) {
    puVar1[5] = 2;
  }
  else {
    puVar1[5] = 1;
  }
  puVar1[8] = 0;
  puVar1[6] = 0;
  if (*(int *)(param_1 + 0xb4) == 0) {
    puVar1[7] = *(undefined4 *)(param_1 + 0xa4);
  }
  else {
    puVar1[7] = *(int *)(param_1 + 0xa4) * 2;
  }
  return;
}

