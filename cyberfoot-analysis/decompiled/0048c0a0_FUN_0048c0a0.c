// Address: 0048c0a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048c0a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[9];
  if (iVar1 == 1) {
    param_1[10] = 1;
    param_1[0xb] = 1;
  }
  else if (iVar1 == 3) {
    if (param_1[0x46] == 0) {
      if (param_1[0x49] == 0) {
        piVar2 = (int *)param_1[0x36];
        iVar1 = *piVar2;
        iVar3 = piVar2[0x15];
        iVar4 = piVar2[0x2a];
        if (((iVar1 == 1) && (iVar3 == 2)) && (iVar4 == 3)) {
          param_1[10] = 3;
        }
        else if (((iVar1 == 0x52) && (iVar3 == 0x47)) && (iVar4 == 0x42)) {
          param_1[10] = 2;
        }
        else {
          iVar5 = *param_1;
          *(int *)(iVar5 + 0x18) = iVar1;
          *(int *)(iVar5 + 0x1c) = iVar3;
          *(int *)(iVar5 + 0x20) = iVar4;
          *(undefined4 *)(*param_1 + 0x14) = 0x6f;
          (**(code **)(*param_1 + 4))(param_1,1);
          param_1[10] = 3;
        }
      }
      else if ((char)param_1[0x4a] == '\0') {
        param_1[10] = 2;
      }
      else if ((char)param_1[0x4a] == '\x01') {
        param_1[10] = 3;
      }
      else {
        iVar1 = *param_1;
        *(undefined4 *)(iVar1 + 0x14) = 0x72;
        *(uint *)(iVar1 + 0x18) = (uint)*(byte *)(param_1 + 0x4a);
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        param_1[10] = 3;
      }
    }
    else {
      param_1[10] = 3;
    }
    param_1[0xb] = 2;
  }
  else if (iVar1 == 4) {
    if (param_1[0x49] == 0) {
      param_1[10] = 4;
    }
    else if ((char)param_1[0x4a] == '\0') {
      param_1[10] = 4;
    }
    else if ((char)param_1[0x4a] == '\x02') {
      param_1[10] = 5;
    }
    else {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 0x14) = 0x72;
      *(uint *)(iVar1 + 0x18) = (uint)*(byte *)(param_1 + 0x4a);
      (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      param_1[10] = 5;
    }
    param_1[0xb] = 4;
  }
  else {
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  param_1[0xc] = 1;
  param_1[0xd] = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3ff00000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  param_1[0x13] = 1;
  param_1[0x14] = 1;
  param_1[0x15] = 0;
  param_1[0x16] = 2;
  param_1[0x17] = 1;
  param_1[0x18] = 0x100;
  param_1[0x22] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}

