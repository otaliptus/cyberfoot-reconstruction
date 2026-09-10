// Address: 00493fdc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00493fdc(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  *(undefined4 **)(param_1 + 0x1b0) = puVar1;
  *puVar1 = &LAB_00493d7c;
  puVar1[2] = 0;
  puVar1[3] = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x138);
    puVar1[4] = uVar3;
    if (param_2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 4) + 8))
                        (param_1,1,*(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x78),puVar1[4]);
      puVar1[3] = uVar3;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x78);
      uVar3 = FUN_004976fc(*(undefined4 *)(param_1 + 0x74),uVar3);
      uVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x10))(param_1,1,0,puVar1[4],uVar3,iVar2);
      puVar1[2] = uVar3;
    }
  }
  return;
}

