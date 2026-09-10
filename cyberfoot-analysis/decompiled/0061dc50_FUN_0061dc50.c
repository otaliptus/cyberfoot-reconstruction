// Address: 0061dc50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061dc50(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = PTR_DAT_0066b5b8;
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7c + param_1 * 0x130) == '\0') {
    uVar2 = *(uint *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_1 * 0x130);
    if ((int)uVar2 < 0x2e) {
      if (uVar2 < 0x1a) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + param_1 * 0x130);
        *piVar1 = *piVar1 + 0x37;
      }
      else if (uVar2 - 0x1a < 10) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + param_1 * 0x130);
        *piVar1 = *piVar1 + 0x28;
      }
      else if (uVar2 - 0x24 < 10) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + param_1 * 0x130);
        *piVar1 = *piVar1 + 0x1e;
      }
    }
    else if (uVar2 - 0x2e < 10) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + param_1 * 0x130);
      *piVar1 = *piVar1 + 0x14;
    }
    else if (uVar2 - 0x38 < 0xf) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + param_1 * 0x130);
      *piVar1 = *piVar1 + 10;
    }
    else if (uVar2 - 0x47 < 100) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + param_1 * 0x130);
      *piVar1 = *piVar1 + 5;
    }
  }
  else {
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) != 0) {
      uVar2 = *(uint *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_1 * 0x130);
      if ((int)uVar2 < 0x22) {
        if (uVar2 < 0x1b) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + param_1 * 0x130);
          *piVar1 = *piVar1 + 10;
        }
        else if (uVar2 - 0x1b < 7) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + param_1 * 0x130);
          *piVar1 = *piVar1 + 0x14;
        }
      }
      else if (uVar2 - 0x22 < 0xc) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + param_1 * 0x130);
        *piVar1 = *piVar1 + 0x1e;
      }
      else if (uVar2 - 0x2e < 10) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + param_1 * 0x130);
        *piVar1 = *piVar1 + 0x28;
      }
      else if (uVar2 - 0x38 < 0x73) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + param_1 * 0x130);
        *piVar1 = *piVar1 + 0x32;
      }
    }
    if (*(int *)(*(int *)puVar3 + 0x24 + param_1 * 0x130) == 0) {
      uVar2 = *(uint *)(*(int *)puVar3 + 0x18 + param_1 * 0x130);
      if ((int)uVar2 < 0x22) {
        if (uVar2 < 0x1b) {
          piVar1 = (int *)(*(int *)puVar3 + 0x78 + param_1 * 0x130);
          *piVar1 = *piVar1 + 5;
        }
        else if (uVar2 - 0x1b < 7) {
          piVar1 = (int *)(*(int *)puVar3 + 0x78 + param_1 * 0x130);
          *piVar1 = *piVar1 + 10;
        }
      }
      else if (uVar2 - 0x22 < 0xc) {
        piVar1 = (int *)(*(int *)puVar3 + 0x78 + param_1 * 0x130);
        *piVar1 = *piVar1 + 0xe;
      }
      else if (uVar2 - 0x2e < 10) {
        piVar1 = (int *)(*(int *)puVar3 + 0x78 + param_1 * 0x130);
        *piVar1 = *piVar1 + 0x12;
      }
      else if (uVar2 - 0x38 < 0x73) {
        piVar1 = (int *)(*(int *)puVar3 + 0x78 + param_1 * 0x130);
        *piVar1 = *piVar1 + 0x14;
      }
    }
  }
  if (*(char *)(*(int *)puVar3 + 0x15 + param_1 * 0x130) != '\0') {
    piVar1 = (int *)(*(int *)puVar3 + 0x78 + param_1 * 0x130);
    *piVar1 = *piVar1 + 3;
  }
  if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                *(int *)(*(int *)puVar3 + 0x20 + param_1 * 0x130) * 0x2f8) == '\0') &&
     (*(int *)(*(int *)puVar3 + 0x78 + param_1 * 0x130) < 0x1e)) {
    iVar4 = FUN_004032c8(0x14);
    *(int *)(*(int *)puVar3 + 0x78 + param_1 * 0x130) = iVar4 + 0x14;
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 0) {
    piVar1 = (int *)(*(int *)puVar3 + 0x78 + param_1 * 0x130);
    *piVar1 = *piVar1 + 5;
  }
  if (100 < *(int *)(*(int *)puVar3 + 0x78 + param_1 * 0x130)) {
    *(undefined4 *)(*(int *)puVar3 + 0x78 + param_1 * 0x130) = 100;
  }
  if (*(int *)(*(int *)puVar3 + 0x78 + param_1 * 0x130) < 0) {
    *(undefined4 *)(*(int *)puVar3 + 0x78 + param_1 * 0x130) = 5;
  }
  *(undefined1 *)(*(int *)puVar3 + 0x7c + param_1 * 0x130) = 0;
  return;
}

