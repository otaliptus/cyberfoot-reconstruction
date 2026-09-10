// Address: 00647830
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00647830(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_0066af70;
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 1) {
    if (param_3 == 0) {
      if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
        iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x1a4 + param_1 * 4);
        if (iVar2 - 1U < 2) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + 3;
        }
        else if (iVar2 - 5U < 6) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -1;
        }
        else if (iVar2 - 0xbU < 6) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -3;
        }
        else if (iVar2 - 0x11U < 4) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -5;
        }
      }
      else {
        iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x1a4 + param_1 * 4);
        if (iVar2 - 1U < 2) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + 2;
        }
        else if (iVar2 - 5U < 4) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -5;
        }
        else if (iVar2 - 9U < 2) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -7;
        }
      }
    }
    else if (param_3 == 1) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_2 * 0x2f8);
      *piVar1 = *piVar1 + 5;
      if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
        iVar2 = *(int *)(*(int *)puVar3 + param_2 * 0x2f8 + 0x1a4 + param_1 * 4);
        if (iVar2 - 1U < 2) {
          piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + 3;
        }
        else if (iVar2 - 3U < 2) {
          piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + 1;
        }
      }
      else {
        iVar2 = *(int *)(*(int *)puVar3 + param_2 * 0x2f8 + 0x1a4 + param_1 * 4);
        if (iVar2 - 1U < 2) {
          piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + 5;
        }
        else if (iVar2 - 3U < 2) {
          piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + 3;
        }
      }
    }
    else if (param_3 == 2) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_2 * 0x2f8);
      *piVar1 = *piVar1 + -5;
      if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
        iVar2 = *(int *)(*(int *)puVar3 + param_2 * 0x2f8 + 0x1a4 + param_1 * 4);
        if (iVar2 - 0xdU < 5) {
          piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -3;
        }
        else if (iVar2 - 0x12U < 3) {
          piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -7;
        }
      }
      else {
        iVar2 = *(int *)(*(int *)puVar3 + param_2 * 0x2f8 + 0x1a4 + param_1 * 4);
        if (iVar2 - 5U < 3) {
          piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -7;
        }
        else if (iVar2 - 8U < 3) {
          piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -10;
        }
      }
    }
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) {
    if (param_3 == 0) {
      iVar2 = *(int *)(*(int *)puVar3 + 0x1b0 + param_2 * 0x2f8);
      if (iVar2 - 1U < 2) {
        piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
        *piVar1 = *piVar1 + 2;
      }
      else if (iVar2 - 5U < 2) {
        piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
        *piVar1 = *piVar1 + -2;
      }
    }
    else if (param_3 == 1) {
      iVar2 = *(int *)(*(int *)puVar3 + 0x1b0 + param_2 * 0x2f8);
      if (iVar2 - 1U < 2) {
        piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
        *piVar1 = *piVar1 + 7;
      }
      else if (iVar2 - 3U < 2) {
        piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
        *piVar1 = *piVar1 + 5;
      }
      else if (iVar2 - 5U < 2) {
        piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
        *piVar1 = *piVar1 + 3;
      }
    }
    else if (param_3 == 2) {
      iVar2 = *(int *)(*(int *)puVar3 + 0x1b0 + param_2 * 0x2f8);
      if (iVar2 - 1U < 2) {
        piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
        *piVar1 = *piVar1 + -3;
      }
      else if (iVar2 - 3U < 2) {
        piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
        *piVar1 = *piVar1 + -5;
      }
      else if (iVar2 - 5U < 2) {
        piVar1 = (int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8);
        *piVar1 = *piVar1 + -7;
      }
    }
  }
  if (*(int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8) < 0x28) {
    if (*(int *)(*(int *)puVar3 + 0x98 + param_2 * 0x2f8) < 0x15) {
      piVar1 = (int *)(*(int *)puVar3 + 0x50 + param_2 * 0x2f8);
      *piVar1 = *piVar1 + -8;
    }
    else {
      piVar1 = (int *)(*(int *)puVar3 + 0x50 + param_2 * 0x2f8);
      *piVar1 = *piVar1 + -5;
    }
  }
  if (*(int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8) < 0) {
    *(undefined4 *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8) = 0;
  }
  if (100 < *(int *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8)) {
    *(undefined4 *)(*(int *)puVar3 + 0x54 + param_2 * 0x2f8) = 100;
  }
  if (*(int *)(*(int *)puVar3 + 0x50 + param_2 * 0x2f8) < 0) {
    *(undefined4 *)(*(int *)puVar3 + 0x50 + param_2 * 0x2f8) = 0;
  }
  if (100 < *(int *)(*(int *)puVar3 + 0x50 + param_2 * 0x2f8)) {
    *(undefined4 *)(*(int *)puVar3 + 0x50 + param_2 * 0x2f8) = 100;
  }
  return;
}

