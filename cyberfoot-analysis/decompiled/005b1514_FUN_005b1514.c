// Address: 005b1514
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005b1514(undefined4 param_1,int param_2,int param_3,char param_4,undefined4 param_5,
                 int param_6,int param_7,int param_8)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  
  puStack_2c = (undefined1 *)0x5b152b;
  FUN_00405608(&param_5);
  puStack_30 = &LAB_005b1894;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  if (param_4 != '\0') {
    iVar3 = 1;
    puStack_2c = &stack0xfffffffc;
    do {
      iVar2 = 1;
      do {
        FUN_004663a8(*(undefined4 *)(DAT_006d2660 + iVar3 * 0x28 + -4 + iVar2 * 4),
                     *(undefined4 *)PTR_DAT_0066b0cc);
        FUN_004048d4(*(int *)(DAT_006d2660 + iVar3 * 0x28 + -4 + iVar2 * 4) + 0x80);
        FUN_00466128(*(undefined4 *)(DAT_006d2660 + iVar3 * 0x28 + -4 + iVar2 * 4),0);
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xb);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x29);
    iVar3 = 1;
    do {
      FUN_0043aa68(*(undefined4 *)(DAT_006d2a70 + iVar3 * 4),0);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x29);
    iVar3 = 1;
    do {
      FUN_00466128(*(undefined4 *)(DAT_006d2a70 + iVar3 * 4),0);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x29);
    iVar3 = 8;
    local_18 = &DAT_006d2664;
    do {
      iVar2 = 8;
      local_1c = local_18;
      do {
        FUN_00466128(*local_1c,0);
        local_1c = local_1c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      local_18 = local_18 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 1;
    do {
      FUN_00466128(*(undefined4 *)(DAT_006d2764 + iVar3 * 4),0);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 9);
  }
  if (param_3 <= param_8) {
    local_14 = (param_8 - param_3) + 1;
    iVar3 = param_3;
    do {
      iVar2 = 1;
      do {
        FUN_00466128(*(undefined4 *)(DAT_006d2660 + iVar3 * 0x28 + -4 + iVar2 * 4),1);
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xb);
      iVar3 = iVar3 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if (param_3 <= param_8) {
    local_14 = (param_8 - param_3) + 1;
    iVar3 = param_3;
    do {
      FUN_00466128(*(undefined4 *)(DAT_006d2a70 + iVar3 * 4),1);
      iVar3 = iVar3 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if (param_3 <= param_8) {
    local_14 = (param_8 - param_3) + 1;
    iVar3 = param_3;
    do {
      iVar2 = param_7;
      if (iVar3 == param_3) {
        local_10 = param_6;
      }
      else {
        local_10 = *(int *)(*(int *)(DAT_006d2660 + -0x28 + iVar3 * 0x28) + 0x44) +
                   *(int *)(*(int *)(DAT_006d2660 + -0x28 + iVar3 * 0x28) + 0x4c) + 1;
      }
      FUN_00465978(*(undefined4 *)(DAT_006d2a70 + iVar3 * 4),DAT_00669fc8 + param_7 + 1);
      FUN_00465978(*(undefined4 *)(DAT_006d2660 + iVar3 * 0x28),iVar2);
      iVar2 = *(int *)(DAT_006d2a70 + iVar3 * 4);
      FUN_00465978(*(undefined4 *)(DAT_006d2660 + 4 + iVar3 * 0x28),
                   *(int *)(iVar2 + 0x40) + *(int *)(iVar2 + 0x48) + 1);
      iVar2 = 3;
      do {
        FUN_00465978(*(undefined4 *)(DAT_006d2660 + iVar3 * 0x28 + -4 + iVar2 * 4),
                     *(int *)(*(int *)(DAT_006d2660 + iVar3 * 0x28 + -8 + iVar2 * 4) + 0x40) +
                     *(int *)(*(int *)(DAT_006d2660 + iVar3 * 0x28 + -8 + iVar2 * 4) + 0x48) + 1);
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xb);
      iVar2 = 1;
      do {
        FUN_0046599c(*(undefined4 *)(DAT_006d2660 + iVar3 * 0x28 + -4 + iVar2 * 4),local_10);
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xb);
      FUN_0046599c(*(undefined4 *)(DAT_006d2a70 + iVar3 * 4),local_10);
      iVar3 = iVar3 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  iVar3 = 8;
  puVar4 = &DAT_006d2668;
  do {
    FUN_00466128(puVar4[param_2 * 8 + -9],1);
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00465978(*(undefined4 *)(&DAT_006d2644 + param_2 * 0x20),
               *(undefined4 *)(*(int *)(DAT_006d2660 + 8 + param_3 * 0x28) + 0x40));
  iVar3 = 8;
  puVar4 = &DAT_006d2668;
  do {
    FUN_0046599c(puVar4[param_2 * 8 + -9],
                 (*(int *)(*(int *)(DAT_006d2660 + 8 + param_3 * 0x28) + 0x44) -
                 *(int *)(*(int *)(DAT_006d2660 + 8 + param_3 * 0x28) + 0x4c)) + -1);
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 7;
  puVar5 = &DAT_006d266c;
  do {
    FUN_00465978(*(undefined4 *)(puVar5 + param_2 * 0x20 + -0x24),
                 *(int *)(*(int *)(puVar5 + param_2 * 0x20 + -0x28) + 0x40) +
                 *(int *)(*(int *)(puVar5 + param_2 * 0x20 + -0x28) + 0x48) + 1);
    puVar5 = puVar5 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00466128(*(undefined4 *)(DAT_006d2764 + param_2 * 4),1);
  iVar3 = *(int *)(DAT_006d2660 + param_3 * 0x28);
  FUN_0046599c(*(undefined4 *)(DAT_006d2764 + param_2 * 4),
               (*(int *)(iVar3 + 0x44) - *(int *)(iVar3 + 0x4c)) + -1);
  FUN_00465978(*(undefined4 *)(DAT_006d2764 + param_2 * 4),param_7);
  FUN_004e1414(*(undefined4 *)(DAT_006d2764 + param_2 * 4),param_5);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005b189b;
  puStack_30 = (undefined1 *)0x5b1893;
  FUN_00404ff0(&param_5,uStack_34,puVar1);
  return;
}

