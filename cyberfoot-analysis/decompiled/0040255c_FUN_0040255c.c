// Address: 0040255c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040255c(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_18;
  int local_14;
  
  uVar7 = param_2 + 7U & 0xfffffffc;
  if ((int)uVar7 < 0xc) {
    uVar7 = 0xc;
  }
  puVar6 = (uint *)(param_1 + -4);
  uVar9 = *puVar6 & 0x7ffffffc;
  pbVar3 = (byte *)((int)puVar6 + uVar9);
  if (uVar9 == uVar7) {
    uVar4 = CONCAT31((int3)((uint)pbVar3 >> 8),1);
  }
  else {
    uVar8 = uVar7;
    if ((int)uVar7 < (int)uVar9) {
      local_18 = uVar9 - uVar7;
      if (pbVar3 == DAT_0066c620) {
        DAT_0066c620 = DAT_0066c620 + -local_18;
        DAT_0066c61c = DAT_0066c61c + local_18;
        if (DAT_0066c61c < 0xc) {
          DAT_0066c620 = DAT_0066c620 + local_18;
          DAT_0066c61c = DAT_0066c61c - local_18;
          uVar8 = uVar9;
        }
      }
      else {
        if ((*pbVar3 & 2) == 0) {
          local_18 = local_18 + *(int *)(pbVar3 + 8);
          FUN_00401ce0();
        }
        uVar8 = uVar9;
        if (0xb < (int)local_18) {
          *(uint *)((int)puVar6 + uVar7) = local_18 | 2;
          FUN_00401da4((uint *)((int)puVar6 + uVar7) + 1);
          uVar8 = uVar7;
        }
      }
LAB_00402716:
      _DAT_0066c5b8 = _DAT_0066c5b8 + (uVar8 - uVar9);
      uVar7 = *puVar6;
      *puVar6 = uVar8 | uVar7 & 0x80000003;
      uVar4 = CONCAT31((int3)((uVar7 & 0x80000003) >> 8),1);
    }
    else {
      do {
        local_14 = uVar7 - uVar9;
        if ((byte *)((int)puVar6 + uVar9) == DAT_0066c620) {
          if (local_14 <= DAT_0066c61c) {
            DAT_0066c61c = DAT_0066c61c - local_14;
            DAT_0066c620 = DAT_0066c620 + local_14;
            if (DAT_0066c61c < 0xc) {
              DAT_0066c620 = DAT_0066c620 + DAT_0066c61c;
              uVar7 = uVar7 + DAT_0066c61c;
              DAT_0066c61c = 0;
            }
            _DAT_0066c5b8 = _DAT_0066c5b8 + (uVar7 - uVar9);
            uVar9 = *puVar6;
            *puVar6 = uVar7 | uVar9 & 0x80000003;
            return CONCAT31((int3)((uVar9 & 0x80000003) >> 8),1);
          }
          FUN_00401fd0();
        }
        puVar5 = (uint *)((int)puVar6 + uVar9);
        if ((*puVar5 & 2) == 0) {
          uVar1 = puVar5[2];
          if (local_14 <= (int)uVar1) {
            FUN_00401ce0();
            local_14 = uVar1 - local_14;
            if (local_14 < 0xc) {
              puVar5 = (uint *)((int)puVar6 + uVar7 + local_14);
              *puVar5 = *puVar5 & 0xfffffffe;
              uVar8 = uVar7 + local_14;
            }
            else {
              FUN_00401f48((int)puVar6 + uVar7,local_14);
            }
            goto LAB_00402716;
          }
          puVar5 = (uint *)((int)puVar5 + uVar1);
          local_14 = local_14 - uVar1;
        }
      } while (((*puVar5 & 0x80000000) != 0) &&
              (cVar2 = FUN_004020d4((byte *)((*puVar5 & 0x7ffffffc) + (int)puVar5),local_14),
              cVar2 != '\0'));
      uVar4 = 0;
    }
  }
  return uVar4;
}

