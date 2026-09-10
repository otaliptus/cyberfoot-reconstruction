// Address: 0048e54c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048e54c(int param_1,undefined4 *param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte bVar13;
  int local_54;
  undefined4 local_44;
  undefined4 *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int aiStack_20 [4];
  
  bVar13 = 0;
  iVar1 = *(int *)(param_1 + 0x1bc);
  uVar5 = *(undefined4 *)(param_1 + 0x19c);
  if (((*(int *)(param_1 + 0x114) == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (iVar4 = FUN_0048e4d8(param_1), iVar4 != 0)) {
    if (*(int *)(iVar1 + 8) == 0) {
      local_38 = **(undefined4 **)(param_1 + 0x18);
      local_3c = (int *)(param_1 + 0x168);
      local_34 = (*(undefined4 **)(param_1 + 0x18))[1];
      iVar4 = *(int *)(iVar1 + 0xc);
      iVar10 = *(int *)(iVar1 + 0x10);
      puVar11 = (undefined4 *)(iVar1 + 0x14);
      puVar12 = &local_24;
      for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
        puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
      }
      local_40 = param_2;
      local_28 = param_1;
      for (local_54 = 0; local_54 < *(int *)(param_1 + 0x164); local_54 = local_54 + 1) {
        psVar2 = (short *)*local_40;
        iVar9 = *local_3c;
        iVar7 = *(int *)(iVar1 + 0x2c + *(int *)(*(int *)(param_1 + 0x14c + iVar9 * 4) + 0x14) * 4);
        if (iVar10 < 8) {
          iVar4 = FUN_0048f3e0(&local_38,iVar4,iVar10,0);
          if (iVar4 == 0) {
            return 0;
          }
          iVar10 = local_2c;
          iVar4 = local_30;
          if (7 < local_2c) goto LAB_0048e64e;
          local_44 = 1;
LAB_0048e688:
          uVar6 = FUN_0048f52c(&local_38,iVar4,iVar10,local_44,iVar7);
          iVar10 = local_2c;
          iVar4 = local_30;
          if ((int)uVar6 < 0) {
            return 0;
          }
        }
        else {
LAB_0048e64e:
          uVar6 = iVar4 >> ((char)iVar10 - 8U & 0x1f) & 0xff;
          iVar3 = *(int *)(iVar7 + 0x90 + uVar6 * 4);
          if (iVar3 == 0) {
            local_44 = 9;
            goto LAB_0048e688;
          }
          uVar6 = (uint)*(byte *)(iVar7 + 0x490 + uVar6);
          iVar10 = iVar10 - iVar3;
        }
        uVar8 = 0;
        if (uVar6 != 0) {
          if ((iVar10 < (int)uVar6) &&
             (iVar7 = FUN_0048f3e0(&local_38,iVar4,iVar10,uVar6), iVar10 = local_2c,
             iVar4 = local_30, iVar7 == 0)) {
            return 0;
          }
          iVar10 = iVar10 - uVar6;
          uVar8 = iVar4 >> ((byte)iVar10 & 0x1f) & (1 << ((byte)uVar6 & 0x1f)) - 1U;
          if ((int)uVar8 < *(int *)(&DAT_006653b8 + uVar6 * 4)) {
            uVar8 = *(int *)(&DAT_006653f8 + uVar6 * 4) + uVar8;
          }
        }
        iVar7 = aiStack_20[iVar9];
        aiStack_20[iVar9] = uVar8 + iVar7;
        *psVar2 = (short)(uVar8 + iVar7) << ((byte)uVar5 & 0x1f);
        local_3c = local_3c + 1;
        local_40 = local_40 + 1;
      }
      puVar11 = *(undefined4 **)(param_1 + 0x18);
      *puVar11 = local_38;
      puVar11[1] = local_34;
      *(int *)(iVar1 + 0xc) = iVar4;
      *(int *)(iVar1 + 0x10) = iVar10;
      puVar11 = &local_24;
      puVar12 = (undefined4 *)(iVar1 + 0x14);
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
        puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
      }
    }
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

