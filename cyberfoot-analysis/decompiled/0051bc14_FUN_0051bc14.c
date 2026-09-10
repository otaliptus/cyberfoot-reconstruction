// Address: 0051bc14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x0051be02) */
/* WARNING: Removing unreachable block (ram,0x0051be1b) */

void FUN_0051bc14(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  uint uStack_10154;
  int iStack_10150;
  int iStack_1014c;
  byte abStack_1012d [32769];
  int local_812c;
  undefined4 uStack_1174;
  undefined1 *puStack_1170;
  undefined4 uStack_116c;
  undefined1 *puStack_1168;
  undefined1 *puStack_1164;
  
  iVar5 = 0x10;
  do {
    iVar4 = iVar5;
    iVar5 = iVar4 + -1;
  } while (iVar4 + -1 != 0);
  puStack_1164 = (undefined1 *)0x51bc4a;
  FUN_0051d3bc(iVar4);
  if (*(char *)(iVar4 + 0x34) == '\0') {
    uVar2 = 0;
  }
  else {
    puStack_1164 = (undefined1 *)0x51bc64;
    uVar2 = FUN_00520744(*(undefined4 *)(iVar4 + 0x38));
  }
  puStack_1164 = (undefined1 *)0x51bc83;
  FUN_004032a8(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c),uVar2);
  puStack_1164 = (undefined1 *)0x51bc99;
  iVar5 = (**(code **)(*param_2 + 0xc))(param_2,abStack_1012d,1);
  if (iVar5 == 1) {
    local_812c = abStack_1012d[0] + 1;
    puStack_1168 = &LAB_0051beb5;
    uStack_116c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_116c;
    puStack_1170 = (undefined1 *)0x51bd40;
    puStack_1164 = &stack0xfffffffc;
    cVar3 = FUN_0051e0a0(iVar4);
    if (cVar3 == '\0') {
      puVar7 = *(undefined1 **)(iVar4 + 0x18);
      puStack_1170 = (undefined1 *)0x51be5c;
      uVar8 = FUN_0051d4c8(iVar4,4);
      puStack_1170 = (undefined1 *)0x51be6f;
      uVar6 = FUN_0051d4c8(iVar4,3);
      uStack_10154 = (uVar8 & 0xffff) * (uVar6 & 0xffff);
      if (-1 < (int)(uStack_10154 + -1)) {
        do {
          uStack_1174 = 0x51be87;
          puStack_1170 = &stack0xfffffffc;
          iVar5 = FUN_0051bbd8();
          if (iVar5 < 0) {
            puStack_1170 = (undefined1 *)0x51be91;
            FUN_004042fc();
            return;
          }
          *puVar7 = (char)iVar5;
          puVar7 = puVar7 + 1;
          uStack_10154 = uStack_10154 + -1;
        } while (uStack_10154 != 0);
      }
    }
    else {
      uVar8 = 0;
      iStack_1014c = 0;
      iStack_10150 = 8;
      puStack_1170 = (undefined1 *)0x51bd6c;
      uStack_10154 = FUN_0051d4c8(iVar4,4);
      uStack_10154 = uStack_10154 & 0xffff;
      if (-1 < (int)(uStack_10154 - 1)) {
        do {
          puStack_1170 = (undefined1 *)0x51bd8f;
          uVar6 = FUN_0051d4c8(iVar4,3);
          puVar7 = (undefined1 *)((uVar6 & 0xffff) * uVar8 + *(int *)(iVar4 + 0x18));
          puStack_1170 = (undefined1 *)0x51bdae;
          uVar6 = FUN_0051d4c8(iVar4,3);
          uVar6 = uVar6 & 0xffff;
          if (-1 < (int)(uVar6 - 1)) {
            do {
              uStack_1174 = 0x51bdbd;
              puStack_1170 = &stack0xfffffffc;
              iVar5 = FUN_0051bbd8();
              if (iVar5 < 0) {
                puStack_1170 = (undefined1 *)0x51bdc7;
                FUN_004042fc();
                return;
              }
              *puVar7 = (char)iVar5;
              puVar7 = puVar7 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          uVar8 = uVar8 + iStack_10150;
          puStack_1170 = (undefined1 *)0x51bde8;
          uVar6 = FUN_0051d4c8(iVar4,4);
          if ((int)(uVar6 & 0xffff) <= (int)uVar8) {
            do {
              if (0 < iStack_1014c) {
                iStack_10150 = iStack_10150 >> 1;
              }
              iStack_1014c = iStack_1014c + 1;
              uVar8 = iStack_10150 >> 1;
              puStack_1170 = (undefined1 *)0x51be2e;
              uVar6 = FUN_0051d4c8(iVar4,4);
            } while ((uVar6 & 0xffff) <= uVar8);
          }
          uStack_10154 = uStack_10154 - 1;
        } while (uStack_10154 != 0);
      }
    }
    puVar7 = puStack_1164;
    uVar1 = uStack_116c;
    *in_FS_OFFSET = uStack_116c;
    puStack_1164 = (undefined1 *)0x51bebc;
    uStack_116c = 0x51beb1;
    puStack_1168 = &stack0xfffffffc;
    FUN_0051bbd8(0,uVar1,puVar7);
    return;
  }
  return;
}

