// Address: 0065b724
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_0065b724(uint param_1)

{
  int **ppiVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint local_7f0;
  uint local_7ec;
  uint local_7e8;
  int *local_7e4 [502];
  
  iVar7 = 500;
  local_7e4[0] = &DAT_006d5338;
  do {
    iVar6 = 0xfa;
    piVar8 = local_7e4[0];
    do {
      iVar4 = 2;
      piVar5 = piVar8;
      do {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      piVar8 = piVar8 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_7e4[0] = local_7e4[0] + 500;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if ((int)param_1 < 0x1f5) {
    if (0 < (int)param_1) {
      piVar8 = (int *)0x1;
      ppiVar1 = local_7e4 + 2;
      local_7e8 = param_1;
      do {
        *ppiVar1 = piVar8;
        piVar8 = (int *)((int)piVar8 + 1);
        ppiVar1 = ppiVar1 + 1;
        local_7e8 = local_7e8 - 1;
      } while (local_7e8 != 0);
    }
    if ((0 < (int)param_1) && (iVar7 = param_1 + 1, iVar7 < 0x1f5)) {
      ppiVar1 = local_7e4 + param_1 + 2;
      do {
        *ppiVar1 = (int *)0x0;
        iVar7 = iVar7 + 1;
        ppiVar1 = ppiVar1 + 1;
      } while (iVar7 != 0x1f5);
    }
    local_7f0 = param_1 - 1;
    iVar7 = (int)local_7f0 >> 1;
    if (iVar7 < 0) {
      iVar7 = iVar7 + (uint)((local_7f0 & 1) != 0);
    }
    uVar2 = param_1 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    local_7ec = param_1;
    if (uVar2 == 0) {
      local_7f0 = param_1 - 2;
      local_7ec = param_1 - 1;
    }
    if (0 < (int)local_7ec) {
      uVar2 = 1;
      local_7e4[1] = &DAT_006d5338;
      local_7e8 = local_7ec;
      do {
        if (0 < iVar7) {
          iVar4 = 1;
          ppiVar1 = local_7e4 + 2;
          iVar6 = iVar7;
          piVar8 = local_7e4[1];
          do {
            if ((uVar2 & 1) == 0) {
              *piVar8 = (int)local_7e4[(local_7f0 - iVar4) + 2];
              piVar8[1] = (int)*ppiVar1;
            }
            else {
              *piVar8 = (int)*ppiVar1;
              piVar8[1] = (int)local_7e4[(local_7f0 - iVar4) + 2];
            }
            iVar4 = iVar4 + 1;
            piVar8 = piVar8 + 2;
            ppiVar1 = ppiVar1 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (param_1 - local_7f0 == 2) {
          uVar3 = uVar2 & 0x80000001;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
          }
          if (uVar3 == 0) {
            local_7e4[1][iVar7 * 2] = (int)local_7e4[local_7ec + 1];
            local_7e4[1][iVar7 * 2 + 1] = (int)local_7e4[local_7f0 + 3];
          }
          else {
            local_7e4[1][iVar7 * 2 + 1] = (int)local_7e4[local_7ec + 1];
            local_7e4[1][iVar7 * 2] = (int)local_7e4[local_7f0 + 3];
          }
        }
        else {
          local_7e4[1][iVar7 * 2] = (int)local_7e4[local_7ec + 1];
          local_7e4[1][iVar7 * 2 + 1] = DAT_0066ac30;
        }
        piVar8 = local_7e4[local_7ec + 1];
        if (1 < (int)local_7ec) {
          ppiVar1 = local_7e4 + local_7ec;
          uVar3 = local_7ec;
          do {
            ppiVar1[1] = *ppiVar1;
            uVar3 = uVar3 - 1;
            ppiVar1 = ppiVar1 + -1;
          } while (uVar3 != 1);
        }
        local_7e4[2] = piVar8;
        uVar2 = uVar2 + 1;
        local_7e4[1] = local_7e4[1] + 500;
        local_7e8 = local_7e8 - 1;
      } while (local_7e8 != 0);
    }
  }
  return;
}

