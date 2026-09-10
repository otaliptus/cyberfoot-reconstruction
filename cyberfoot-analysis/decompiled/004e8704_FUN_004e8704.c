// Address: 004e8704
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e8704(int *param_1,int param_2,int param_3,int param_4)

{
  HWND pHVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  byte bVar7;
  int aiStackY_17f0 [1516];
  RECT *pRVar8;
  RECT *pRVar9;
  HRGN pHVar10;
  tagRECT *ptVar11;
  UINT UVar12;
  tagRECT local_14;
  
  bVar7 = 0;
  (**(code **)(*param_1 + 0xd8))(param_1,*(undefined1 *)(param_2 + 0x11));
  if (param_3 == 0) {
    puVar3 = (undefined4 *)((int)param_1 + (uint)bVar7 * -8 + 0x225);
    local_14.left = *(int *)((int)param_1 + 0x221);
    puVar6 = (undefined4 *)((int)&local_14 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    puVar4 = puVar3 + (uint)bVar7 * -2 + 1;
    *(undefined4 *)((int)&local_14 + (uint)bVar7 * -8 + 4) = *puVar3;
    *puVar6 = *puVar4;
    puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
    UVar12 = 2;
    ptVar11 = &local_14;
    pHVar10 = (HRGN)0x0;
    pRVar9 = (RECT *)((int)param_1 + 0x221);
    pRVar8 = (RECT *)0x0;
    pHVar1 = (HWND)FUN_0046cae0(param_1);
    ScrollWindowEx(pHVar1,param_3,param_4,pRVar8,pRVar9,pHVar10,ptVar11,UVar12);
  }
  else {
    piVar2 = param_1 + (uint)bVar7 * -2 + 0x85;
    local_14.left = param_1[0x84];
    piVar5 = (int *)((int)&local_14 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(int *)((int)&local_14 + (uint)bVar7 * -8 + 4) = *piVar2;
    *piVar5 = piVar2[(uint)bVar7 * -2 + 1];
    piVar5[(uint)bVar7 * -2 + 1] = (piVar2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    UVar12 = 2;
    ptVar11 = &local_14;
    pHVar10 = (HRGN)0x0;
    pRVar9 = (RECT *)(param_1 + 0x84);
    pRVar8 = (RECT *)0x0;
    pHVar1 = (HWND)FUN_0046cae0(param_1);
    ScrollWindowEx(pHVar1,param_3,param_4,pRVar8,pRVar9,pHVar10,ptVar11,UVar12);
  }
  (**(code **)(*param_1 + 0xd4))(param_1,*(undefined1 *)(param_2 + 0x11));
  return;
}

