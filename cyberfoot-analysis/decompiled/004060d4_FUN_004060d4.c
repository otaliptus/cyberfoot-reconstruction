// Address: 004060d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004060d4(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_14;
  
  puVar4 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (param_3 < 0) {
      param_5 = param_5 + param_3;
      param_3 = 0;
    }
    iVar1 = *(int *)(param_1 + -4);
    if (iVar1 < param_3) {
      param_3 = iVar1;
    }
    if (iVar1 - param_3 < param_5) {
      param_5 = iVar1 - param_3;
    }
    if (param_5 < 0) {
      param_5 = 0;
    }
    if (0 < param_5) {
      iVar1 = param_2 + (uint)*(byte *)(param_2 + 1);
      iVar2 = *(int *)(iVar1 + 2);
      piVar3 = *(int **)(iVar1 + 6);
      if (piVar3 == (int *)0x0) {
        local_14 = 0;
      }
      else {
        local_14 = *piVar3;
      }
      puVar4 = (undefined4 *)
               FUN_004027fc((int)((longlong)param_5 * (longlong)iVar2) + 8,
                            (int)((ulonglong)((longlong)param_5 * (longlong)iVar2) >> 0x20));
      *puVar4 = 1;
      puVar4[1] = param_5;
      puVar4 = puVar4 + 2;
      param_1 = param_1 + param_3 * iVar2;
      if (0 < param_5) {
        if (local_14 == 0) {
          FUN_00402a04(param_1,puVar4,param_5 * iVar2);
        }
        else {
          FUN_004032a8(puVar4,param_5 * iVar2,0);
          FUN_00405efc(puVar4,param_1,local_14,param_5);
        }
      }
    }
  }
  FUN_00405f14(param_4,param_2);
  *param_4 = puVar4;
  return;
}

