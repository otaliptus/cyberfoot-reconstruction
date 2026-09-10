// Address: 0064a280
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x0064a401) */
/* WARNING: Removing unreachable block (ram,0x0064a40a) */
/* WARNING: Removing unreachable block (ram,0x0064a433) */
/* WARNING: Removing unreachable block (ram,0x0064a43d) */
/* WARNING: Removing unreachable block (ram,0x0064a58e) */
/* WARNING: Removing unreachable block (ram,0x0064a597) */
/* WARNING: Removing unreachable block (ram,0x0064a5c0) */
/* WARNING: Removing unreachable block (ram,0x0064a5ca) */

void FUN_0064a280(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_1c;
  int local_14;
  
  uVar1 = 0;
  uVar4 = 0;
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 0) {
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b0d4);
    local_14 = 0;
    if (-1 < iVar2 + -1) {
      iVar5 = 0;
      do {
        if ((*(double *)(*(int *)PTR_DAT_0066b0d4 + 0x10 + iVar5 * 0x18) ==
             *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) &&
           ((local_14 = local_14 + 1, param_1 == *(int *)(*(int *)PTR_DAT_0066b0d4 + iVar5 * 0x18)
            || (param_1 == *(int *)(*(int *)PTR_DAT_0066b0d4 + 4 + iVar5 * 0x18))))) {
          if (param_1 == *(int *)(*(int *)PTR_DAT_0066b0d4 + iVar5 * 0x18)) {
            param_2[1] = 0;
            *param_2 = *(int *)(*(int *)PTR_DAT_0066b0d4 + 4 + iVar5 * 0x18);
          }
          else {
            param_2[1] = 1;
            *param_2 = *(int *)(*(int *)PTR_DAT_0066b0d4 + iVar5 * 0x18);
          }
          param_2[2] = local_14;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 7) {
    iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x62c);
    if (iVar2 < 4) {
      iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x94 + param_1 * 0x2f8);
      FUN_00648c98(*(undefined4 *)(PTR_DAT_0066ac78 + 0x62c),
                   *(undefined4 *)(PTR_DAT_0066ac78 + 0x630),1);
      *param_2 = *(int *)(PTR_DAT_0066ac78 + local_1c * 4 + iVar2 * 0x10 + 0x4a8);
      param_2[1] = 0;
      param_2[2] = iVar2;
    }
    else {
      if (iVar2 == 4) {
        uVar1 = 1;
        uVar4 = 8;
      }
      else if (iVar2 == 5) {
        uVar1 = 9;
        uVar4 = 0xc;
      }
      else if (iVar2 == 6) {
        uVar1 = 0xd;
        uVar4 = 0xe;
      }
      else if (iVar2 == 7) {
        uVar1 = 0xf;
        uVar4 = 0x10;
      }
      if (uVar1 <= uVar4) {
        iVar2 = (uVar4 - uVar1) + 1;
        piVar3 = (int *)(PTR_DAT_0066ad60 + uVar1 * 0x30 + -0x30);
        do {
          if (param_1 == *piVar3) {
            *param_2 = piVar3[1];
            param_2[1] = 1;
            param_2[2] = uVar1;
            return;
          }
          if (param_1 == piVar3[1]) {
            *param_2 = *piVar3;
            param_2[1] = 0;
            param_2[2] = uVar1;
            return;
          }
          uVar1 = uVar1 + 1;
          piVar3 = piVar3 + 0xc;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  else {
    iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x88);
    if ((iVar2 == 8) || (iVar2 == 9)) {
      iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x62c);
      if (iVar2 < 4) {
        iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x94 + param_1 * 0x2f8);
        FUN_00648c98(*(undefined4 *)(PTR_DAT_0066ac78 + 0x62c),
                     *(undefined4 *)(PTR_DAT_0066ac78 + 0x630),1);
        *param_2 = *(int *)(PTR_DAT_0066ac78 + local_1c * 4 + iVar2 * 0x10 + 0x4a8);
        param_2[1] = 0;
        param_2[2] = iVar2;
      }
      else {
        if (iVar2 == 4) {
          uVar1 = 1;
          uVar4 = 4;
        }
        else if (iVar2 == 5) {
          uVar1 = 5;
          uVar4 = 6;
        }
        else if (iVar2 == 6) {
          uVar1 = 7;
          uVar4 = 8;
        }
        if (uVar1 <= uVar4) {
          iVar2 = (uVar4 - uVar1) + 1;
          piVar3 = (int *)(PTR_DAT_0066ad60 + uVar1 * 0x30 + -0x30);
          do {
            if (param_1 == *piVar3) {
              *param_2 = piVar3[1];
              param_2[1] = 1;
              param_2[2] = uVar1;
              return;
            }
            if (param_1 == piVar3[1]) {
              *param_2 = *piVar3;
              param_2[1] = 0;
              param_2[2] = uVar1;
              return;
            }
            uVar1 = uVar1 + 1;
            piVar3 = piVar3 + 0xc;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
    else if (iVar2 == 5) {
      iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x1a8);
      if (iVar2 == 1) {
        uVar1 = 1;
        uVar4 = 2;
      }
      else if (iVar2 == 2) {
        uVar1 = 3;
        uVar4 = 4;
      }
      else if (iVar2 == 3) {
        uVar1 = 5;
        uVar4 = 6;
      }
      if (uVar1 <= uVar4) {
        iVar2 = (uVar4 - uVar1) + 1;
        piVar3 = (int *)(PTR_DAT_0066af90 + uVar1 * 0x30 + -0x30);
        do {
          if (param_1 == *piVar3) {
            *param_2 = piVar3[1];
            param_2[1] = 1;
            param_2[2] = uVar1;
            return;
          }
          if (param_1 == piVar3[1]) {
            *param_2 = *piVar3;
            param_2[1] = 0;
            param_2[2] = uVar1;
            return;
          }
          uVar1 = uVar1 + 1;
          piVar3 = piVar3 + 0xc;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}

