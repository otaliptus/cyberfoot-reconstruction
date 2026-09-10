// Address: 004bfba4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bfba4(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *param_3;
  iVar6 = param_3[1];
  iVar2 = param_3[2];
  iVar7 = param_3[3];
  FUN_004080c0(param_5);
  FUN_004080c0(param_4);
  FUN_004080c4(param_5);
  FUN_004080c4(param_4);
  FUN_004080c8(param_5);
  FUN_004080c8(param_4);
  if (-1 < iVar7 - iVar6) {
    iVar7 = (iVar7 - iVar6) + 1;
    iVar6 = 0;
    do {
      uVar3 = FUN_00402c38();
      uVar4 = FUN_00402c38();
      uVar5 = FUN_00402c38();
      uVar3 = FUN_004080a4(uVar5,uVar4,uVar3);
      FUN_0042a88c(*(undefined4 *)(param_2 + 0x10),uVar3);
      FUN_0042b064(param_2,iVar1,iVar6);
      FUN_0042b004(param_2,iVar2 + iVar1,iVar6);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

