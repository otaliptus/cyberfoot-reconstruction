// Address: 00491e6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00491e6c(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  short *psVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte local_198 [128];
  undefined1 local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = *(int *)(*(int *)(param_1 + 0x1cc) + 0x18);
  local_8 = param_2 >> 2;
  local_c = param_3 >> 3;
  iVar5 = local_c * 0x20 + 2;
  iVar4 = local_8 * 0x20 + 4;
  local_14 = (param_4 >> 2) * 0x20 + 4;
  uVar1 = FUN_00491ab4(param_1,iVar4,iVar5,local_118,local_14);
  FUN_00491cf4(param_1,iVar4,iVar5,local_198,local_118,uVar1,local_14);
  local_8 = local_8 * 4;
  local_c = local_c * 8;
  pbVar3 = local_198;
  local_18 = 0;
  do {
    iVar4 = 0;
    do {
      psVar2 = (short *)(*(int *)(local_10 + (local_8 + local_18) * 4) + (local_c + iVar4) * 0x40 +
                        (param_4 >> 2) * 8);
      iVar5 = 0;
      do {
        *psVar2 = *pbVar3 + 1;
        pbVar3 = pbVar3 + 1;
        psVar2 = psVar2 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    local_18 = local_18 + 1;
  } while (local_18 < 4);
  return;
}

