// Address: 0051fb94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051fb94(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int nDenominator;
  int nDenominator_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = *param_2;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar7 = param_2[3];
  nDenominator = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
  iVar7 = iVar7 - iVar1;
  nDenominator_00 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  iVar2 = iVar2 - iVar6;
  iVar4 = iVar2;
  iVar8 = nDenominator_00;
  uVar3 = FUN_0051d4c8(param_1,1);
  iVar4 = MulDiv(uVar3 & 0xffff,iVar4,iVar8);
  *param_3 = iVar4 + iVar6;
  iVar4 = iVar7;
  iVar8 = nDenominator;
  uVar3 = FUN_0051d4c8(param_1,2);
  iVar4 = MulDiv(uVar3 & 0xffff,iVar4,iVar8);
  param_3[1] = iVar4 + iVar1;
  uVar3 = FUN_0051d4c8(param_1,1);
  uVar3 = uVar3 & 0xffff;
  uVar5 = FUN_0051d4c8(param_1,3);
  iVar2 = MulDiv(uVar3 + (uVar5 & 0xffff),iVar2,nDenominator_00);
  param_3[2] = iVar2 + iVar6;
  uVar3 = FUN_0051d4c8(param_1,2);
  uVar5 = FUN_0051d4c8(param_1,4);
  iVar6 = MulDiv((uVar3 & 0xffff) + (uVar5 & 0xffff),iVar7,nDenominator);
  param_3[3] = iVar6 + iVar1;
  return;
}

