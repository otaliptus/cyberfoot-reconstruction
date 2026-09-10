// Address: 0048f52c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0048f52c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *local_10;
  int local_c;
  
  local_c = param_2;
  if (param_3 < param_4) {
    iVar2 = FUN_0048f3e0(param_1,param_2,param_3,param_4);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    local_c = *(int *)(param_1 + 8);
    param_3 = *(int *)(param_1 + 0xc);
  }
  param_3 = param_3 - param_4;
  uVar3 = local_c >> ((byte)param_3 & 0x1f) & (1 << ((byte)param_4 & 0x1f)) - 1U;
  local_10 = (int *)(param_5 + param_4 * 4);
  do {
    if ((int)uVar3 <= *local_10) {
      *(int *)(param_1 + 8) = local_c;
      *(int *)(param_1 + 0xc) = param_3;
      if (param_4 < 0x11) {
        uVar3 = (uint)*(byte *)(*(int *)(param_5 + 0x8c) + uVar3 + 0x11 +
                               *(int *)(param_5 + 0x48 + param_4 * 4));
      }
      else {
        piVar1 = *(int **)(param_1 + 0x10);
        *(undefined4 *)(*piVar1 + 0x14) = 0x76;
        (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
        uVar3 = 0;
      }
      return uVar3;
    }
    if (param_3 < 1) {
      iVar2 = FUN_0048f3e0(param_1,local_c,param_3,1);
      if (iVar2 == 0) {
        return 0xffffffff;
      }
      local_c = *(int *)(param_1 + 8);
      param_3 = *(int *)(param_1 + 0xc);
    }
    param_3 = param_3 + -1;
    uVar3 = uVar3 * 2 | local_c >> ((byte)param_3 & 0x1f) & 1U;
    param_4 = param_4 + 1;
    local_10 = local_10 + 1;
  } while( true );
}

