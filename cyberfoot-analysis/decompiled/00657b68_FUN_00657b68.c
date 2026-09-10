// Address: 00657b68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00657b68(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar6;
  int local_30 [4];
  int local_20;
  int local_18;
  float local_14;
  int local_c;
  int local_8;
  
  local_14 = 5.0;
  if (param_4 == -1) {
    param_4 = *(int *)(PTR_DAT_0066b380 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) * 4);
  }
  if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + param_2 * 0x1bc) == param_3) {
    iVar6 = 1;
    local_18 = 2;
  }
  else {
    iVar6 = 2;
    local_18 = 1;
  }
  if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4) <
      *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + iVar6 * 4)) {
    iVar2 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130);
    if (iVar2 - 1U < 0x1e) {
      local_14 = 5.0;
    }
    else if (iVar2 - 0x1fU < 0x1e) {
      local_14 = 5.5;
    }
    else if (iVar2 - 0x3dU < 0x1e) {
      local_14 = 6.0;
    }
    else if (iVar2 - 0x5bU < 10) {
      local_14 = 6.0;
    }
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + iVar6 * 4) <
           *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4)) {
    iVar2 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130);
    if (iVar2 - 1U < 0x1e) {
      local_14 = 4.0;
    }
    else if (iVar2 - 0x1fU < 0x1e) {
      local_14 = 4.5;
    }
    else if (iVar2 - 0x3dU < 0x1e) {
      local_14 = 5.0;
    }
    else if (iVar2 - 0x5bU < 10) {
      local_14 = 5.5;
    }
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4) ==
           *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + iVar6 * 4)) {
    iVar2 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130);
    if (iVar2 - 1U < 0x1e) {
      local_14 = 5.0;
    }
    else if (iVar2 - 0x1fU < 0x1e) {
      local_14 = 5.0;
    }
    else if (iVar2 - 0x3dU < 0x1e) {
      local_14 = 6.0;
    }
    else if (iVar2 - 0x5bU < 10) {
      local_14 = 6.0;
    }
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) == 0) {
    local_14 = 4.5;
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_1 * 0x130) !=
      *(int *)(PTR_DAT_0066b734 + param_4 * 0xc + -0xc)) {
    local_14 = local_14 - _DAT_00658640;
  }
  local_c = param_3;
  local_8 = param_1;
  if ((9 < param_4) && (param_4 < 0x12)) {
    if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x84 + local_18 * 4) <
        *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x84 + iVar6 * 4)) {
      iVar2 = FUN_004032c8(3);
      fVar1 = _DAT_00658648;
      if (iVar2 == 1) {
        fVar1 = _DAT_00658644;
      }
      local_14 = local_14 + fVar1;
      if ((0xd < param_4) && (param_4 < 0x12)) {
        iVar2 = FUN_004032c8(3);
        if (iVar2 == 1) {
          local_14 = local_14 + _DAT_00658648;
        }
        else {
          local_14 = local_14 + _DAT_00658644;
        }
      }
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + local_8 * 0x130) == 0) {
        local_14 = local_14 + _DAT_00658644;
      }
    }
    else if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x84 + iVar6 * 4) <
             *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x84 + local_18 * 4)) {
      iVar2 = FUN_004032c8(3);
      fVar1 = _DAT_00658644;
      if (iVar2 == 1) {
        fVar1 = _DAT_00658648;
      }
      local_14 = local_14 - fVar1;
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + local_8 * 0x130) == 0) {
        local_14 = local_14 - _DAT_00658644;
      }
    }
  }
  local_14 = (float)*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x118 + local_8 * 0x130) * _DAT_00658644 +
             local_14;
  if ((0 < param_4) && (param_4 < 0xe)) {
    if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x94 + local_18 * 4) <
        *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x94 + iVar6 * 4)) {
      iVar2 = FUN_004032c8(3);
      fVar1 = _DAT_00658644;
      if (iVar2 == 1) {
        fVar1 = _DAT_00658648;
      }
      local_14 = local_14 + fVar1;
      iVar2 = FUN_004032c8(4);
      if (((iVar2 == 1) && (2 < param_4)) && (param_4 < 9)) {
        local_14 = local_14 + _DAT_00658644;
      }
      iVar2 = FUN_004032c8(4);
      if (((iVar2 == 1) && (10 < param_4)) && (param_4 < 0xe)) {
        local_14 = local_14 + _DAT_00658644;
      }
    }
    else if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x94 + iVar6 * 4) <
             *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x94 + local_18 * 4)) {
      local_14 = local_14 - _DAT_00658644;
      iVar2 = FUN_004032c8(4);
      if (((iVar2 == 1) && (2 < param_4)) && (param_4 < 9)) {
        local_14 = local_14 - _DAT_00658644;
      }
      iVar2 = FUN_004032c8(4);
      if (((iVar2 == 1) && (10 < param_4)) && (param_4 < 0xe)) {
        local_14 = local_14 - _DAT_00658644;
      }
    }
  }
  if (param_4 == 1) {
    uVar3 = FUN_00402c38();
    uVar4 = *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x8c + local_18 * 4) -
            *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4);
    iVar2 = (int)uVar4 >> 0x1f;
    if (iVar2 == extraout_EDX) {
      if (uVar3 < uVar4) goto LAB_006580ac;
LAB_006580bb:
      local_14 = local_14 - _DAT_00658648;
    }
    else {
      if (iVar2 <= extraout_EDX) goto LAB_006580bb;
LAB_006580ac:
      local_14 = local_14 + _DAT_00658648;
    }
    if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4) < 5) {
      if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4) < 4) {
        if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4) < 2) {
          if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4) == 1) {
            local_14 = local_14 - _DAT_00658644;
          }
          else if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4) == 0)
          {
            local_14 = local_14 + _DAT_00658648;
          }
        }
        else {
          local_14 = local_14 - _DAT_00658648;
        }
      }
      else {
        local_14 = local_14 - _DAT_00658650;
      }
    }
    else {
      local_14 = local_14 - _DAT_0065864c;
    }
    if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x8c + local_18 * 4) < 5) {
      local_14 = local_14 - _DAT_00658648;
    }
    if ((5 < *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x8c + local_18 * 4)) &&
       (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4) < 2)) {
      iVar2 = FUN_004032c8(3);
      if (iVar2 == 1) {
        local_14 = local_14 + _DAT_00658648;
      }
      else {
        local_14 = local_14 + _DAT_00658644;
      }
    }
  }
  if ((param_4 < 0xe) || (0x19 < param_4)) goto LAB_0065831d;
  uVar4 = FUN_00402c38();
  uVar3 = *(uint *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + iVar6 * 4);
  iVar2 = (int)uVar3 >> 0x1f;
  if (iVar2 == extraout_EDX_00) {
    if (uVar3 < uVar4) {
LAB_00658271:
      local_14 = local_14 - _DAT_00658648;
      iVar2 = FUN_004032c8(3,uVar4);
      if (((iVar2 == 1) && (0x11 < param_4)) && (param_4 < 0x1a)) {
        local_14 = local_14 - _DAT_00658644;
      }
    }
  }
  else if (iVar2 < extraout_EDX_00) goto LAB_00658271;
  uVar4 = FUN_00402c38();
  uVar3 = *(uint *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + iVar6 * 4);
  iVar6 = (int)uVar3 >> 0x1f;
  if (iVar6 == extraout_EDX_01) {
    if (uVar4 <= uVar3) goto LAB_0065831d;
  }
  else if (extraout_EDX_01 <= iVar6) goto LAB_0065831d;
  local_14 = local_14 - _DAT_00658648;
  iVar6 = FUN_004032c8(3,uVar4);
  if (((iVar6 == 1) && (0x11 < param_4)) && (param_4 < 0x1a)) {
    local_14 = local_14 - _DAT_00658644;
  }
