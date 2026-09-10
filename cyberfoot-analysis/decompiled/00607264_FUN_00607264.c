// Address: 00607264
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00607264(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5,
                 int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_10;
  int local_c;
  
  if (param_2 == 1) {
    iVar1 = FUN_006078a8(param_1,1);
    local_c = *(int *)(*(int *)PTR_DAT_0066b238 + param_7 * 0xf8 + 0x84 + iVar1 * 4);
    iVar1 = FUN_006078a8(param_1,2);
    local_10 = *(int *)(*(int *)PTR_DAT_0066b238 + param_6 * 0xf8 + 0xb4 + iVar1 * 4);
    uVar3 = *(undefined4 *)(*(int *)PTR_DAT_0066b238 + 0xe8 + param_6 * 0xf8);
  }
  else {
    iVar1 = FUN_006078a8(param_1,2);
    local_c = *(int *)(*(int *)PTR_DAT_0066b238 + param_6 * 0xf8 + 0x84 + iVar1 * 4);
    iVar1 = FUN_006078a8(param_1,1);
    local_10 = *(int *)(*(int *)PTR_DAT_0066b238 + param_7 * 0xf8 + 0xb4 + iVar1 * 4);
    uVar3 = *(undefined4 *)(*(int *)PTR_DAT_0066b238 + 0xe8 + param_7 * 0xf8);
  }
  local_1c = param_2;
  if (param_3 == 3) {
    local_20 = FUN_0060774c(param_1,param_2);
    local_18 = 2;
  }
  else {
    local_20 = param_1;
    if ((param_3 == 2) && (local_c == 0)) {
      local_1c = FUN_006077f0(param_2);
      local_18 = 10;
    }
    else {
      iVar1 = FUN_006078a8(param_1,param_2);
      iVar1 = *(int *)(&DAT_0066a4c4 + iVar1 * 4);
      iVar2 = FUN_004032c8(100);
      if ((iVar2 < iVar1) && (0 < local_10)) {
        local_18 = 5;
      }
      else {
        iVar1 = FUN_006078b4(param_1,local_c,local_10,param_2);
        if ((iVar1 == -1) && (param_3 != 8)) {
          iVar1 = FUN_006078a8(param_1,param_2);
          iVar1 = *(int *)(&DAT_0066a4f4 + iVar1 * 4);
          iVar2 = FUN_004032c8(100);
          if (iVar2 < iVar1) {
            local_18 = 5;
          }
          else {
            local_1c = FUN_006077f0(param_2);
            local_18 = 1;
          }
        }
        else {
          iVar1 = FUN_006078a8(param_1,param_2);
          iVar1 = *(int *)(&DAT_0066a404 + iVar1 * 4);
          iVar2 = FUN_004032c8(100);
          if (iVar2 < iVar1) {
            iVar1 = FUN_00607918(param_1,local_c,local_10,uVar3);
            if (iVar1 == -1) {
              iVar1 = FUN_004032c8(100);
              if (0x32 < iVar1) {
                FUN_006077f0(param_2);
                FUN_00607800();
                FUN_006077f0(param_2);
              }
              iVar1 = FUN_004032c8(100);
              if (iVar1 < 0x33) {
                local_20 = FUN_00607820(param_2);
                local_18 = 7;
              }
              else {
                FUN_006077f0(param_2);
                local_20 = FUN_00607800();
                local_1c = FUN_006077f0(param_2);
                local_18 = 3;
              }
            }
            else {
              local_1c = FUN_006077f0(param_2);
              local_18 = 4;
            }
          }
          else {
            iVar1 = FUN_00607854(param_1,local_c,local_10,param_6,param_7,param_2);
            if (iVar1 == -1) {
              local_1c = FUN_006077f0(param_2);
              local_18 = 9;
            }
            else {
              local_20 = FUN_00607570(param_1,param_2,param_7,param_6);
              local_18 = 2;
            }
          }
        }
      }
    }
  }
  *param_4 = local_20;
  param_4[1] = local_1c;
  param_4[2] = local_18;
  return;
}

