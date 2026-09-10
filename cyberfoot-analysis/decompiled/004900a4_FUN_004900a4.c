// Address: 004900a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004900a4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x30);
  *(undefined4 **)(param_1 + 0x1c4) = puVar1;
  *puVar1 = &LAB_0048fbf0;
  puVar1[2] = 0;
  puVar1[10] = *(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x138) == 2) {
    puVar1[1] = FUN_0048fc04;
    puVar1[3] = FUN_0048fe6c;
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,puVar1[10]);
    puVar1[8] = uVar2;
  }
  else {
    puVar1[1] = &LAB_0048fcbc;
    puVar1[3] = FUN_0048fcf4;
    puVar1[8] = 0;
  }
  FUN_0048fb38(param_1);
  return;
}

