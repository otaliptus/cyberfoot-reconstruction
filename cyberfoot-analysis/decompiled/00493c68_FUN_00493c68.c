// Address: 00493c68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00493c68(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puStack_14;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x74);
  *(undefined4 **)(param_1 + 0x1ac) = puVar1;
  *puVar1 = &LAB_00492d38;
  puVar1[2] = FUN_00492d48;
  puVar1[0x1c] = 0;
  if (param_2 == 0) {
    iVar6 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar5 = puVar1 + 8;
    iVar7 = 0;
    do {
      iVar4 = iVar7 + 1;
      *piVar5 = iVar7 * 0x80 + iVar6;
      piVar5 = piVar5 + 1;
      iVar7 = iVar4;
    } while (iVar4 < 10);
    puVar1[1] = &LAB_00492fc4;
    puVar1[3] = FUN_00492d84;
    puVar1[4] = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0xd8);
    puStack_14 = puVar1 + 0x12;
    iVar4 = extraout_ECX;
    for (iVar7 = 0; iVar7 < *(int *)(param_1 + 0x24); iVar7 = iVar7 + 1) {
      iVar8 = *(int *)(iVar6 + 0xc);
      if (*(int *)(param_1 + 0xdc) != 0) {
        iVar4 = *(int *)(iVar6 + 0xc) * 3;
        iVar8 = iVar4;
      }
      uVar2 = FUN_004976fc(*(undefined4 *)(iVar6 + 0x1c),*(undefined4 *)(iVar6 + 8),iVar4,iVar7,
                           iVar8);
      uVar3 = FUN_004976fc(*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar6 + 0xc));
      uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x14))(param_1,1,1,iVar8,uVar3,uVar2);
      *puStack_14 = uVar2;
      puStack_14 = puStack_14 + 1;
      iVar6 = iVar6 + 0x54;
      iVar4 = extraout_ECX_00;
    }
    puVar1[1] = FUN_00492fc8;
    puVar1[3] = FUN_004931b8;
    puVar1[4] = puVar1 + 0x12;
  }
  return;
}

