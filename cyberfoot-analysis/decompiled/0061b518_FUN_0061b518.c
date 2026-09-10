// Address: 0061b518
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b518(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  float local_10;
  
  puVar3 = PTR_DAT_0066b5b8;
  local_10 = 0.0;
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_2 * 0x130) < 0x15) {
    if (PTR_DAT_0066ac78[0x170] == '\0') {
      iVar4 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130);
      if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar4 * 0x2f8) < 0x15) ||
         (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) != '\0')) {
        iVar4 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130);
        if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar4 * 0x2f8) < 0x13) ||
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) != '\0')) {
          if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
            iVar4 = 0x23;
          }
          else {
            iVar4 = 0x14;
          }
        }
        else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
          iVar4 = 0x1e;
        }
        else {
          iVar4 = 0x12;
        }
      }
      else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
        iVar4 = 0x1c;
      }
      else {
        iVar4 = 0xf;
      }
    }
    else {
      iVar4 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130);
      if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar4 * 0x2f8) < 0x15) ||
         (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) != '\0')) {
        iVar4 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130);
        if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar4 * 0x2f8) < 0x13) ||
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) != '\0')) {
          if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
            iVar4 = 0x2b;
          }
          else {
            iVar4 = 0x19;
          }
        }
        else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
          iVar4 = 0x25;
        }
        else {
          iVar4 = 0x18;
        }
      }
      else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
        iVar4 = 0x23;
      }
      else {
        iVar4 = 0x16;
      }
    }
    iVar2 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_2 * 0x130);
    if (iVar2 - 0x10U < 2) {
      local_10 = _DAT_0061b7e4 / (float)iVar4;
    }
    else if (iVar2 == 0x12) {
      local_10 = _DAT_0061b7e8 / (float)iVar4;
    }
    else if (iVar2 == 0x13) {
      local_10 = _DAT_0061b7e8 / (float)iVar4;
    }
    else if (iVar2 == 0x14) {
      local_10 = _DAT_0061b7ec / (float)iVar4;
    }
    iVar4 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + param_2 * 0x130);
    if (iVar4 - 1U < 3) {
      local_10 = (float)(_DAT_0061b7f0 + (float10)local_10);
    }
    else if (iVar4 - 4U < 3) {
      local_10 = (float)(_DAT_0061b7fc + (float10)local_10);
    }
    else if (iVar4 - 7U < 2) {
      local_10 = (float)(_DAT_0061b808 + (float10)local_10);
    }
    else if (iVar4 - 9U < 2) {
      local_10 = (float)(_DAT_0061b814 + (float10)local_10);
    }
    if (local_10 <= _DAT_0061b820) {
      local_10 = 0.01;
    }
    *(float *)(*(int *)PTR_DAT_0066b5b8 + 300 + param_2 * 0x130) =
         *(float *)(*(int *)PTR_DAT_0066b5b8 + 300 + param_2 * 0x130) + local_10;
    if ((_DAT_0061b824 <= *(float *)(*(int *)puVar3 + 300 + param_2 * 0x130)) &&
       (*(int *)(*(int *)puVar3 + 0x128 + param_2 * 0x130) < 100)) {
      piVar1 = (int *)(*(int *)puVar3 + 0x128 + param_2 * 0x130);
      *piVar1 = *piVar1 + 1;
      *(float *)(*(int *)puVar3 + 300 + param_2 * 0x130) =
           *(float *)(*(int *)puVar3 + 300 + param_2 * 0x130) - _DAT_0061b824;
    }
  }
  return;
}

