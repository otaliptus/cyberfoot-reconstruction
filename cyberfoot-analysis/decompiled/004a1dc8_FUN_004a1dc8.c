// Address: 004a1dc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004a1dc8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (*(int *)(param_2 + 0x1c) == 0)) ||
     ((*(int *)(param_2 + 0x20) == 0 || (*(int *)(param_2 + 0x24) == 0)))) {
    uVar3 = 0xfffffffe;
  }
  else {
    iVar5 = *(int *)(param_2 + 0x1c);
    iVar4 = (**(code **)(param_2 + 0x20))(*(undefined4 *)(param_2 + 0x28),1,0x2530);
    if (iVar4 == 0) {
      uVar3 = 0xfffffffc;
    }
    else {
      iVar7 = 0;
      if ((*(int *)(iVar5 + 0x34) != 0) &&
         (iVar7 = (**(code **)(param_2 + 0x20))
                            (*(undefined4 *)(param_2 + 0x28),
                             1 << ((byte)*(undefined4 *)(iVar5 + 0x24) & 0x1f),1), iVar7 == 0)) {
        (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),iVar4);
        return 0xfffffffc;
      }
      FUN_0049de20();
      FUN_0049de20();
      uVar1 = iVar5 + 0x530;
      uVar2 = *(uint *)(iVar5 + 0x4c);
      if ((uVar1 <= uVar2) && (uVar2 <= iVar5 + 0x252cU)) {
        iVar6 = uVar2 - uVar1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 3;
        }
        *(int *)(iVar4 + 0x4c) = (iVar6 >> 2) * 4 + iVar4 + 0x530;
        iVar6 = *(int *)(iVar5 + 0x50) - uVar1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 3;
        }
        *(int *)(iVar4 + 0x50) = (iVar6 >> 2) * 4 + iVar4 + 0x530;
      }
      iVar5 = *(int *)(iVar5 + 0x6c) - uVar1;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      *(int *)(iVar4 + 0x6c) = (iVar5 >> 2) * 4 + iVar4 + 0x530;
      if (iVar7 != 0) {
        FUN_0049de20();
      }
      *(int *)(iVar4 + 0x34) = iVar7;
      *(int *)(param_1 + 0x1c) = iVar4;
      uVar3 = 0;
    }
  }
  return uVar3;
}

