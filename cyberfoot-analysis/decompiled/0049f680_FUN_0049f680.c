// Address: 0049f680
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049f680(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar4 = param_1[3] - 5U;
  }
  do {
    if ((uint)param_1[0x1d] < 2) {
      FUN_0049f56c(param_1);
      if ((param_1[0x1d] == 0) && (param_2 == 0)) {
        return 0;
      }
      if (param_1[0x1d] == 0) {
        if (param_1[0x17] < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = param_1[0xe] + param_1[0x17];
        }
        FUN_004a3844(param_1,iVar3,param_1[0x1b] - param_1[0x17],param_2 == 4);
        param_1[0x17] = param_1[0x1b];
        FUN_0049e72c(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          if (param_2 == 4) {
            return 2;
          }
          return 0;
        }
        if (param_2 == 4) {
          return 3;
        }
        return 1;
      }
    }
    param_1[0x1b] = param_1[0x1b] + param_1[0x1d];
    param_1[0x1d] = 0;
    uVar1 = param_1[0x1b];
    uVar2 = param_1[0x17] + uVar4;
    if ((uVar1 == 0) || (uVar2 <= uVar1)) {
      param_1[0x1d] = uVar1 - uVar2;
      param_1[0x1b] = uVar2;
      if (param_1[0x17] < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1[0xe] + param_1[0x17];
      }
      FUN_004a3844(param_1,iVar3,param_1[0x1b] - param_1[0x17],0);
      param_1[0x17] = param_1[0x1b];
      FUN_0049e72c(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
    if (param_1[0xb] - 0x106U <= (uint)(param_1[0x1b] - param_1[0x17])) {
      if (param_1[0x17] < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1[0xe] + param_1[0x17];
      }
      FUN_004a3844(param_1,iVar3,param_1[0x1b] - param_1[0x17],0);
      param_1[0x17] = param_1[0x1b];
      FUN_0049e72c(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

