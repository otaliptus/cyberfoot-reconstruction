// Address: 00618310
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00618310(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  float local_18;
  float local_14;
  
  puVar3 = PTR_DAT_0066b5b8;
  if ((((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
                 *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) * 0x2f8) != 1) ||
       (0x23 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_2 * 0x130))) &&
      ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
                *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) * 0x2f8) != 2 ||
       (0x19 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_2 * 0x130))))) &&
     ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
               *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) * 0x2f8) != 3 ||
      (10 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_2 * 0x130))))) {
    local_18 = 0.0;
    local_14 = 0.0;
    iVar2 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_2 * 0x130);
    iVar4 = iVar2 + -0x1f;
    if (0x13 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) * 0x2f8)) {
      iVar4 = iVar2 + -0x21;
    }
    iVar2 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_2 * 0x130);
    if (iVar2 - 1U < 0x32) {
      local_18 = (float)(_DAT_00618524 * (float10)iVar4);
    }
    else if (iVar2 - 0x33U < 0x14) {
      local_18 = (float)(_DAT_00618530 * (float10)iVar4);
    }
    else if (iVar2 - 0x47U < 0x1e) {
      local_18 = (float)iVar4 * _DAT_0061853c;
    }
    if (_DAT_00618540 <= local_18) {
      if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
        if (PTR_DAT_0066ac78[0x170] == '\0') {
          local_14 = local_18 / _DAT_00618548;
        }
        else {
          local_14 = local_18 / _DAT_00618544;
        }
      }
      if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
        if (PTR_DAT_0066ac78[0x170] == '\0') {
          local_14 = local_18 / _DAT_00618550;
        }
        else {
          local_14 = local_18 / _DAT_0061854c;
        }
      }
      *(float *)(*(int *)PTR_DAT_0066b5b8 + 0x80 + param_2 * 0x130) =
           *(float *)(*(int *)PTR_DAT_0066b5b8 + 0x80 + param_2 * 0x130) + local_14;
      if ((_DAT_00618540 <= *(float *)(*(int *)puVar3 + 0x80 + param_2 * 0x130)) &&
         (1 < *(int *)(*(int *)puVar3 + 0x28 + param_2 * 0x130))) {
        piVar1 = (int *)(*(int *)puVar3 + 0x28 + param_2 * 0x130);
        *piVar1 = *piVar1 + -1;
        *(float *)(*(int *)puVar3 + 0x80 + param_2 * 0x130) =
             *(float *)(*(int *)puVar3 + 0x80 + param_2 * 0x130) - _DAT_00618540;
      }
      if (*(int *)(*(int *)puVar3 + 0x28 + param_2 * 0x130) < 1) {
        *(undefined4 *)(*(int *)puVar3 + 0x28 + param_2 * 0x130) = 1;
      }
    }
  }
  return;
}

