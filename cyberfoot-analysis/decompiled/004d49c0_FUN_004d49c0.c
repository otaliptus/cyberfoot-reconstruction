// Address: 004d49c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_004d49c0(int *param_1,byte *param_2,undefined4 *param_3,ushort *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort uVar8;
  bool bVar9;
  int local_20 [2];
  byte *local_18;
  undefined4 local_14;
  undefined4 *local_10;
  byte *local_c;
  int *local_8;
  
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004d467c();
  local_14 = 0;
  local_20[1] = 0;
  local_20[0] = 0;
  bVar1 = false;
  bVar3 = false;
  bVar4 = false;
  local_18 = (byte *)*local_8;
  puVar6 = (ushort *)*local_10;
  uVar7 = 0;
  if (DAT_006696d8 != '\0') {
    FUN_004d46bc();
  }
  do {
    bVar9 = local_c <= local_18;
    if (!bVar9) {
      uVar7 = (ushort)*local_18;
      local_18 = local_18 + 1;
    }
    if (bVar1) {
      if (((bVar9) || (0x7f < uVar7)) || ((short)(&DAT_0067ac0c)[uVar7] < 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        bVar1 = false;
        if ((bVar9) || ((uVar7 != 0x2b && (uVar7 != 0x2d)))) {
          if (!bVar4) {
            local_14 = 1;
          }
        }
        else {
          bVar9 = local_c <= local_18;
          uVar8 = uVar7;
          if (!bVar9) {
            uVar8 = (ushort)*local_18;
            local_18 = local_18 + 1;
          }
          if ((bVar3) && (uVar7 == 0x2d)) {
            if (param_4 <= puVar6) {
              local_14 = 2;
              break;
            }
            *puVar6 = 0x2b;
            puVar6 = puVar6 + 1;
            uVar7 = uVar8;
          }
          else {
            uVar7 = uVar8;
            if (!bVar4) {
              local_14 = 1;
            }
          }
        }
      }
      else {
        FUN_004d4790((int)(short)(&DAT_0067ac0c)[uVar7],6,local_20 + 1,local_20);
        bVar3 = false;
      }
      for (; (0xf < local_20[0] && (puVar6 < param_4)); puVar6 = puVar6 + 1) {
        uVar8 = FUN_004d47c8(0x10,local_20 + 1,local_20);
        *puVar6 = uVar8;
        bVar4 = true;
      }
      if ((0xf < local_20[0]) && (param_4 <= puVar6)) {
        local_14 = 2;
        break;
      }
      if (bVar2) {
        sVar5 = FUN_004d47c8(local_20[0],local_20 + 1,local_20);
        if (sVar5 != 0) {
          local_14 = 1;
        }
      }
    }
    if ((!bVar1) && (!bVar9)) {
      if (uVar7 == 0x2b) {
        bVar1 = true;
        bVar3 = true;
        bVar4 = false;
      }
      else {
        if (0x7f < uVar7) {
          local_14 = 1;
        }
        if (param_4 <= puVar6) {
          local_14 = 2;
          break;
        }
        *puVar6 = uVar7;
        puVar6 = puVar6 + 1;
      }
    }
  } while (!bVar9);
  *local_8 = (int)local_18;
  *local_10 = puVar6;
  return local_14;
}

