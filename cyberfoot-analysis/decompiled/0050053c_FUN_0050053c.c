// Address: 0050053c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050053c(int param_1,int *param_2,int *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_28 [16];
  int iStack_18;
  int iStack_14;
  
  iVar11 = *param_3;
  iVar10 = param_3[1];
  iVar8 = param_3[2];
  iVar7 = param_3[3];
  if (param_2 != (int *)0x0) {
    iStack_18 = (**(code **)(*param_2 + 0x2c))();
    dVar1 = (double)iStack_18;
    iStack_14 = iVar8 - iVar11;
    dVar2 = (double)iStack_14;
    iStack_18 = (**(code **)(*param_2 + 0x20))();
    dVar3 = (double)iStack_18;
    iStack_14 = iVar7 - iVar10;
    dVar4 = (double)iStack_14;
    FUN_0043233c();
    iStack_18 = (**(code **)(*param_2 + 0x2c))();
    uVar5 = FUN_00402c38();
    iStack_18 = (**(code **)(*param_2 + 0x20))();
    uVar6 = FUN_00402c38();
    if (dVar4 / dVar3 <= dVar2 / dVar1) {
      iVar9 = iVar8 - iVar11 >> 1;
      if (iVar9 < 0) {
        iVar9 = iVar9 + (uint)((iVar8 - iVar11 & 1U) != 0);
      }
      iVar8 = (int)uVar5 >> 1;
      if (iVar8 < 0) {
        iVar8 = iVar8 + (uint)((uVar5 & 1) != 0);
      }
      iVar11 = (iVar9 - iVar8) + iVar11;
      FUN_0041c990(iVar11,iVar10,iVar11 + uVar5,auStack_28,(iVar7 - iVar10) + iVar10);
    }
    else {
      iVar9 = iVar7 - iVar10 >> 1;
      if (iVar9 < 0) {
        iVar9 = iVar9 + (uint)((iVar7 - iVar10 & 1U) != 0);
      }
      iVar7 = (int)uVar6 >> 1;
      if (iVar7 < 0) {
        iVar7 = iVar7 + (uint)((uVar6 & 1) != 0);
      }
      iVar10 = (iVar9 - iVar7) + iVar10;
      FUN_0041c990(iVar11,iVar10,iVar11 + (iVar8 - iVar11),auStack_28,uVar6 + iVar10);
    }
    FUN_0042b20c(*(undefined4 *)(param_1 + 0x20),auStack_28,param_2);
  }
  return;
}

