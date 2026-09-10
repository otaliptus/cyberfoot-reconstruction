// Address: 00413b2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00413b2c(ushort *param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  uint local_8;
  
  uVar1 = *param_1;
  local_8 = param_3;
  switch(uVar1) {
  case 0:
    local_8 = 0;
    break;
  case 1:
    if (DAT_00662450 != '\0') {
      FUN_00411500(1,0xb);
    }
    local_8 = 0;
    break;
  case 2:
    local_8 = (uint)(param_1[4] != 0);
    break;
  case 3:
    local_8 = (uint)(*(int *)(param_1 + 4) != 0);
    break;
  case 4:
    local_8 = (uint)(*(float *)(param_1 + 4) != _DAT_00413e70);
    break;
  case 5:
    local_8 = (uint)(*(double *)(param_1 + 4) != (double)_DAT_00413e70);
    break;
  case 6:
    local_8 = (uint)((float)*(longlong *)(param_1 + 4) != _DAT_00413e70);
    break;
  case 7:
    local_8 = (uint)(*(double *)(param_1 + 4) != (double)_DAT_00413e70);
    break;
  case 8:
    local_8 = FUN_00413974(param_1);
    local_8 = local_8 & 0xff;
    break;
  case 9:
  case 0xd:
    local_8 = FUN_00413a3c(param_1);
    local_8 = local_8 & 0xff;
    break;
  default:
    if (uVar1 == 0x100) {
      local_8 = FUN_00413974(param_1);
      local_8 = local_8 & 0xff;
    }
    else if (uVar1 == 0x101) {
      local_8 = FUN_00413a7c(param_1);
      local_8 = local_8 & 0xff;
    }
    else if ((uVar1 & 0x4000) == 0) {
      cVar2 = FUN_00413ae0(param_1,&local_8);
      if (cVar2 == '\0') {
        local_8 = FUN_00413a3c(param_1);
        local_8 = local_8 & 0xff;
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        local_8 = FUN_00413a3c(param_1);
        local_8 = local_8 & 0xff;
        break;
      case 2:
        local_8 = (uint)(**(short **)(param_1 + 4) != 0);
        break;
      case 3:
        local_8 = (uint)(**(int **)(param_1 + 4) != 0);
        break;
      case 4:
        local_8 = (uint)(**(float **)(param_1 + 4) != _DAT_00413e70);
        break;
      case 5:
        local_8 = (uint)(**(double **)(param_1 + 4) != (double)_DAT_00413e70);
        break;
      case 6:
        local_8 = (uint)((float)**(longlong **)(param_1 + 4) != _DAT_00413e70);
        break;
      case 7:
        local_8 = (uint)(**(double **)(param_1 + 4) != (double)_DAT_00413e70);
        break;
      case 8:
        local_8 = FUN_00413974(param_1);
        local_8 = local_8 & 0xff;
        break;
      case 0xb:
        local_8 = (uint)(**(short **)(param_1 + 4) != 0);
        break;
      case 0xc:
        local_8 = FUN_00413b2c(*(undefined4 *)(param_1 + 4));
        local_8 = local_8 & 0xff;
        break;
      case 0x10:
        local_8 = (uint)(**(char **)(param_1 + 4) != '\0');
        break;
      case 0x11:
        local_8 = (uint)(**(char **)(param_1 + 4) != '\0');
        break;
      case 0x12:
        local_8 = (uint)(**(short **)(param_1 + 4) != 0);
        break;
      case 0x13:
        local_8 = (uint)(**(int **)(param_1 + 4) != 0);
        break;
      case 0x14:
        bVar3 = false;
        if ((*(int **)(param_1 + 4))[1] == 0) {
          bVar3 = **(int **)(param_1 + 4) == 0;
        }
        local_8 = (uint)!bVar3;
      }
    }
    break;
  case 0xb:
    local_8 = (uint)(param_1[4] != 0);
    break;
  case 0xc:
    local_8 = FUN_00413b2c(*(undefined4 *)(param_1 + 4));
    local_8 = local_8 & 0xff;
    break;
  case 0x10:
    local_8 = (uint)((char)param_1[4] != '\0');
    break;
  case 0x11:
    local_8 = (uint)((char)param_1[4] != '\0');
    break;
  case 0x12:
    local_8 = (uint)(param_1[4] != 0);
    break;
  case 0x13:
    local_8 = (uint)(*(int *)(param_1 + 4) != 0);
    break;
  case 0x14:
    bVar3 = false;
    if (*(int *)(param_1 + 6) == 0) {
      bVar3 = *(int *)(param_1 + 4) == 0;
    }
    local_8 = (uint)!bVar3;
  }
  return local_8 & 0xff;
}

