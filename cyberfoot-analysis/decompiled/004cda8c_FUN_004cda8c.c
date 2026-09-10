// Address: 004cda8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cda8c(int *param_1)

{
  int *piVar1;
  char cVar2;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  cVar2 = (**(code **)(*param_1 + 0xdc))();
  if ((cVar2 != '\0') || (param_1[0x91] != 0)) {
    if (param_1[0x91] != 0) {
      if (*(short *)((int)param_1 + 0x342) != 0) {
        (*(code *)param_1[0xd0])(param_1[0xd1],param_1);
      }
      *(int **)(param_1[0x91] + 100) = param_1;
      *(undefined1 *)(param_1 + 0x8c) = 2;
      FUN_004d0408(param_1);
      (**(code **)(*param_1 + 0x7c))();
      if (*(char *)((int)param_1 + 0x241) == '\0') {
        FUN_004070b8(param_1[0x10],param_1[0x11] + param_1[0x13],&local_c);
      }
      else if (*(char *)((int)param_1 + 0x241) == '\x01') {
        FUN_004070b8(param_1[0x10] + param_1[0x12],param_1[0x11],&local_c);
      }
      FUN_00465d20(param_1[0xc],&local_c,&local_14);
      local_c = local_14;
      local_8 = local_10;
      piVar1 = (int *)param_1[0x91];
      if ((char)piVar1[0x18] == '\x01') {
        local_c = local_14 + param_1[0x12];
      }
      else if ((char)piVar1[0x18] == '\x02') {
        local_c = param_1[0x12] >> 1;
        if (local_c < 0) {
          local_c = local_c + (uint)((param_1[0x12] & 1U) != 0);
        }
        local_c = local_14 + local_c;
      }
      (**(code **)(*piVar1 + 0x40))(piVar1,local_c,local_10);
      *(undefined1 *)(param_1 + 0x8c) = 0;
      (**(code **)(*param_1 + 0x80))();
    }
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

