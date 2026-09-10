// Address: 0061ad68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061ad68(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  float local_18;
  
  puVar2 = PTR_DAT_0066b5b8;
  local_18 = 0.0;
  if (PTR_DAT_0066ac78[0x170] == '\0') {
    iVar4 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130);
    if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar4 * 0x2f8) < 0x15) ||
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) != '\0')) {
      iVar4 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130);
      if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar4 * 0x2f8) < 0x13) ||
         (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) != '\0')) {
        if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) == '\0') {
          if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
            iVar4 = 0x37;
          }
          else {
            iVar4 = 0x28;
          }
        }
        else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
          iVar4 = 0x23;
        }
        else {
          iVar4 = 0x19;
        }
      }
      else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
        iVar4 = 0x28;
      }
      else {
        iVar4 = 0x1c;
      }
    }
    else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      iVar4 = 0x26;
    }
    else {
      iVar4 = 0x19;
    }
  }
  else {
    iVar4 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130);
    if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar4 * 0x2f8) < 0x15) ||
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) != '\0')) {
      iVar4 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130);
      if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar4 * 0x2f8) < 0x13) ||
         (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) != '\0')) {
        if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) == '\0') {
          if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
            iVar4 = 0x35;
          }
          else {
            iVar4 = 0x23;
          }
        }
        else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
          iVar4 = 0x28;
        }
        else {
          iVar4 = 0x1e;
        }
      }
      else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
        iVar4 = 0x2f;
      }
      else {
        iVar4 = 0x22;
      }
    }
    else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      iVar4 = 0x2d;
    }
    else {
      iVar4 = 0x20;
    }
  }
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
              *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) * 0x2f8) < 0x13) {
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) * 0x2f8) < 0xf) {
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) * 0x2f8) < 0xb) {
        switch(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_2 * 0x130)) {
        case 0x10:
        case 0x11:
          local_18 = _DAT_0061b4c0 / (float)iVar4;
          break;
        case 0x12:
          local_18 = _DAT_0061b4c0 / (float)iVar4;
          break;
        case 0x13:
          local_18 = _DAT_0061b4c4 / (float)iVar4;
          break;
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
          local_18 = _DAT_0061b4c8 / (float)iVar4;
          break;
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
          local_18 = _DAT_0061b4c8 / (float)iVar4;
        }
      }
      else {
        switch(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_2 * 0x130)) {
        case 0x10:
        case 0x11:
          local_18 = _DAT_0061b4bc / (float)iVar4;
          break;
        case 0x12:
          local_18 = _DAT_0061b4b8 / (float)iVar4;
          break;
        case 0x13:
          local_18 = _DAT_0061b4bc / (float)iVar4;
          break;
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
          local_18 = _DAT_0061b4bc / (float)iVar4;
          break;
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
          local_18 = _DAT_0061b4b8 / (float)iVar4;
        }
      }
    }
    else {
      switch(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_2 * 0x130)) {
      case 0x10:
      case 0x11:
        local_18 = _DAT_0061b4b4 / (float)iVar4;
        break;
      case 0x12:
        local_18 = _DAT_0061b4b8 / (float)iVar4;
        break;
      case 0x13:
        local_18 = _DAT_0061b4b8 / (float)iVar4;
        break;
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
        local_18 = _DAT_0061b4b4 / (float)iVar4;
        break;
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
        local_18 = _DAT_0061b4b8 / (float)iVar4;
      }
    }
  }
  else {
    switch(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_2 * 0x130)) {
    case 0x10:
    case 0x11:
      local_18 = _DAT_0061b4b0 / (float)iVar4;
      break;
    case 0x12:
      local_18 = _DAT_0061b4b0 / (float)iVar4;
      break;
    case 0x13:
      local_18 = _DAT_0061b4b4 / (float)iVar4;
      break;
    case 0x14:
      local_18 = _DAT_0061b4b0 / (float)iVar4;
      break;
    case 0x15:
      local_18 = _DAT_0061b4b0 / (float)iVar4;
      break;
    case 0x16:
      local_18 = _DAT_0061b4b4 / (float)iVar4;
      break;
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
      local_18 = _DAT_0061b4b8 / (float)iVar4;
      break;
    case 0x1d:
    case 0x1e:
    case 0x1f:
      local_18 = _DAT_0061b4bc / (float)iVar4;
    }
  }
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7c + param_2 * 0x130) != '\0') {
    local_18 = (float)(_DAT_0061b4cc + (float10)local_18);
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + param_2 * 0x130) == 3) {
    local_18 = (float)(_DAT_0061b4d8 + (float10)local_18);
  }
  iVar4 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_2 * 0x130);
  if (iVar4 - 0x1eU < 0xb) {
    local_18 = (float)((float10)local_18 - _DAT_0061b4e4);
  }
  else if (iVar4 - 0x29U < 10) {
    local_18 = (float)((float10)local_18 - _DAT_0061b4f0);
  }
  else if (iVar4 - 0x33U < 0x14) {
    local_18 = (float)((float10)local_18 - _DAT_0061b4cc);
  }
  else if (iVar4 - 0x47U < 0x1e) {
    local_18 = (float)((float10)local_18 - _DAT_0061b4fc);
  }
  if (0 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x128 + param_2 * 0x130)) {
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x128 + param_2 * 0x130) < 0x32) {
      local_18 = (float)((float10)local_18 - _DAT_0061b508);
    }
    else if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x128 + param_2 * 0x130) < 0x50) {
      local_18 = (float)((float10)local_18 - _DAT_0061b4cc);
    }
    if (7 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + param_2 * 0x130)) {
      local_18 = (float)(_DAT_0061b4cc + (float10)local_18);
    }
  }
  if (local_18 <= _DAT_0061b514) {
    local_18 = 0.01;
  }
  *(float *)(*(int *)PTR_DAT_0066b5b8 + 0x80 + param_2 * 0x130) =
       *(float *)(*(int *)PTR_DAT_0066b5b8 + 0x80 + param_2 * 0x130) + local_18;
  if (((_DAT_0061b4c8 <= *(float *)(*(int *)puVar2 + 0x80 + param_2 * 0x130)) &&
      (*(int *)(*(int *)puVar2 + 0x28 + param_2 * 0x130) < 100)) &&
     (cVar3 = FUN_0061ac98(param_1,param_2), cVar3 != '\0')) {
    piVar1 = (int *)(*(int *)puVar2 + 0x28 + param_2 * 0x130);
    *piVar1 = *piVar1 + 1;
    *(float *)(*(int *)puVar2 + 0x80 + param_2 * 0x130) =
         *(float *)(*(int *)puVar2 + 0x80 + param_2 * 0x130) - _DAT_0061b4c8;
  }
  if (0 < *(int *)(*(int *)puVar2 + 0x128 + param_2 * 0x130)) {
    if ((0x5a < *(int *)(*(int *)puVar2 + 0x28 + param_2 * 0x130)) &&
       (*(int *)(*(int *)puVar2 + 0x30 + param_2 * 0x130) < 8)) {
      *(undefined4 *)(*(int *)puVar2 + 0x28 + param_2 * 0x130) = 0x5a;
    }
    if ((0x5f < *(int *)(*(int *)puVar2 + 0x28 + param_2 * 0x130)) &&
       (*(int *)(*(int *)puVar2 + 0x30 + param_2 * 0x130) < 9)) {
      *(undefined4 *)(*(int *)puVar2 + 0x28 + param_2 * 0x130) = 0x5f;
    }
  }
  if (*(int *)(*(int *)puVar2 + 0x28 + param_2 * 0x130) < 1) {
    *(undefined4 *)(*(int *)puVar2 + 0x28 + param_2 * 0x130) = 1;
  }
  return;
}

