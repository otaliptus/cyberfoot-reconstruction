// Address: 0049a9f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049a9f8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iStack_14;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x68);
  *(undefined4 **)(param_1 + 0x154) = puVar1;
  *puVar1 = FUN_0049a308;
  if (param_2 == 0) {
    iVar4 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar6 = puVar1 + 6;
    iVar7 = 0;
    do {
      iVar5 = iVar7 + 1;
      *piVar6 = iVar7 * 0x80 + iVar4;
      piVar6 = piVar6 + 1;
      iVar7 = iVar5;
    } while (iVar5 < 10);
    puVar1[0x10] = 0;
  }
  else {
    iStack_14 = 0;
    iVar7 = *(int *)(param_1 + 0x40);
    puVar1 = puVar1 + 0x10;
    for (; iStack_14 < *(int *)(param_1 + 0x38); iStack_14 = iStack_14 + 1) {
      uVar2 = FUN_004976fc(*(undefined4 *)(iVar7 + 0x1c),*(undefined4 *)(iVar7 + 8));
      uVar3 = FUN_004976fc(*(undefined4 *)(iVar7 + 0x20),*(undefined4 *)(iVar7 + 0xc));
      uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x14))
                        (param_1,1,0,*(undefined4 *)(iVar7 + 0xc),uVar3,uVar2);
      *puVar1 = uVar2;
      puVar1 = puVar1 + 1;
      iVar7 = iVar7 + 0x54;
    }
  }
  return;
}

