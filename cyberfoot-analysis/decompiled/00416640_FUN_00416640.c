// Address: 00416640
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00416640(ushort *param_1,ushort *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int *local_10;
  
  local_10 = param_3;
  if (*param_2 == 0x400c) {
    FUN_00416640(param_1,*(undefined4 *)(param_2 + 4));
    return;
  }
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00411cbc(param_1);
  }
  uVar1 = *param_2;
  uVar2 = (uint)uVar1;
  if (0x14 < uVar2) {
    if (uVar2 == 0x100) {
      FUN_00416584(param_1,*(undefined4 *)(param_2 + 4));
      return;
    }
    if (uVar2 == 0x101) {
      FUN_004165d4(param_1,param_2);
      return;
    }
LAB_0041673d:
    if ((uVar1 & 0x2000) == 0) {
      if ((uVar1 & 0xfff) < 0x10f) {
        FUN_00412164(param_1,param_2);
      }
      else {
        cVar3 = FUN_00418f24(uVar1,&local_10);
        if (cVar3 == '\0') {
          FUN_004114ac();
        }
        else {
          (**(code **)(*local_10 + 0x20))(local_10,param_1,param_2);
        }
      }
    }
    else {
      FUN_00411ee4(param_1,param_2,&LAB_00416638);
    }
    return;
  }
  if (uVar2 != 0x14) {
    if (uVar2 - 0x10 < 3) {
      FUN_004126a8(param_1,param_2,3);
      return;
    }
    if (uVar2 - 0x10 == 3) {
      if ((*(byte *)((int)param_2 + 0xb) & 0x80) != 0) {
        FUN_004126a8(param_1,param_2,5);
        return;
      }
      FUN_004126a8(param_1,param_2,3);
      return;
    }
    goto LAB_0041673d;
  }
  if (*(int *)(param_2 + 6) == 0) {
    if (0x7fffffff < *(uint *)(param_2 + 4)) goto LAB_00416716;
  }
  else if (0 < *(int *)(param_2 + 6)) goto LAB_00416716;
  if (*(int *)(param_2 + 6) == -1) {
    if (0x7fffffff < *(uint *)(param_2 + 4)) {
LAB_00416706:
      FUN_004126a8(param_1,param_2,3);
      return;
    }
  }
  else if (-2 < *(int *)(param_2 + 6)) goto LAB_00416706;
LAB_00416716:
  FUN_004126a8(param_1,param_2,5);
  return;
}

