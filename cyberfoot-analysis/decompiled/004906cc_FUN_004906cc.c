// Address: 004906cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004906cc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *local_10;
  
  iVar1 = param_1[0x1e];
  iVar2 = param_1[0x18];
  iVar8 = 1;
  do {
    iVar6 = iVar8;
    iVar8 = iVar6 + 1;
    iVar7 = 1;
    iVar4 = iVar8;
    if (1 < iVar1) {
      do {
        iVar4 = iVar4 * iVar8;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
  } while (iVar4 <= iVar2);
  if (iVar6 < 2) {
    iVar8 = *param_1;
    *(undefined4 *)(iVar8 + 0x14) = 0x38;
    *(int *)(iVar8 + 0x18) = iVar4;
    (**(code **)*param_1)();
  }
  iVar8 = 1;
  iVar4 = 0;
  piVar5 = param_2;
  if (0 < iVar1) {
    do {
      *piVar5 = iVar6;
      iVar8 = iVar8 * iVar6;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < iVar1);
  }
  do {
    bVar3 = false;
    iVar4 = 0;
    local_10 = &DAT_006655b8;
    if (0 < iVar1) {
      do {
        iVar7 = iVar4;
        if (param_1[0xb] == 2) {
          iVar7 = *local_10;
        }
        iVar6 = (iVar8 / param_2[iVar7]) * (param_2[iVar7] + 1);
        if (iVar6 - iVar2 != 0 && iVar2 <= iVar6) break;
        iVar4 = iVar4 + 1;
        param_2[iVar7] = param_2[iVar7] + 1;
        bVar3 = true;
        local_10 = local_10 + 1;
        iVar8 = iVar6;
      } while (iVar4 < iVar1);
    }
    if (!bVar3) {
      return iVar8;
    }
  } while( true );
}

