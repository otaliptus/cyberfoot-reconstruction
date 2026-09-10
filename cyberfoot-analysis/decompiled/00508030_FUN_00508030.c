// Address: 00508030
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00508030(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_1c;
  int local_14;
  
  iVar6 = *param_3;
  local_1c = *(int *)(param_2 + 0x88);
  local_14 = 0;
  iVar3 = FUN_0050ae9c(*(undefined4 *)(param_1 + 0x4d4));
  if (-1 < iVar3 + -1) {
    iVar8 = 0;
    do {
      iVar4 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),iVar8);
      if ((*(char *)(iVar4 + 0xa9) != '\0') || (iVar2 = local_14, iVar4 == param_2)) {
        if (local_14 == 0) {
          local_14 = iVar4;
        }
        if (iVar8 < *(int *)(param_1 + 0x290)) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(param_1 + 0x238) + 0x2c);
        }
        iVar5 = (*(int *)(iVar4 + 0x74) + *(int *)(iVar4 + 0xb0)) - iVar7;
        iVar2 = iVar4;
        if ((*(int *)(iVar4 + 0x74) - iVar7 <= iVar6) && (iVar6 <= iVar5)) {
          iVar3 = (int)*(uint *)(iVar4 + 0xb0) >> 1;
          if (iVar3 < 0) {
            iVar3 = iVar3 + (uint)((*(uint *)(iVar4 + 0xb0) & 1) != 0);
          }
          if (iVar4 != param_2) {
            if (iVar5 - iVar3 < iVar6) {
              local_1c = *(int *)(iVar4 + 0x88);
              if (local_1c <= *(int *)(param_2 + 0x88)) {
                local_1c = local_1c + 1;
              }
            }
            else {
              local_1c = *(int *)(iVar4 + 0x88);
              if (*(int *)(param_2 + 0x88) <= local_1c) {
                local_1c = *(int *)(local_14 + 0x88);
              }
            }
          }
          if ((local_1c < *(int *)(param_1 + 0x290)) ||
             (iVar6 = FUN_0050f330(param_1), iVar6 <= iVar5 - *(int *)(iVar4 + 0xb0))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) {
            return local_1c;
          }
          return *(int *)(param_2 + 0x88);
        }
      }
      local_14 = iVar2;
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return local_1c;
}

