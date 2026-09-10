// Address: 00454f70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00454f70(int param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte local_40 [32];
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  if ((((int)param_2 < 0) || (uVar5 = param_2, 1 < *(int *)(*(int *)(param_1 + 0x218) + 8))) &&
     (uVar5 = 0, *(int *)(*(int *)(param_1 + 0x218) + 8) != 0)) {
    local_10 = 0;
    local_14 = 0;
    local_18 = 0;
    local_c = 0x7fffffff;
    local_8 = param_3;
    for (; (0 < local_c && ((int)uVar5 < *(int *)(*(int *)(param_1 + 0x218) + 8)));
        uVar5 = uVar5 + 1) {
      uVar2 = uVar5;
      if (param_2 != uVar5) {
        local_1c = FUN_0041e01c(*(undefined4 *)(param_1 + 0x218),uVar5);
        cVar1 = FUN_00403c10(local_1c,PTR_PTR_004481e0);
        if (((cVar1 != '\0') && (*(char *)(local_1c + 0x17c) != '\0')) ||
           (uVar2 = local_18, uVar5 == *(int *)(*(int *)(param_1 + 0x218) + 8) - 1U)) {
          uVar2 = param_4 - *(int *)(local_1c + 0x44);
          uVar4 = (int)uVar2 >> 0x1f;
          iVar3 = (uVar2 ^ uVar4) - uVar4;
          if (iVar3 < local_c) {
            local_14 = local_10;
            local_18 = uVar5;
            local_c = iVar3;
          }
          local_10 = uVar5 + 1;
          uVar2 = local_18;
        }
      }
      local_18 = uVar2;
    }
    uVar5 = local_14;
    if ((int)local_14 <= (int)local_18) {
      local_20 = (local_18 - local_14) + 1;
      do {
        if ((param_2 != uVar5) &&
           (iVar3 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x218),uVar5),
           local_8 <= *(int *)(iVar3 + 0x40))) break;
        uVar5 = uVar5 + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    if (uVar5 == param_2 + 1) {
      FUN_00403564(CONCAT11(0x20,(char)local_14),local_18,local_40);
      bVar6 = param_2 < 0xff;
      if (param_2 < 0x100) {
        bVar6 = (local_40[(int)param_2 >> 3] >> (param_2 & 7) & 1) != 0;
      }
      if (bVar6) {
        uVar5 = param_2;
      }
    }
  }
  return uVar5;
}