LAB_0065831d:
  if ((0 < param_4) && (param_4 < 0xe)) {
    iVar6 = *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4);
    if (iVar6 == 0) {
      local_14 = local_14 + _DAT_00658644;
      iVar6 = FUN_004032c8(3);
      if (((iVar6 == 1) && (2 < param_4)) && (param_4 < 9)) {
        local_14 = local_14 + _DAT_00658644;
      }
      iVar6 = FUN_004032c8(3);
      if (((iVar6 == 1) && (10 < param_4)) && (param_4 < 0xe)) {
        local_14 = local_14 + _DAT_00658644;
      }
    }
    else if (0 < iVar6) {
      local_14 = local_14 - (float)iVar6 * _DAT_00658644;
      iVar6 = FUN_004032c8(3,PTR_DAT_0066b3b8);
      if (((iVar6 == 1) && (2 < param_4)) && (param_4 < 9)) {
        local_14 = local_14 - _DAT_00658644;
      }
      iVar6 = FUN_004032c8(3);
      if (((iVar6 == 1) && (10 < param_4)) && (param_4 < 0xe)) {
        local_14 = local_14 - _DAT_00658644;
      }
    }
  }
  iVar6 = 5;
  piVar5 = local_30;
  do {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_00657978(local_8,local_30);
  local_14 = ((((((float)local_30[0] + local_14) - (float)local_30[1]) - (float)local_30[2]) -
              (float)local_30[3]) - (float)(local_20 * 2)) + _DAT_0065866c;
  if ((local_14 < _DAT_00658670) && (iVar6 = FUN_004032c8(0xb), iVar6 == 1)) {
    local_14 = 8.0;
  }
  if (local_14 < _DAT_00658674) {
    iVar6 = FUN_004032c8(2);
    local_14 = (float)(iVar6 + 3);
  }
  if (param_4 == 1) {
    if (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x8c + local_18 * 4) < 3) {
      iVar6 = FUN_004032c8(3);
      local_14 = (float)(iVar6 + 5);
    }
    if ((0xf < *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x8c + local_18 * 4)) &&
       (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4) < 4)) {
      iVar6 = FUN_004032c8(3);
      local_14 = (float)(iVar6 + 6);
    }
    if ((0x14 < *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x8c + local_18 * 4)) &&
       (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4) < 2)) {
      iVar6 = FUN_004032c8(4);
      local_14 = (float)(iVar6 + 6);
    }
    if ((0x14 < *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x8c + local_18 * 4)) &&
       (*(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0x44 + local_18 * 4) == 0)) {
      iVar6 = FUN_004032c8(4);
      local_14 = (float)(iVar6 + 7);
    }
  }
  if ((_DAT_00658678 <= local_14) && (iVar6 = FUN_004032c8(8), iVar6 != 1)) {
    FUN_004032c8(2);
  }
  return;
}

