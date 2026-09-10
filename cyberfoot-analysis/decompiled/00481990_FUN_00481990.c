// Address: 00481990
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00481990(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((*(char *)((int)param_1 + 0x231) != '\0') && (*(int *)(DAT_0066cbf4 + 0x44) != 0)) {
    local_24 = 0;
    if (*(char *)((int)param_1 + 0x231) == '\x02') {
      iVar1 = FUN_004813a8(*(undefined4 *)(DAT_0066cbf4 + 0x44));
      local_24 = *(int *)(iVar1 + 4);
    }
    else if ((*(char *)((int)param_1 + 0x231) == '\x03') && (*(int *)(DAT_0066cbf8 + 0x68) != 0)) {
      iVar1 = FUN_004813a8(*(undefined4 *)(DAT_0066cbf8 + 0x68));
      local_24 = *(int *)(iVar1 + 4);
    }
    else if (*(char *)((int)param_1 + 0x231) == '\x01') {
      iVar1 = FUN_00484ea0(DAT_0066cbf8,0);
      local_24 = *(int *)(iVar1 + 4);
    }
    iVar1 = FUN_004813a8(param_1);
    iVar1 = *(int *)(iVar1 + 4);
    local_14 = FUN_00484eb4(DAT_0066cbf8);
    if (-1 < local_14 + -1) {
      iVar8 = 0;
      do {
        iVar2 = FUN_00484ea0(DAT_0066cbf8,iVar8);
        if ((*(int *)(iVar2 + 4) == local_24) && (local_24 != iVar1)) {
          iVar2 = FUN_00484eb4(DAT_0066cbf8);
          if (-1 < iVar2 + -1) {
            local_1c = 0;
            do {
              iVar3 = FUN_00484ea0(DAT_0066cbf8,local_1c);
              if (*(int *)(iVar3 + 4) == iVar1) {
                if ((char)param_1[0x8c] == '\x04') {
                  iVar3 = param_1[0x13];
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  iVar4 = FUN_00484b0c();
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  iVar5 = FUN_00484af0();
                  iVar6 = iVar5 - iVar3 >> 1;
                  if (iVar6 < 0) {
                    iVar6 = iVar6 + (uint)((iVar5 - iVar3 & 1U) != 0);
                  }
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  iVar3 = FUN_00484ad8();
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  iVar5 = FUN_00484b24();
                  iVar7 = iVar5 - param_1[0x12] >> 1;
                  if (iVar7 < 0) {
                    iVar7 = iVar7 + (uint)((iVar5 - param_1[0x12] & 1U) != 0);
                  }
                  (**(code **)(*param_1 + 0x84))(param_1,iVar3 + iVar7,iVar4 + iVar6);
                }
                else if ((char)param_1[0x8c] == '\x06') {
                  iVar3 = param_1[0x13];
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  iVar4 = FUN_00484b0c();
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  iVar5 = FUN_00484af0();
                  iVar6 = iVar5 - iVar3 >> 1;
                  if (iVar6 < 0) {
                    iVar6 = iVar6 + (uint)((iVar5 - iVar3 & 1U) != 0);
                  }
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  iVar3 = FUN_00484ad8();
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  iVar5 = FUN_00484b24();
                  iVar7 = iVar5 - param_1[0x12] >> 1;
                  if (iVar7 < 0) {
                    iVar7 = iVar7 + (uint)((iVar5 - param_1[0x12] & 1U) != 0);
                  }
                  (**(code **)(*param_1 + 0x84))(param_1,iVar3 + iVar7,iVar4 + iVar6);
                }
                else {
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  iVar4 = FUN_00484ad8();
                  iVar3 = param_1[0x10];
                  FUN_00484ea0(DAT_0066cbf8,local_1c);
                  iVar5 = FUN_00484ad8();
                  iVar5 = (iVar4 + iVar3) - iVar5;
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  iVar3 = FUN_00484ad8();
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  iVar4 = FUN_00484b24();
                  if (iVar3 + iVar4 < param_1[0x12] + iVar5) {
                    FUN_00484ea0(DAT_0066cbf8,iVar8);
                    iVar3 = FUN_00484ad8();
                    FUN_00484ea0(DAT_0066cbf8,iVar8);
                    iVar4 = FUN_00484b24();
                    iVar5 = (iVar3 + iVar4) - param_1[0x12];
                  }
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  local_18 = FUN_00484b0c();
                  local_18 = local_18 + param_1[0x11];
                  FUN_00484ea0(DAT_0066cbf8,local_1c);
                  iVar3 = FUN_00484b0c();
                  local_18 = local_18 - iVar3;
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  iVar3 = FUN_00484b0c();
                  FUN_00484ea0(DAT_0066cbf8,iVar8);
                  iVar4 = FUN_00484af0();
                  if (iVar3 + iVar4 < local_18 + param_1[0x13]) {
                    FUN_00484ea0(DAT_0066cbf8,iVar8);
                    iVar3 = FUN_00484b0c();
                    FUN_00484ea0(DAT_0066cbf8,iVar8);
                    iVar4 = FUN_00484af0();
                    local_18 = (iVar3 + iVar4) - param_1[0x13];
                  }
                  (**(code **)(*param_1 + 0x84))(param_1,iVar5,local_18,param_1[0x13],param_1[0x12])
                  ;
                }
              }
              local_1c = local_1c + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        iVar8 = iVar8 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  return;
}

