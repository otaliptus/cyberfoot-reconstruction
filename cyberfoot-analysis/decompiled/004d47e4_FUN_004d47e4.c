// Address: 004d47e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_004d47e4(int *param_1,ushort *param_2,undefined4 *param_3,char param_4,char param_5,
            undefined1 *param_6)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 *local_28;
  int local_20 [2];
  ushort *local_18;
  undefined4 local_14;
  undefined4 *local_10;
  ushort *local_c;
  int *local_8;
  
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004d467c();
  local_14 = 0;
  local_20[1] = 0;
  local_20[0] = 0;
  bVar2 = false;
  local_18 = (ushort *)*local_8;
  puVar4 = (undefined1 *)*local_10;
  uVar7 = 0;
  if (DAT_006696d8 != '\0') {
    FUN_004d46bc();
  }
  if (param_5 == '\0') {
    local_28 = &DAT_0067ad18;
  }
  else {
    local_28 = &DAT_0067ad98;
  }
  do {
    bVar8 = local_18 < local_c;
    uVar6 = (ushort)uVar7;
    if (bVar8) {
      uVar6 = *local_18;
      uVar7 = (uint)uVar6;
      local_18 = local_18 + 1;
      if ((uVar6 < 0x80) && (local_28[uVar7] == '\0')) goto LAB_004d486e;
      bVar1 = true;
    }
    else {
LAB_004d486e:
      bVar1 = false;
    }
    puVar5 = puVar4;
    if ((bVar1) && (!bVar2)) {
      if (param_6 <= puVar4) {
        local_14 = 2;
        break;
      }
      *puVar4 = 0x2b;
      puVar5 = puVar4 + 1;
      if (uVar6 == 0x2b) {
        if (param_6 <= puVar5) {
          local_14 = 2;
          break;
        }
        *puVar5 = 0x2d;
        puVar5 = puVar4 + 2;
      }
      else {
        bVar2 = true;
      }
    }
    if (bVar2) {
      if (bVar1) {
        FUN_004d4790(uVar7,0x10,local_20 + 1,local_20);
      }
      else {
        FUN_004d4790(0,(6 - local_20[0] % 6) % 6,local_20 + 1,local_20);
      }
      while ((puVar5 < param_6 && (5 < local_20[0]))) {
        uVar3 = FUN_004d47c8(6,local_20 + 1,local_20);
        *puVar5 = *(undefined1 *)(DAT_0067ac08 + (uVar3 & 0xffff));
        puVar5 = puVar5 + 1;
      }
      if ((5 < local_20[0]) && (param_6 <= puVar5)) {
        local_14 = 2;
        break;
      }
      if (!bVar1) {
        if ((param_4 != '\0') ||
           ((bVar8 && ((-1 < (short)(&DAT_0067ac0c)[uVar7] || (uVar7 == 0x2d)))))) {
          if (param_6 <= puVar5) {
            local_14 = 2;
            break;
          }
          *puVar5 = 0x2d;
          puVar5 = puVar5 + 1;
        }
        bVar2 = false;
      }
    }
    if ((!bVar1) && (bVar8)) {
      if (param_6 <= puVar5) {
        local_14 = 2;
        break;
      }
      *puVar5 = (char)uVar7;
      puVar5 = puVar5 + 1;
    }
    puVar4 = puVar5;
  } while (bVar8);
  *local_8 = (int)local_18;
  *local_10 = puVar5;
  return local_14;
}

