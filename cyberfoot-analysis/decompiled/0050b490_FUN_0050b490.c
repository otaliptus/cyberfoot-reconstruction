// Address: 0050b490
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050b490(int param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_3c;
  undefined4 local_38;
  unkbyte10 local_34;
  unkbyte10 local_24;
  undefined4 local_18;
  
  cVar1 = FUN_0050b12c(param_1);
  if (cVar1 == '\0') {
    local_18 = 0;
    if ((*(byte *)(*(int *)(param_1 + 4) + 0x490) & 0x80) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0xc;
    }
    if (param_2 == 0) {
      iVar7 = 0;
      iVar5 = 0;
    }
    else {
      if (param_3 == '\0') {
        iVar7 = *(int *)(param_2 + 0x88) + 1;
        if (*(char *)(param_2 + 0xa9) == '\0') {
          iVar5 = *(int *)(param_2 + 0x74);
        }
        else {
          iVar5 = *(int *)(param_2 + 0x74) + *(int *)(param_2 + 0xb0);
        }
      }
      else {
        iVar7 = *(int *)(param_2 + 0x88);
        iVar5 = *(int *)(param_2 + 0x74);
      }
      iVar5 = iVar5 - iVar2;
    }
    iVar2 = FUN_0050e530(*(int *)(param_1 + 4));
    local_3c = 0;
    local_38 = 0;
    iVar3 = FUN_0050ae9c(param_1);
    if (iVar7 <= iVar3 + -1) {
      iVar6 = ((iVar3 + -1) - iVar7) + 1;
      iVar3 = iVar7;
      do {
        iVar4 = FUN_0050b02c(param_1,iVar3);
        if (*(char *)(iVar4 + 0xa9) != '\0') {
          if ((*(byte *)(iVar4 + 0x7c) & 1) == 0) {
            local_3c = local_3c + *(int *)(iVar4 + 0xb0);
          }
          else {
            local_38 = local_38 + *(int *)(iVar4 + 0xb0);
          }
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_24 = (float10)(unkuint10)0;
    iVar3 = FUN_0050ae9c(param_1);
    if (iVar7 <= iVar3 + -1) {
      iVar3 = ((iVar3 + -1) - iVar7) + 1;
      do {
        iVar6 = FUN_0050b02c(param_1,iVar7);
        if ((*(char *)(iVar6 + 0xa9) != '\0') && ((*(byte *)(iVar6 + 0x7c) & 1) != 0)) {
          if (local_38 == 0) {
            local_34 = (float10)(unkuint10)0;
          }
          else {
            local_34 = (float10)*(int *)(iVar6 + 0xb0) / (float10)local_38;
          }
          iVar4 = FUN_00402c44();
          local_24 = (local_24 + local_34 * (float10)((iVar2 - iVar5) - local_3c)) - (float10)iVar4;
          if (local_24 < (float10)_DAT_0050b67c) {
            FUN_0050a6d8(iVar6);
            local_18 = FUN_0050b02c(param_1,iVar7);
          }
          else {
            FUN_0050a6d8(iVar6,iVar4 + 1);
            local_24 = local_24 - (float10)_DAT_0050b67c;
          }
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (_DAT_0050b680 < local_24) {
      FUN_0050a6d8(local_18,*(int *)(local_18 + 0x8c) + 1);
    }
  }
  return;
}

