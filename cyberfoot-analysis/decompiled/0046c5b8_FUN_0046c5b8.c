// Address: 0046c5b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046c5b8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  HWND pHVar3;
  BOOL BVar4;
  HWND pHVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UINT UVar10;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar2 = FUN_0046cde4(param_1);
  if (cVar2 != '\0') {
    pHVar3 = (HWND)FUN_0046cae0(param_1);
    BVar4 = IsWindowVisible(pHVar3);
    if (BVar4 != 0) {
      bVar1 = true;
      goto LAB_0046c5e7;
    }
  }
  bVar1 = false;
LAB_0046c5e7:
  if (bVar1) {
    UVar10 = 0x97;
    iVar9 = 0;
    iVar8 = 0;
    iVar7 = 0;
    iVar6 = 0;
    pHVar5 = (HWND)0x0;
    pHVar3 = (HWND)FUN_0046cae0(param_1);
    SetWindowPos(pHVar3,pHVar5,iVar6,iVar7,iVar8,iVar9,UVar10);
  }
  FUN_00465ba8(param_1,&uStack_20);
  FUN_00403c80(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x84))(param_1,uStack_20,uStack_1c,param_1[0x13],param_1[0x12]);
  if (bVar1) {
    UVar10 = 0x57;
    iVar9 = 0;
    iVar8 = 0;
    iVar7 = 0;
    iVar6 = 0;
    pHVar5 = (HWND)0x0;
    pHVar3 = (HWND)FUN_0046cae0(param_1);
    SetWindowPos(pHVar3,pHVar5,iVar6,iVar7,iVar8,iVar9,UVar10);
  }
  return;
}

