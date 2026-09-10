// Address: 00402fa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00402fa0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 code *param_5,uint param_6,uint *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = param_3;
  if (param_6 == (*(ushort *)(param_1 + 1) & param_6)) {
    iVar1 = (*param_5)(*param_1,(int)((ulonglong)
                                      ((longlong)(int)param_1[2] * (longlong)(int)param_3) >> 0x20),
                       param_3,*param_1,param_2,
                       (int)((longlong)(int)param_1[2] * (longlong)(int)param_3),&local_8,0);
    if (iVar1 == 0) {
      GetLastError();
      FUN_00402984();
      local_8 = 0;
    }
    else {
      uVar2 = local_8 / (uint)param_1[2];
      uVar3 = local_8 % (uint)param_1[2];
      local_8 = uVar2;
      if (param_7 == (uint *)0x0) {
        if (param_3 != uVar2) {
          FUN_00402984(param_4,uVar3);
          local_8 = 0;
        }
      }
      else {
        *param_7 = uVar2;
      }
    }
  }
  else {
    FUN_00402984(0x67);
    local_8 = 0;
  }
  return local_8;
}

