// Address: 004ba954
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ba954(int param_1,undefined4 param_2,undefined4 param_3,char param_4,int *param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  short local_46;
  
  iVar1 = *param_5;
  iVar2 = param_5[1];
  iVar3 = param_5[2];
  iVar4 = param_5[3];
  if (param_6 == 0) {
    param_6 = 1;
  }
  uVar5 = FUN_00429e64(param_2);
  FUN_00429e64(param_3);
  local_46 = (short)param_6;
  do {
    iVar6 = FUN_00402c38();
    iVar7 = FUN_00402c38();
    iVar8 = FUN_00402c38();
    uVar9 = FUN_00402c38();
    FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),
                 (iVar7 + ((uVar5 & 0xff00) >> 8)) * 0x100 + iVar6 + (uVar5 & 0xff) +
                 (iVar8 + ((uVar5 & 0xff0000) >> 0x10)) * 0x10000);
    uVar10 = FUN_0042a884(*(undefined4 *)(param_1 + 0x10));
    FUN_0042ab6c(*(undefined4 *)(param_1 + 0x14),uVar10);
    if (param_4 == '\0') {
      iVar6 = FUN_00402c44();
      iVar6 = iVar6 + (uVar9 & 0xffff) + iVar2 + 1;
      if (iVar4 < iVar6) {
        iVar6 = iVar4;
      }
      FUN_0042b158(param_1,iVar1,(uVar9 & 0xffff) + iVar2,iVar6,iVar3);
    }
    else {
      iVar6 = FUN_00402c44();
      iVar6 = iVar6 + (uVar9 & 0xffff) + iVar1 + 1;
      if (iVar3 < iVar6) {
        iVar6 = iVar3;
      }
      FUN_0042b158(param_1,(uVar9 & 0xffff) + iVar1,iVar2,iVar4,iVar6);
    }
    local_46 = local_46 + -1;
  } while (local_46 != 0);
  return;
}

