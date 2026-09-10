// Address: 00405f1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00405f1c(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  piVar2 = (int *)*param_1;
  iVar4 = *param_4;
  local_c = param_3;
  local_8 = param_1;
  if (iVar4 < 1) {
    if (iVar4 < 0) {
      FUN_00402958(4);
    }
    FUN_00405f14(local_8,param_2);
  }
  else {
    local_14 = 0;
    if (piVar2 != (int *)0x0) {
      local_14 = piVar2[-1];
      piVar2 = piVar2 + -2;
    }
    param_2 = param_2 + (uint)*(byte *)(param_2 + 1);
    local_1c = *(int *)(param_2 + 2);
    piVar1 = *(int **)(param_2 + 6);
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    local_20 = iVar4 * local_1c;
    if (local_20 / iVar4 != local_1c) {
      FUN_00402958(CONCAT31((int3)((uint)(local_20 / iVar4) >> 8),4),local_20 % iVar4);
    }
    local_20 = local_20 + 8;
    if ((piVar2 == (int *)0x0) || (*piVar2 == 1)) {
      local_24 = piVar2;
      if ((iVar4 < local_14) && (iVar3 != 0)) {
        thunk_FUN_00405744((int)piVar2 + iVar4 * local_1c + 8,iVar3,local_14 - iVar4);
      }
      FUN_0040283c(&local_24,local_20);
      piVar2 = local_24;
    }
    else {
      *piVar2 = *piVar2 + -1;
      piVar2 = (int *)FUN_004027fc(local_20);
      local_18 = local_14;
      if (iVar4 < local_14) {
        local_18 = iVar4;
      }
      if (iVar3 == 0) {
        FUN_00402a04(*local_8,piVar2 + 2,local_18 * local_1c);
      }
      else {
        FUN_004032a8(piVar2 + 2,local_18 * local_1c,0);
        FUN_00405efc(piVar2 + 2,*local_8,iVar3,local_18);
      }
    }
    *piVar2 = 1;
    piVar2[1] = iVar4;
    piVar2 = piVar2 + 2;
    FUN_004032a8((int *)(local_1c * local_14 + (int)piVar2),(iVar4 - local_14) * local_1c,0);
    if (1 < local_c) {
      local_c = local_c + -1;
      if (-1 < iVar4 + -1) {
        local_10 = 0;
        do {
          FUN_00405f1c(piVar2 + local_10,iVar3,local_c,param_4 + 1);
          local_10 = local_10 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    *local_8 = piVar2;
  }
  return;
}

